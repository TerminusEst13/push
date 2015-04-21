int PushCredits =
"- Gun sprite drawn by Sgt. Shivers and polished by FuzzballFox.\n\
- Double-jump system by ijon tichy.\n\
- Player sprites edited from Mars 3D and Strife.\n\
- Dunked smoke from Marathon.\n\
- Defense Drone sprites by Revae.\n\
- Push laser sprites by Eriance.\n\
- Force Gauntlet sprites by Riet.\n\
- Critical error code coded by Kyle873.\n\
- Push grenade sprites from Freedoom.\n\
- hudmessageonactor by Caligari87.\n\
- Pusher Cacodemon on Push17 by IdeIdoom.\n\
- Falling stars on Push42 coded by KeksDose.\n\
- p_playerdrone ACS coded by Marrub.\n\
- Powerup graphics for push69 from:\n\
 ^- Doraemon: Minna de Asobo! (Time freeze)\n\
 ^- Take 2 Heaven (Cloaking device)\n\
 ^- Mega Run: Redford's Adventure (Flight, Double firing speed)\n\
 ^- All Kamen Rider: Rider Generations 2 (Extra Push)\n\
 ^- Legend of Zelda: Skyward Sword (Invulnerability)\n\
\n\
- F1 help screen and intermission images drawn by Sgt. Shivers.\n\
- M_DOOM graphic by Mr. Setharoo and Smoke_Fumus.\n\
- D_DM2INT is from Extreme Pinball.\n\
- D_DM2TTL is Push & Pull by ((dynamic)).\n\
- Other music is credited in MapInfo.\n\
\n\
- PUSH02, PUSH04, PUSH09, and PUSH57 by Sgt. Shivers.\n\
- PUSH03 by Roman6a.\n\
 ^- Textures from Quake (except for the lava).\n\
- PUSH05 and PUSH18 by Dewce.\n\
- PUSH06 by DRL 3.33.\n\
- PUSH07 and PUSH14 by OnePunch-Man.\n\
 ^ PUSH14 textures by Agaures.\n\
- PUSH08 by Mike12.\n\
- PUSH10 by Darsycho.\n\
- PUSH11, PUSH43, PUSH53, and PUSH56 by IdeIdoom.\n\
 ^- Textures by Cyb, taken from void.wad\n\
- PUSH12 by Aquasa.\n\
 ^ Skybox taken from Cybercrime 3.\n\
- PUSH15, PUSH17, PUSH39, and PUSH40 by UnholyPimpin.\n\
- PUSH16 by Seryder.\n\
- PUSH19, PUSH32, PUSH51, PUSH60, and PUSH62 by PresidentPeople.\n\
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
- PUSH27, PUSH45, and PUSH61 by Gothic.\n\
 ^- Textures from Quake.\n\
- PUSH28 by Sgt. Shivers, Kyle873, Seryder, and TerminusEst13.\n\
 ^- Textures from HacX.\n\
- PUSH29 by Lego.\n\
 ^- Textures from Mega Man 8-Bit Deathmatch.\n\
- PUSH30 by MrSetharoo.\n\
 ^- Textures from (where else?) StarTropics.\n\
