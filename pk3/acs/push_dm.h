script 827 ENTER
{
    if (GetCVar("deathmatch") != 1) { terminate; }
    delay(15);
    if (TimeExceeded > 15)
    {
        KickFromGame(PlayerNumber(), "Please wait until the current match has ended.");
    }
}

script 828 OPEN
{
    if (GetCVar("deathmatch") != 1) { terminate; }
    TimeExceeded = 0;
    delay(5);
    TimeExceeded = 0;
    delay(5);
    TimeExceeded = 0;
    PrintBold(s:"Fifteen seconds to join in.");
    while(1)
    {
        delay(35);
        TimeExceeded++;
        if (PlayerCount() <= 2) { TimeExceeded = 0; } 
    }
}