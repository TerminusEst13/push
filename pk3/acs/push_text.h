int PushCredits =
"- Gun sprite drawn by Sgt. Shivers.\n\
- Laser trails by ijon tichy.\n\
- Double-jump system by ijon tichy.\n\
- Player sprites edited from Mars 3D and Strife.\n\
- Dunked smoke from Marathon.\n\
- Defense Drone sprites by Revae.\n\
- Push laser sprites by Eriance.\n\
- Force Gauntlet sprites by Riet.\n\
- Critical error code coded by Kyle873.\n\
- Push grenade sprites from Freedoom.\n\
- hudmessageonactor by Caligari87.\n\
- Pusher Cacodemon by IdeIdoom.\n\
- Falling stars coded by KeksDose.\n\
\n\
- F1 help screen and intermission images drawn by Sgt. Shivers.\n\
- M_DOOM graphic by Mr. Setharoo and Smoke_Fumus.\n\
- D_DM2INT is from Extreme Pinball.\n\
- D_DM2TTL is Push & Pull by ((dynamic)).\n\
- Other music is credited in MapInfo.\n\
\n\
- PUSH02, PUSH04, and PUSH09 by Sgt. Shivers.\n\
- PUSH03 by Roman6a.\n\
 ^- Textures from Quake (except for the lava).\n\
- PUSH05 and PUSH18 by Dewce.\n\
- PUSH06 by DRL 3.33.\n\
- PUSH07 and PUSH14 by OnePunch-Man.\n\
 ^ PUSH14 textures by Agaures.\n\
- PUSH08 by Mike12.\n\
- PUSH10 by Darsycho.\n\
- PUSH11 and PUSH43 by IdeIdoom.\n\
 ^- Textures by Cyb, taken from void.wad\n\
- PUSH12 by Aquasa.\n\
 ^ Skybox taken from Cybercrime 3.\n\
- PUSH15, PUSH17, PUSH39, and PUSH40 by UnholyPimpin.\n\
- PUSH16 by Seryder.\n\
- PUSH19 and PUSH32 by PresidentPeople.\n\
 ^ Duke3D textures, water fountain and palm tree sprites from Realm 667.\n\
 ^ Folding chair and potted plant from Doom Vacation.\n\
 ^ Sky from PSX Doom TC.\n\
 ^ Sand texture from Armageddon2v63.\n\
- PUSH20 by Combinebobnt.\n\
- PUSH21 by Hypnotoad.\n\
 ^- Duke3D textures taken from Duke Nukem 3D, obviously.\n\
- PUSH22 by Butt_Ghost.\n\
 ^- Textures taken from cc4-tex.\n\
- PUSH23 and PUSH26 by W1D3A55.\n\
- PUSH24 by Esselfortium.\n\
- PUSH26 by gaydad420.\n\
 ^- Skybox from Sonic Advance 2.\n\
 ^- Water from Metroid Fusion.\n\
- PUSH27 and PUSH45 by Gothic.\n\
 ^- Textures from Quake.\n\
- PUSH28 by Sgt. Shivers, Kyle873, Seryder, and TerminusEst13.\n\
 ^- Textures from HacX.\n\
- PUSH29 by Lego.\n\
 ^- Textures from Mega Man 8-Bit Deathmatch.\n\
- PUSH30 by MrSetharoo.\n\
 ^- Textures from (where else?) StarTropics.\n\
- PUSH31 by Kurashiki.\n\
- PUSH10 and PUSH33 by Tango.\n\
 ^- PUSH10 textures taken from 8-Bit Deathmatch.\n\
 ^- Water texture by didy.\n\
 ^- Sky texture taken from Odamex CTF.\n\
 ^- owall and oconcr taken from Ola Bjorling's Darkening E2).\n\
 ^- Vegetation taken from Exhumed, Captain Toenail, and didy.\n\
- PUSH34 and PUSH49 by Infirnex.\n\
 ^- Ice textures taken from Mageslayer.\n\
- PUSH35 by Madokage.\n\
 ^- Textures from Yume Nikki.\n\
- PUSH36 by Rofl25.\n\
 ^- Textures from Smash Bros. N64.\n\
- PUSH37 and PUSH42 by Mystical.\n\
 ^- Textures taken from HDoom and his big fat windy bottom.\n\
- PUSH38 by UniversalQuantifier.\n\
- PUSH41 by GuardSoul.\n\
- PUSH44, PUSH46, and PUSH48 by Gardevoir.\n\
- PUSH47 by Smoke_Fumus.\n\
 ^- Textures from Shadow Warrior and Duke Nukem 3D.";