- PUSH31 and PUSH50 by Kurashiki.\n\
- PUSH10 and PUSH33 by Tango.\n\
 ^- PUSH10 textures taken from 8-Bit Deathmatch.\n\
 ^- Water texture by didy.\n\
 ^- Sky texture taken from Odamex CTF.\n\
 ^- owall and oconcr taken from Ola Bjorling's Darkening E2).\n\
 ^- Vegetation taken from Exhumed, Captain Toenail, and didy.\n\
- PUSH34, PUSH49, PUSH55, PUSH63, and PUSH68 by Infirnex.\n\
 ^- Ice textures taken from Mageslayer.\n\
 ^- PUSH68 textures taken from TXGREY\n\
- PUSH35 by Madokage.\n\
 ^- Textures from Yume Nikki.\n\
- PUSH36 by Rofl25.\n\
 ^- Textures from Smash Bros. N64.\n\
- PUSH37 and PUSH42 by Mystical.\n\
 ^- Textures taken from HDoom and his big fat windy bottom.\n\
- PUSH38, PUSH52, and PUSH64 by UniversalQuantifier.\n\
- PUSH41 and PUSH67 by GuardSoul.\n\
- PUSH44, PUSH46, PUSH48, PUSH54, PUSH65, and PUSH69 by Gardevoir.\n\
- PUSH47 by Smoke_Fumus.\n\
 ^- Textures from Shadow Warrior and Duke Nukem 3D.\n\
- PUSH58 by MartyKirra.\n\
- PUSH59 by Untitled.\n\
- PUSH66 by Deadon.\n\
 ^- Textures from Mr. Gimmick.\n\
- PUSH70 by Yholl.\n\
 ^- Skybox by plums.";

