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
#include "push_const.h"
#include "push_funcs.h"
#include "push_text.h"
#include "push_jump.h"
#include "push_dm.h"

int lastShotBy[PLAYERMAX];
int deathAssistedBy[PLAYERMAX];

int PlayerTIDs[PLAYERMAX];

script PUSH_SERVER OPEN
{
    IsServer = 1;
    int cjumps, oldcjumps;
    int s = unusedTID(37000, 47000);
    int players = PlayerCount();
    int drones = 0;

    /*if (Spawn("Doomsphere",0,0,0,s)) // Attempt to spawn a Doomsphere, a Zandronum-exclusive item.
    {
        Thing_Remove(s);
        SetCVar("p_runninginzandro",1);
        SetCVar("p_runninginzdoom",0);
    }*/
    // This didn't work because the Spawn would choose to not work at various times, because of collision.
    // If there is no room for an actor to exist, it simply won't spawn.
    // To get around this, instead I'm doing it the opposite way, using SpawnForced to spawn a ZDoom-exclusive item.
    // This is not a future-proof method at all; if Zandronum catches up with ZDoom (hahahaha), it'll spawn this item as well and read as ZDoom.
    // If we ever reach that point and I am either dead or have moved on from Doom, simply replace the script with the uncommented above script and change it to SpawnForced.
    if (SpawnForced("SpeakerIcon",0,0,0,s,0))
    { // Other ZDoom-exclusive items include PowerBuddha (not in GZDoom 1.9), CajunTrace, CajunBodyNode, ArtiPoisonBagShooter, ArtiPoisonBagGiver, and AmbientSoundNoGravity.
        Thing_Remove(s);
        SetCVar("p_runninginzandro",0);
        SetCVar("p_runninginzdoom",1);
    }
    else
    {
        SetCVar("p_runninginzandro",1);
        SetCVar("p_runninginzdoom",0);
    }

    while (1)
    {

    SetAirControl(0.01);

    if (!GetCvar("compat_clientssendfullbuttoninfo") && GetCvar("p_runninginzandro") == 1)
        { ConsoleCommand("set compat_clientssendfullbuttoninfo 1"); }

    if (GetCvar("lmsallowedweapons") != 0 && GetCvar("p_runninginzandro") == 1)
        { ConsoleCommand("set lmsallowedweapons 0"); }

    if (!GetCvar("sv_nocrouch") && GetCvar("p_runninginzandro") == 1)
        { ConsoleCommand("set sv_nocrouch 1"); }

        oldcjumps = cjumps;
        cjumps = GetCVar("p_jumpcount");
        if (cjumps != oldcjumps) { MaxJumpCount = cjumps; }

    for (int i = PlayerTIDs[PLAYERMAX]; i < PlayerTIDs[PLAYERMAX] + PLAYERMAX; i++)
      if (CheckActorInventory(i, "IsADrone"))
        drones++;
    if (players - drones <= 1)
    {
        PrintBold(s:"One player left.");
    }

        delay(1);
    }
}

Script PUSH_SUDDENDEATH OPEN
{
    // Probably could compress this into the above script, but I'd rather not take a chance.
    int TimeUntilSuddenDeath = 1;

    delay(5);

    if (GetCvar("p_suddendeath") == 1 && isLMS()) // Doesn't show up in other game modes because there's no real need to end a match fast, is there?
    {
        while(GetCvar("p_timelimit") >= TimeUntilSuddenDeath)
        {
            delay(2100);
            //PrintBold(s:"2100 tics have passed.");
            TimeUntilSuddenDeath++;
        }
        if (GetCvar("p_timelimit") <= 0) { delay(2100); }

        //PrintBold(s:"Preparing for sudden death.");

        if (RealPlayerCount() > 1 && GetCvar("p_suddendeath") == 1)
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

script PUSH_ENTER ENTER
{
    int Buttons;
    int Angle;
    int DropSomeWeight;
    int tid;
    int pln = PlayerNumber();

    TakeInventory("LightAsAFeather",1);
    TakeInventory("EmergencyDodgeDone",1);
    TakeInventory("DrawingToolOn",1);
    TakeInventory("DrawingToolReady",1);
    GiveInventory("ImAlive",1);
    //SetPlayerProperty(0,1,PROP_BUDDHA);
    GiveInventory("SetUnshootable",1);
    GiveInventory("PowerRespawnProtection",1);

    while (1)
    {
      if (CheckInventory("IsADrone") == 0)
      {
        TakeInventory("Fist",1);
        TakeInventory("Pistol",1);
        TakeInventory("Shotgun",1);
        TakeInventory("SuperShotgun",1);
        TakeInventory("Chaingun",1);
        TakeInventory("PlasmaRifle",1);
        TakeInventory("BFG9000",1);
        TakeInventory("Chainsaw",1);
        // Just in case lms_allowedweapons 0 doesn't take or just in case someone decides to give weapons or whatever.
        TakeInventory("Drone Gun",1);

        tid = defaultTID(-1);
        PlayerTIDs[pln] = tid;

        GiveInventory("500Health",500);

        if (GetCvar("p_punchdrunk") == 1)
          { TakeInventory("Push Gun",1); }
        else
          { GiveInventory("Push Gun",1); }
        if (GetCvar("p_triggerhappy") == 1)
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
            TakeInventory("SurfingCounter",15);
        }
        else
        {
            TakeInventory("OnTheGround", 1);
        }

        if (keyDown(BT_USER1)) { GiveInventory("DrawingToolOn",1); }

        if (GetCvar("p_runninginzandro") == 1)
        {
          if (GetCvar("sv_maxlives") > 1 && GetCvar("p_playerdrones") == 1 && GetPlayerLivesLeft(pln) == 0 && PlayerIsSpectator(pln) == 0 && isLMS() && PlayerCount() >= 2) // Bloody hell that's a lot of checks.
          { 
            MorphActor(0, "DronePlayer", "", 0x7FFFFFFF, 194, "TeleportFog", "TeleportFog");
            TakeInventory("Push Gun",1);
            TakeInventory("Force Gauntlet",1);
            GiveInventory("IsADrone",1);
          }
        }
        if (isDead(0)) { terminate; }

        delay(1);
      }
      else if (CheckInventory("IsADrone") == 1)
      {
        GiveInventory("PowerPermaFlight",1);
        if (isDead(0)) { terminate; }
        delay(1);
      }
    }
}

script PUSH_RESPAWN RESPAWN
{
    ACS_ExecuteAlways(532,0,0,0);
}

script PUSH_DEATH DEATH
{
    //int pln = PlayerNumber();
    //Log(n:pln, s:" was thrown off by ", n:lastShotBy[pln]);

    TakeInventory("ImAlive",1);
    TakeInventory("LightAsAFeather",1);
    TakeInventory("DrawingToolOn",1);
    TakeInventory("DrawingToolReady",1);
    Thing_ChangeTID(0,0);
}

script PUSH_WALLHACK (int which)
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

script PUSH_DUNKED (void)
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

/*<04:55:27> "Kyle873": 
int players = PlayerCount();
int drones = 0;
for (int i = PlayerTIDs; i < PlayerTIDs + MAX_PLAYERS; i++)
    if (CheckActorInventory(i, "IsADrone"))
        drones++;
if (players - drones <= 1)
{
    // We've only got one player left
}

<04:56:25> "Kyle873": 
if (players - drones <= 1)
{
    for (int i = PlayerTIDs; i < PlayerTIDs + MAX_PLAYERS; i++)
        Thing_Damage(i, 1000000;
}