int PushCredits =
"- Gun sprite drawn by Sgt. Shivers\n\
- Laser trails by ijon tichy.\n\
- Double-jump system by ijon tichy.\n\
- Player sprites edited from Mars 3D.\n\
- Dunked smoke from Marathon.\n\
- Defense Drone sprites by Revae.\n\
- Push laser sprites by Eriance.\n\
- Force Gauntlet sprites by Riet.\n\
- Critical error code coded by Kyle873\n\
- Push grenade sprites from Freedoom.\n\
- hudmessageonactor by Caligari87.\n\
- Pusher Cacodemon by IdeIdoom.\n\
\n\
- D_DM2INT is from Extreme Pinball\n\
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
- PUSH11 by IdeIdoom.\n\
- PUSH12 by Aquasa.\n\
 ^ Skybox taken from Cybercrime 3.\n\
- PUSH15 and PUSH17 by UnholyPimpin.\n\
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
- PUSH27 by Gothic.\n\
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
- PUSH34 by Infirnex.\n\
- PUSH35 by Madokage.\n\
 ^- Textures from Yume Nikki.\n\
- PUSH36 by Rofl25.\n\
 ^- Textures from Smash Bros. N64.";

int PushChangelog =
"FROM V0.4 TO V0.5:\n\
==================\n\
GAMEPLAY:\n\
- Levels that are too bright now automatically give the players items that turn shots translucent, rather than additive.\n\
- Players now have an inventory item that activates a wallhack visor, which allows them to see exactly where other players are located.\n\
- Sudden Death Drones now have their mass halved, meaning they can be pushed about. Taking 'damage' makes them forget about their target and wander about for a bit.\n\
- The Gauntlet alt-fire now does a whole -2 recoil instead of -1.\n\
\n\
MAPS:\n\
- Thanks to PresidentPeople, Push32 has had the circles slowly peter out in darkness, for easier identification of where you are.\n\
- The height of Push32 has been increased, and players will no longer be scraping against the ceiling after four minutes.\n\
- The grey rocks on Push22 are now colored red, for easier identification of kill floors.\n\
- Push31 has had the height of the cake lowered, less 3D floors, and the platforms brought closer to the center.\n\
- The sudden death drones should now work on Push31 and Push22.\n\
- Everyone now spawns at the same height on Push23. No more spawning next to lava.\n\
- The glowing lights on Push24 have resumed their original jumppad behavior in SpaceDM5.\n\
- The stone walls on Push27 are now different colors than the floor textures, for easier differentiation between floor and wall.\n\
- Now no player spawns on Push16 are on an area sinkable into the floor.\n\
- The small ledges outside the center platform on Push12 are no longer instant kill.\n\
- Push25 has been replaced with Start to Crate, by W1D3A55.\n\
- Push30 has been dramatically rehauled, and both the map and the textures themselves are now much larger.\n\
- Push10 has been replaced with Funs in the Nighttime, by Tango.\n\
- Push11 has been replaced with the Big-Ass Teleporter, by IdeIdoom.\n\
- Push17 now has little babby cacos coming out of the mouth every ten seconds.\n\
- Push33 has been implemented, Coral Circuit by Tango.\n\
- Push34 has been implemented, the Dreadmill by Infirnex.\n\
- Push35 has been implemented, the Nexus by Madokage.\n\
- Push36 has been implemented, Polygons are Inaccurate by Rofl25.\n\
\n\
POLISH:\n\
- Player is now slightly smaller, with a scale of 0.9.\n\
- Push32 level now starts off with the 'Welcome to zombo.com' message.\n\
- The moire texture on Push29 has been recolored to be easier on the eyes.\n\
\n\
WHY WE CAN'T HAVE NICE DETAIL:\n\
- The red pillars on Push22 have been lowered so that people can no longer hide behind them.\n\
- The grates on the towers have had their texture replaced with a more easy-to-see-through alternative so that players can no longer hide as easily behind them.\n\
- The tracks on Push08 no longer are above the ground, but are now flat with the ground, so that people can no longer hang on the edge to avoid death.\n\
- The large smoke tower on Push21 has been removed to stop people from hiding behind it.\n\
- The floating skull/cacodemon pyramids on Push23 have been inverted to stop people from camping behind it.\n\
- The hazard pillars in Push24 have been moved to the center island so as to stop people from camping behind them.\n\
- The pillars underneath the middle bridge in Push29 have been lowered so as to keep people from camping behind them.";

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