int PushChangelog =
"FROM V0.5 TO V0.6:\n\
==================\n\
GAMEPLAY:\n\
- Cacodemons on Push17 are easier to hit and no longer so stupidly aggressive.\n\
- The explosion radius of the grenade has been increased by 16 units, for slightly easier recoveries.\n\
- The alt-fire of the gauntlet is now capable of reflecting shots away from the player. It's not graphically visible until a Zandronum bug is fixed, but it's an actual thing now nonetheless.\n\
- Weapon switching is now a little under twice as fast.\n\
- Both weapons' alt-fires had their WRF_NOSWITCH times slashed in half, meaning players will be able to swap to a different weapon much faster.\n\
- The visor now tracks people better, updating its position in half the time as before.\n\
- The Push laser speed has been increased from 400 to 450, and its radius increased from 3 to 4.\n\
- The Push laser now fires straight at the crosshair, rather than 8 units underneath.\n\
- A drawing utensil has been implemented as an extra key for the people who think of Push as a multiplayer MSPaint simulator.\n\
- The F1 help screen is no longer the best but now is much more informative.\n\
- The Doom pistol is now removed from the player on map enter.\n\
- Deathmatch support has been implemented. It's a little wonky and isn't perfect until the engine can track who pushed who off, but it's a decent little timewaster in the meantime.\n\
- The lightamp of the wallhack visor worked in Software but didn't work in OpenGL. Not sure why. Until I can figure out why, it's been removed.\n\
\n\
\n\
MAPS:\n\
- Absolutely nothing about Push28 was changed.\n\
- The teleporters on Push11 have been lowered and their textures changed, for easier jumping-into and location differentiation.\n\
- Push33's amount of actors has been dramatically cut down to a third of what it was, and filesize was reduced from over three megabytes to barely 1.6. This should help make the map less laggy.\n\
- Push27 has been expanded and the center arena filled in. This should make the arena more difficult to recover from, and slightly more difficult to get knocked off.\n\
- The center platform in PUSH04 has been raised so people can react easier to trips. The outer ring has been expanded so one simple nudge doesn't throw people off, but has lowered so getting thrown off requires more reaction.\n\
- PUSH35's main arena was made smaller, and the walls stretched further out. It should be easier to knock people off now.\n\
- PUSH36 has been dramatically ensmallened and now can actually be recovered from.\n\
- PUSH36 now has a defined ground texture.\n\
- PUSH17 has smaller walls to make it easier to recover and a few floating platforms for a little bit of Z-axis action.\n\
- PUSH30 has had the laggy pyramids removed, and many many more spawn points placed throughout the area.\n\
- PUSH30 now has many more platforms spread out and about.\n\
- PUSH34's silos have been expanded for more safe ground.\n\
- PUSH32's pillars now have black edges.\n\
- PUSH32's floor texture now has a noise filter for easier identification.\n\
- Several floating platforms on PUSH10 were removed and the buildings moved in closer, for a tighter arena.\n\
- The killfloor on PUSH10 has been brought up quite a bit for easier recovery.\n\
- PUSH10 is no longer a horrible lagfest on Software.\n\
- PUSH15 now has a visible floor.\n\
\n\
- A new map, the XXX ImpBar by Mystical, has been added at Push37.\n\
- A new map, Insert Cool Pun Here by UniversalQuantifier, has been added at Push38.\n\
- A new map, Fusion Reactor by UnholyPimpin, has been added at Push39.\n\
- A new map, Could'a Gotcha by UnholyPimpin, has been added at Push40.\n\
- A new map, Tritium Extractor by GuardSoul, has been added at Push41.\n\
- A new map, Star Beam by Mystical, has been added at Push42.\n\
- A new map, 'Void the Colors by IdeIdoom, has been added at Push43.\n\
- A new map, Sinking Feeling by Gardevoir, has been added at Push44.\n\
- A new map, The Future of the Year 2000 by Gothic, has been added at Push45.\n\
- A new map, Battlefield by Gardevoir, has been added at Push46.\n\
- A new map, I Left the Faucet On by Smoke_Fumus, has been added at Push47.\n\
- A new map, I am TEKWALL4 by Gardevoir, has been added at Push48.\n\
- A new map, Ice Ice Baby by Infirnex, has been added at Push49.\n\
\n\
\n\
POLISH:\n\
- Push10 was renamed to 'Above the 8-Bit Freeway' and Push33 renamed to 'Atlantis Highway', as per author request.\n\
- Push27 now has lava balls spurting up every now and then.\n\
- The lollipops in PUSH31 are now transparent, and the alignments on the chocolate bar were fixed.\n\
- UnholyPimpin has added a nice little touch to PUSH17, in honor of our Cacoward. Thanks, mate!\n\
- PUSH34's skybox has been tweaked to look a little prettier.\n\
- The doublejump indicator now has text on it to identify that, yes, this is for double-jump.\n\
- The doublejump indicator now empties out when used instead of vanishing.\n\
- A new M_DOOM logo has been provided by Smoke_Fumus and MrSetharoo.\n\
- We have a new D_DM2TTL song, Push & Pull by ((dynamic)).\n\
- Menu browsing, chatting, and connecting now have their own unique sounds.\n\
- If lms_allowedweapons is not 0, it will automatically be set to 0.\n\
- A few errant textures on PUSH18 have been fixed.\n\
- The scan visor has been edited to be centered.\n\
- The floor in Push13 is no longer bugged.\n\
- PUSH17's sides now are a different shade of red than the floor, for easier differentiation.\n\
\n\
\n\
WHY WE CAN'T HAVE NICE DETAIL:\n\
- PUSH06's lower platforms have been raised up to prevent people from camping there.\n\
- The mushroom platform in PUSH10 has been removed.\n\
- People were camping in the corners around Push30's stairs. These have been replaced with bottomless pits.\n\
- The ledge behind PUSH30's Mike portrait has been removed, as people were hiding there.";

script 280 (int changelogshit2) NET CLIENTSIDE
{
    switch (changelogshit2)
    {
    case 1:
        Log(s:PushCredits);
        break;

    case 2:
        Log(s:PushChangelog);
        break;
    }
}