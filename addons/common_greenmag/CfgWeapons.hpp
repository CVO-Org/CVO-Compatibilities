class CfgWeapons {
    // External Classes
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;
    class greenmag_core_1Rnd;
    class greenmag_core_10Rnd;
    class greenmag_core_20Rnd;
    class greenmag_core_30Rnd;
    class greenmag_core_40Rnd;
    class greenmag_core_50Rnd;
    class greenmag_core_60Rnd;

    // Core Classes
    class  GVAR(ammo_core_1rnd): greenmag_core_1Rnd {
        author = ELSTRING(main,author);
    };
    class  GVAR(ammo_core_10rnd): greenmag_core_10Rnd {
        author = ELSTRING(main,author);
    };
    class  GVAR(ammo_core_20rnd): greenmag_core_20Rnd {
        author = ELSTRING(main,author);
    };
    class  GVAR(ammo_core_30rnd): greenmag_core_30Rnd {
        author = ELSTRING(main,author);
    };
    class  GVAR(ammo_core_40rnd): greenmag_core_40Rnd {
        author = ELSTRING(main,author);
    };
    class  GVAR(ammo_core_50rnd): greenmag_core_50Rnd {
        author = ELSTRING(main,author);
    };
    class  GVAR(ammo_core_60rnd): greenmag_core_60Rnd {
        author = ELSTRING(main,author);
    };

    class  GVAR(belt_core): CBA_MiscItem {
        author = ELSTRING(main,author);

        scope = 1;
        scopeArsenal = 1;
        scopeCurator = 1;

        picture = "\z\greenmag\addons\main\data\belt.paa";
        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        
        icon = "iconObject_circle";
        mapSize = 0.034;
    };

    // Ammo
    // 4.6x30
    #include "ammo\46x30_Basic.hpp"
    #include "ammo\46x30_AP.hpp"
    #include "ammo\46x30_FMJ.hpp"
    #include "ammo\46x30_JHP.hpp"

    // 5.45x39
    #include "ammo\545x39_AP.hpp"
    #include "ammo\545x39_EP.hpp"
    #include "ammo\545x39_FMJ.hpp"
    #include "ammo\545x39_Subsonic.hpp"
    #include "ammo\545x39_Tracer.hpp"

    // 5.56x45 NATO
    #include "ammo\556x45_AP.hpp"
    #include "ammo\556x45_EP.hpp"
    #include "ammo\556x45_FMJ.hpp"
    #include "ammo\556x45_JHP.hpp"
    #include "ammo\556x45_Match.hpp"
    #include "ammo\556x45_Blank.hpp"
    #include "ammo\556x45_Subsonic.hpp"
    #include "ammo\556x45_Tracer.hpp"

    // 5.6x15
    #include "ammo\56x15_Basic.hpp"
    #include "ammo\56x15_Subsonic.hpp"

    // 5.7x28
    #include "ammo\570x28_FMJ.hpp"
    #include "ammo\570x28_Tracer.hpp"

    // 7.5x55
    #include "ammo\75x55_Basic.hpp"
    #include "ammo\75x55_FMJ.hpp"
    #include "ammo\75x55_Tracer.hpp"

    // 7.62x25
    #include "ammo\762x25_Basic.hpp"
    #include "ammo\762x25_FMJ.hpp"
    #include "ammo\762x25_Tracer.hpp"

    // 7.62x33
    #include "ammo\762x33_Basic.hpp"
    #include "ammo\762x33_FMJ.hpp"
    #include "ammo\762x33_Tracer.hpp"

    // 7.62x39
    #include "ammo\762x39_AP.hpp"
    #include "ammo\762x39_EP.hpp"
    #include "ammo\762x39_FMJ.hpp"
    #include "ammo\762x39_JHP.hpp"
    #include "ammo\762x39_Subsonic.hpp"
    #include "ammo\762x39_Tracer.hpp"

    // 7.62x51 NATO
    #include "ammo\762x51_AP.hpp"
    #include "ammo\762x51_EP.hpp"
    #include "ammo\762x51_FMJ.hpp"
    #include "ammo\762x51_Blank.hpp"
    #include "ammo\762x51_Match.hpp"
    #include "ammo\762x51_Tracer.hpp"

    // 7.62x54
    #include "ammo\762x54_AP.hpp"
    #include "ammo\762x54_EP.hpp"
    #include "ammo\762x54_FMJ.hpp"
    #include "ammo\762x54_Match.hpp"
    #include "ammo\762x54_Tracer.hpp"

    // .30-06 Springfield
    #include "ammo\762x63_Basic.hpp"
    #include "ammo\762x63_AP.hpp"
    #include "ammo\762x63_FMJ.hpp"
    #include "ammo\762x63_Tracer.hpp"

    // .300 Winchester
    #include "ammo\762x67_Basic.hpp"
    #include "ammo\762x67_Match.hpp"

    // .32ACP
    #include "ammo\765x17_Basic.hpp"
    #include "ammo\765x17_FMJ.hpp"
    #include "ammo\765x17_Subsonic.hpp"
    #include "ammo\765x17_Tracer.hpp"

    // .303 British (7.7x56)
    #include "ammo\77x56_Basic.hpp"
    #include "ammo\77x56_FMJ.hpp"
    #include "ammo\77x56_Tracer.hpp"

    // 7.92x33 Kurz
    #include "ammo\792x33_Basic.hpp"

    // 7.92x57 Mauser
    #include "ammo\792x57_Basic.hpp"
    #include "ammo\792x57_AP.hpp"
    #include "ammo\792x57_FMJ.hpp"
    #include "ammo\792x57_Tracer.hpp"


    // 8x22 Nambu
    #include "ammo\8x22_Basic.hpp"
    

    // 9x18
    #include "ammo\9x18_Basic.hpp"


    // 9x19
    #include "ammo\9x19_AP.hpp"
    #include "ammo\9x19_FMJ.hpp"
    #include "ammo\9x19_JHP.hpp"


    // 9x21
    #include "ammo\9x21_AP.hpp"
    #include "ammo\9x21_FMJ.hpp"
    #include "ammo\9x21_Tracer.hpp"


    // // 9x39
    #include "ammo\9x39_Basic.hpp"
    #include "ammo\9x39_AP.hpp"
    #include "ammo\9x39_Match.hpp"

    // 9.3x62
    #include "ammo\93x62_Basic.hpp"
    #include "ammo\93x62_FMJ.hpp"
    #include "ammo\93x62_Tracer.hpp"

    // 10x25
    #include "ammo\10x25_Basic.hpp"
    #include "ammo\10x25_FMJ.hpp"
    #include "ammo\10x25_Tracer.hpp"

    // .50BMG
    #include "ammo\127x99_AP.hpp"
    #include "ammo\127x99_Match.hpp"

    // Belts
    #include "belts\556x45_AP.hpp"
    #include "belts\556x45_EP.hpp"
    #include "belts\556x45_FMJ.hpp"
    #include "belts\556x45_Blank.hpp"

    #include "belts\762x39_Basic.hpp"
    #include "belts\762x39_FMJ.hpp"
    #include "belts\762x39_Tracer.hpp"

    #include "belts\762x51_AP.hpp"
    #include "belts\762x51_EP.hpp"
    #include "belts\762x51_FMJ.hpp"
    #include "belts\762x51_Blank.hpp"
    #include "belts\762x51_Match.hpp"
    #include "belts\762x51_Tracer.hpp"

    #include "belts\762x54_AP.hpp"
    #include "belts\762x54_EP.hpp"
    #include "belts\762x54_FMJ.hpp"
    #include "belts\762x54_Tracer.hpp"

    #include "belts\792x57_Basic.hpp"
    #include "belts\792x57_AP.hpp"
    #include "belts\792x57_FMJ.hpp"
    #include "belts\792x57_Tracer.hpp"
    
};
