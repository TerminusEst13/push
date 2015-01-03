function void hudmessageonactor(int tid, int range, str sprite, str text, int id) // By Caligari 87
{
    int dist, ang, vang, pitch, x, y;
    int HUDX = 1280;
    int HUDY = 960;
    int offset = 0;

    if(sprite != -1)
    {
        setfont(sprite);
        text = "A";
        offset = 0.1;
    }

    sethudsize(HUDX, HUDY, 1);
    x = getactorx(tid) - getactorx(0);
    y = getactory(tid) - getactory(0); 

    vang = vectorangle(x,y);
    ang = (vang - GetActorAngle(0) + 1.0) % 1.0;

    if(((vang+0.125)%0.5) > 0.25) dist = fixeddiv(y, sin(vang));
    else dist = fixeddiv(x, cos(vang));

    if ((ang < 0.2 || ang > 0.8) && dist < range)
    {
        pitch = vectorangle(dist, getactorz(tid) - (getactorz(0) + 41.0));
        pitch = (pitch + GetActorPitch(0) + 1.0) % 1.0;

        x = HUDX/2 - ((HUDX/2) * sin(ang) / cos(ang));
        y = HUDY/2 - ((HUDX/2) * sin(pitch) / cos(pitch));

        if(sprite != -1)
            setfont(sprite);
        hudmessage(s:text; HUDMSG_FADEOUT, id, CR_UNTRANSLATED, (x<<16)+offset, ((y<<16)+offset)-32.0, 0.25, 0.5);
    }
    else { hudmessage(s:" "; HUDMSG_PLAIN, id, CR_UNTRANSLATED, 0, 0, 0.1); }
}

function void DrawScanlines(void)
{
    int Y = Random(0, 240) << 16;
    int Alpha = FixedDiv(Random(25, 75), 100);
    
    // Scanlines
    SetFont("Line");
    HudMessage(s:"A"; HUDMSG_FADEOUT, 0, CR_WHITE, 0.0, Y, 0.05, 1.0, Alpha);
}

function void DrawBinary(void)
{
    int X = Random(0, 320) << 16;
    int Y = Random(0, 240 / 6) << 16;
    int FadeInTime = 0.1;
    int FadeOutTime = 0.25;
    int Rows = Random(10, 30);
    str Binary;
    
    for (int i = 0; i < Rows; i++)
    {
        if (Random(0, 1))
            Binary = "1";
        else
            Binary = "0";
        
        SetFont("SMALLFONT");
        HudMessage(s:Binary; HUDMSG_FADEINOUT, 0, CR_GREEN, X, Y, 0.05, FadeInTime, FadeOutTime, 0.75);
        
        FadeInTime += 0.1;
        FadeOutTime += 0.1;
        Y += 8.0;
    }
    
    // OH NO
    if (!Random(0, 100))
    {
        SetFont("BIGFONT");
        HudMessage(s:"DIVIDE BY ZERO"; HUDMSG_FADEOUT, 0, CR_GREEN, X, Y - 100.0, 0.05, 3.0, 0.75);
    }
}