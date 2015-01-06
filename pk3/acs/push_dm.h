script 827 ENTER
{
    delay(15);
    if (GetCVar("deathmatch") != 1 || GetCvar("lastmanstanding") == 1) { terminate; }
    if (TimeExceeded > 15)
    {
        KickFromGame(PlayerNumber(), "Please wait until the current match has ended.");
    }
}

script 828 OPEN
{
    TimeExceeded = 0;
    delay(5);
    TimeExceeded = 0;
    delay(5);
    if (GetCVar("deathmatch") != 1 || GetCvar("lastmanstanding") == 1) { terminate; }
    TimeExceeded = 0;
    PrintBold(s:"Fifteen seconds to join in.");
    while(1)
    {
        delay(35);
        TimeExceeded++;
        if (PlayerCount() <= 2) { TimeExceeded = 0; } 
    }
}