script PUSH_DM_ENTER ENTER
{
    delay(15);
    if (GetCVar("deathmatch") != 1 || isLMS()) { terminate; }
    if (TimeExceeded > 15)
    {
        KickFromGame(PlayerNumber(), "Please wait until the current match has ended.");
    }
}

script PUSH_DM_OPEN OPEN
{
    TimeExceeded = 0;
    delay(5);
    TimeExceeded = 0;
    delay(5);
    if (GetCVar("deathmatch") != 1 || isLMS()) { terminate; }
    TimeExceeded = 0;
    PrintBold(s:"Fifteen seconds to join in.");
    while(1)
    {
        delay(35);
        TimeExceeded++;
        if (PlayerCount() <= 2) { TimeExceeded = 0; } 
    }
}