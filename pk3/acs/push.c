#include "zcommon.acs"
#library "push"

world int 0:MaxJumpCount;
global int 58:TimeExceeded;

int IsServer;
int FontX;
int FontY;
int FontTim;
str FontZ[2] ={"0","1"};
int FontCL[3] ={CR_DARKGREEN,CR_GREEN,CR_OLIVE};

#include "commonfuncs.h"
#include "push_funcs.h"
#include "push_text.h"
#include "push_jump.h"
#include "push_dm.h"

int lastShotBy[PLAYERMAX];
int deathAssistedBy[PLAYERMAX];

int PlayerTIDs[PLAYERMAX];

script 531 OPEN
{
    IsServer = 1;
    int cjumps, oldcjumps;

    if (!GetCvar("push_suddendeath"))
        { ConsoleCommand("set push_suddendeath 1"); ConsoleCommand("archivecvar push_suddendeath"); }

    if (!GetCvar("push_jumpcount"))
        { ConsoleCommand("set push_jumpcount 2"); ConsoleCommand("archivecvar push_jumpcount"); }

    if (!GetCvar("push_timelimit"))
        { ConsoleCommand("set push_timelimit 4"); ConsoleCommand("archivecvar push_timelimit"); }

    if (!GetCvar("push_punchdrunk"))
        { ConsoleCommand("set push_punchdrunk 0"); ConsoleCommand("archivecvar push_punchdrunk"); }

    if (!GetCvar("push_triggerhappy"))
        { ConsoleCommand("set push_triggerhappy 0"); ConsoleCommand("archivecvar push_triggerhappy"); }

    while (1)
    {

    SetAirControl(0.01);

    if (!GetCvar("compat_clientssendfullbuttoninfo"))
        { ConsoleCommand("set compat_clientssendfullbuttoninfo 1"); }

    if (!GetCvar("sv_nocrouch"))
        { ConsoleCommand("set sv_nocrouch 1"); }

        oldcjumps = cjumps;
        cjumps = GetCVar("push_jumpcount");
        if (cjumps != oldcjumps) { MaxJumpCount = cjumps; }

        delay(1);
    }
}

Script 530 OPEN
{
    // Probably could compress this into the above script, but I'd rather not take a chance.
    int TimeUntilSuddenDeath = 1;

    delay(5);

    if (GetCvar("push_suddendeath") == 1)
    {
        while(GetCvar("push_timelimit") >= TimeUntilSuddenDeath)
        {
            delay(2100);
            //PrintBold(s:"2100 tics have passed.");
            TimeUntilSuddenDeath++;
        }
        if (GetCvar("push_timelimit") <= 0) { delay(2100); }

        //PrintBold(s:"Preparing for sudden death.");

        if (RealPlayerCount() > 1 && GetCvar("push_suddendeath") == 1)
        {
            AmbientSound("suddendeath/alarm",127);
            SetFont("smallfont");
            HudMessageBold(s:"WARNING: INVALID ACCESS DETECTED";HUDMSG_TYPEON,0,CR_RED,0.5,0.2,3.5,0.05);

            while (1)
            {
                SpawnSpot("TeleportFog",130);
                SpawnSpot("SuddenDeathDrone",130,1313);
                delay(350);
                if (RealPlayerCount() == 0)
                {
                    Thing_Remove(1313);
                    delay(1);
                    terminate;
                }
            }
        }
    }
}