int PushChangelog =
"FROM V0.6 TO V0.7:\n\
==================\n\
GAMEPLAY:\n\
- Surfing is no longer as obscenely exploitable as before--when a player bounces repeatedly in mid-air without landing, he will eventually stop bouncing and will just plummet.\n\
- Players are now always bright, for ease of visibility at longer ranges.\n\
- Drones are now faster, fire faster, and their shots speed up. There are also more drone spawns on certain maps.\n\
- Changing/swapping maps while in non-DM modes no longer renders the players invulnerable.\n\
- Sudden death drones now only show up in Last Man Standing/Team Last Man Standing.\n\
- Push is now compatible with and playable in ZDoom/GZDoom! I don't know WHY you'd want to, but there you have it!\n\
- Respawn protection now is taken away as soon as players fire, so players are now able to rocketjump out of the gate.\n\
- p_playerdrones has been added as a cvar. When enabled, when the player is on his final life (and sv_maxlives is above one), he will be turned into a drone to chase down the remaining players as he sees fit.\n\
- p_nohazards has been added as a cvar. When enabled, all randomized dangers or map-changing hazards will be disabled.\n\
- Push weapons no longer support autoaim.\n\
- The push laser was made one tic slower, but bolts now travel over 1.5x as fast. This should easily help its role in long-ranged nudging of opponents trying to recover.\n\
\n\
MAPS:\n\
- Push11 now has both drone spawns and projectile blocking boundaries.\n\
- Push19's been given the Presidential Treatment:\n\
 ^ More efficient method of keeping players off the counter (an invisible 3D floor) end\n\
 ^ Fixed the alignment of some pyramid light textures\n\
 ^ Blue ring platforms are now fully lit and 125% wider\n\
 ^ Raised ceilings above some 3D floors slightly, so they appear on the automap\n\
 ^ Filled the large window in with glass.  The center pane remains open\n\
 ^ Fountains now launch players up\n\
- Push20's boundaries have been shortened by 2056 units.\n\
- Push27 now has a drone spawn.\n\
- Absolutely nothing was changed about Push28.\n\
- Push30 no longer can teleport lasers into infinity.\n\
- Push32 now has darker borders around the circles to indicate position.\n\
- Push33's center mountains have been removed, and the mountains have been moved to the outer portion of the map. To address camping, there is now an ocean drift on the outside of the map--get thrown out there, and you'll start drifting away!\n\
- Push34's platforms have been trimmed and the belts sped up.\n\
- Push34 has many more spawnpoints now.\n\
- Push35 no longer has player spawns outside of the play boundary.\n\
- Push38's layout has been squeezed in a slight bit, for easier mobility.\n\
- Push42's gravity now resets every time the map restarts.\n\
- Push42's gravity will now always adjust by at least 10%.\n\
- Push43's killfloor has had its depth increased, so it's no longer as easy to trip into it.\n\
- Push46's skybox is no longer obscenely fuckhuge filesize.\n\
- Push47's camp spots have been removed.\n\
- Push47's miscolored water has been colored properly.\n\
- Push49's boundaries have been shortened and the main layout has been expanded.\n\
- Push49 no longer has the water bobbing up and down.\n\
\n\
- A new map, Ichikishimahime Says Keep Your Water Clean by Kurashiki, has been added at Push50.\n\
- A new map, Coffee Break by PresidentPeople, has been added at Push51.\n\
- A new map, Ship of Fools by UniversalQuantifier, has been added at Push52.\n\
- A new map, Samhara Trench by IdeIdoom, has been added at Push53.\n\
- A new map, Dwango 2015 by Gardevoir, has been added at Push54.\n\
- A new map, Burn Baby Burn by Infirnex, has been added at Push55.\n\
- A new map, Jazzy Nostalgia by IdeIdoom, has been added at Push56.\n\
- A new map, Bullseye by Sgt. Shivers, has been added at Push57.\n\
- A new map, Heifong Virtual Arena by Marty Kirra, has been added at Push58.\n\
- A new map, Push-Mortem by Untitled, has been added at Push59.\n\
- A new map, Castle of Griefing by PresidentPeople, has been added at Push60.\n\
- A new map, Serpent Riders' Playhouse by Gothic, has been added at Push61.\n\
- A new map, Island Retreat by PresidentPeople, has been added at Push62.\n\
- A new map, Wild is the Wind by Infirnex, has been added at Push63.\n\
- A new map, Acid Killer by UniversalQuantifier, has been added at Push64.\n\
- A new map, 7th Hell by Gardevoir, has been added at Push65.\n\
- A new map, Gimmick! by Deadon, has been added at Push66.\n\
- A new map, The Strongest Spirit by Guardsoul, has been added at Push67.\n\
- A new map, The Longest Push by Infirnex, has been added at Push68.\n\
- A new map, Gardie's Crazy Game Show! by Gardevoir and Guardsoul, has been added at Push69.\n\
- A new map, Peaceful Hexagon Realm by Yholl, has been added at Push70.\n\
\n\
POLISH:\n\
- Sgt. Shivers has provided the best titlepic.\n\
- All SNDINFO entries have been separated by map.\n\
- Push19 had had a massive wipe of polish across the entire board, with more effects, prettier textures, and some new additions.\n\
- Push24 now has over double the banners. Thanks to everyone for submitting!\n\
- Push31's HOMs behind the banner has been removed.\n\
- Push34 now has rain and lightning.\n\
- Push30 now has a Startropics enemy wandering about.\n\
- Push38 has been given its proper skybox.\n\
- Several misaligned sectors in Push43 have been re-aligned. Not all of them, but quite a few.\n\
- Push48 has been given more even lighting across the board.\n\
- All cvars have been changed to properly accomodate cvarinfo. Note that their prefix has been changed from push_* to p_*!\n\
- The Push Gun now has A_GunFlash in both of its states, so as to accomodate skins with custom firing sprites.\n\
- The gauntlet now deals 100 damage, for those that insist on playing Push in co-op.\n\
- Difficulty settings have been removed.\n\
- For singleplayer (why?) purposes, Push maps now have their own episode entry.\n\
- Push43 has had a LOT of texture alignment.\n\
- All of the scripts have been converted to named scripts.\n\
- The Push Gun sprites have been given a nice draw-over by Fuzzball Fox! Thank you!\n\
\n\
WHY WE CAN'T HAVE NICE DETAIL:\n\
- It's no longer possible to dive into the Cacodemon's mouth in Push17 and hide there.\n\
- The edges of Push31's banner have been pushed against the cake.\n\
- It's no longer possible to hide behind the house in Push38.\n\
- The torches in the Push38 house's corner have been brought in, to keep people from butthugging the corner.\n\
- The hole in the center of Push39 has been risen up, and the pillars pulled back.\n\
- It's no longer possible to hide under the center platform in Push42.\n\
- It's no longer possible to hide in the pillars in Push41.";

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