script 532 ENTER
{
    int Buttons;
    int Angle;
    int DropSomeWeight;
    int tid;
    int pln = PlayerNumber();

    GiveInventory("SetUnshootable",1);
    GiveInventory("PowerRespawnProtection",1);
    TakeInventory("Fist",1);
    TakeInventory("Pistol",1);
    TakeInventory("Shotgun",1);
    TakeInventory("SuperShotgun",1);
    TakeInventory("Chaingun",1);
    TakeInventory("PlasmaRifle",1);
    TakeInventory("BFG9000",1);
    TakeInventory("Chainsaw",1);
    TakeInventory("EmergencyDodgeDone",1);
    TakeInventory("DrawingToolOn",1);
    TakeInventory("DrawingToolReady",1);
    GiveInventory("ImAlive",1);

    while (1)
    {
        tid = defaultTID(-1);
        PlayerTIDs[pln] = tid;

        GiveInventory("500Health",500);

        if (GetCvar("push_punchdrunk") == 1)
          { TakeInventory("Push Gun",1); }
        else
          { GiveInventory("Push Gun",1); }
        if (GetCvar("push_triggerhappy") == 1)
          { TakeInventory("Force Gauntlet",1); }
        else
          { GiveInventory("Force Gauntlet",1); }

        if (DropSomeWeight == 70 && CheckInventory("LightAsAFeather") == 0)
        {
            GiveInventory("SetShootable",1);
            GiveInventory("LightAsAFeather",1);
        }
        DropSomeWeight++;

        Buttons = GetPlayerInput(-1, INPUT_BUTTONS);
        Angle = GetActorAngle(0) >> 8;

        if (CheckInventory("DoomedGuy") > 0) { GiveInventory("DunkedSmokeActivator",1); }

        if (GetActorZ(0) - GetActorFloorZ(0) == 0)
        {
            GiveInventory("OnTheGround", 1);
            TakeInventory("EmergencyDodgeDone",1);
            TakeInventory("DoomedGuy",70);
            /*if (CheckInventory("MaybedDoomedGuy") == 3)
            { // Has the player been on the ground for 3 tics?
                deathAssistedBy[pln] = 0;
                lastShotBy[pln] = 0;
            }
            else // If not, count a tic.
            { GiveInventory("MaybeDoomedGuy",1); }*/
            
        }
        else
        {
            TakeInventory("OnTheGround", 1);
            //TakeInventory("MaybeDoomedGuy",3);
        }

        if (keyDown(BT_USER1)) { GiveInventory("DrawingToolOn",1); }

        if (isDead(0)) { terminate; }

        delay(1);
    }
}

script 533 RESPAWN
{
    ACS_ExecuteAlways(532,0,0,0);
}

script 534 DEATH
{
    //int pln = PlayerNumber();
    //Log(n:pln, s:" was thrown off by ", n:lastShotBy[pln]);

    TakeInventory("ImAlive",1);
    TakeInventory("LightAsAFeather",1);
    TakeInventory("DrawingToolOn",1);
    TakeInventory("DrawingToolReady",1);
    Thing_ChangeTID(0,0);
}

/*Script 535 (void)
{
    int pln = PlayerNumber();
    SetActivatorToTarget(0);
    lastShotBy[pln] = PlayerNumber();
}

Script 536 ENTER
{
    int pln = PlayerNumber();

	while (true)
	{
		if (GetActorZ(0) - GetActorFloorZ(0) == 0)
		{
			Delay(1);
			deathAssistedBy[pln] = 0;
			lastShotBy[pln] = 0;
		}
		Delay(1);
	}
}*/

script 421 (int which)
{
    int i, time, tid;
    int pln = PlayerNumber();
    
    switch (which)
    {
      case 1:
        GiveInventory("WallHackVision",1);
        GiveInventory("CannotIntoWallhack", 1);

        while (1)
        {
            for (i = 0; i < PLAYERMAX; i++)
            {
                if (i == pln || !PlayerInGame(i)) { continue; }
                tid = PlayerTIDs[i];
                if (isDead(tid)) { continue; }

                HudMessageOnActor(tid, 0x7FFFFFFF, "PLAYMARK", "A", tid);
            }

            Delay(2);

            if (!CheckInventory("WallhackVision")) { break; }
            TakeInventory("CannotIntoWallhack", 1);

            Delay(2);
            if (!CheckInventory("WallhackVision")) { break; }
        }
        break;
    
      case 2:
        TakeInventory("WallHackVision",1);
        GiveInventory("CannotIntoWallhack",1);
        Delay(15);
        TakeInventory("CannotIntoWallhack",1);
        break;
    }
}

// The below was made by Kyle873, whom is 7H3 1337357 |-|4(|<3R 0N 7H3 PU5H|\|37

script 404 (void)
{
    int Time = 52;
    
    while (Time > 0)
    {
        SetHudSize(320, 240, false);
        
        // Scanlines
        if ((Timer() % 3) == 0)
        DrawScanlines();
        
        // Binary
        if ((Timer() % 3) == 0)
            DrawBinary();

        SetFont("bigfont");
        FontX = random(0.00,320.00);
        FontY = random(0.00,240.00);
        hudmessage (s:FontZ[random(0,1)],s:"\n";
        1, 0,FontCL[random(0,2)], FontX, FontY, 0.1);
        delay(1);
        
        Time--;
        Delay(1);
    }
}