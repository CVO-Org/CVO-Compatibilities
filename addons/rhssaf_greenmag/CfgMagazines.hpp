class CfgMagazines {
    class CA_Magazine;
    class 30Rnd_556x45_Stanag;
    class rhs_30Rnd_545x39_AK;
    class rhs_100Rnd_762x54mmR;

    /////////////
    // 5.56x45 //
    /////////////

    class rhssaf_30rnd_556x45_TDIM_G36: 30Rnd_556x45_Stanag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_FMJ_1Rnd);
    };

    class rhssaf_30rnd_556x45_EPR_G36: 30Rnd_556x45_Stanag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_EP_1Rnd);
    };

    class rhssaf_100rnd_556x45_EPR_G36: 30Rnd_556x45_Stanag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_EP_1Rnd);
    };

    class rhssaf_30rnd_556x45_MDIM_G36: 30Rnd_556x45_Stanag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_EP_1Rnd);
    };

    class rhssaf_30rnd_556x45_Tracers_G36: 30Rnd_556x45_Stanag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_Tracer_1Rnd);
    };

    class rhssaf_30rnd_556x45_SPR_G36: 30Rnd_556x45_Stanag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_Match_1Rnd);
    };

    class rhssaf_30rnd_556x45_SOST_G36: 30Rnd_556x45_Stanag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_JHP_1Rnd);
    };

    class rhsgref_30rnd_556x45_m21: CA_Magazine {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class rhsgref_30rnd_556x45_m21_t: rhsgref_30rnd_556x45_m21 {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_Tracer_1Rnd);
    };

    /////////////
    // 7.62x39 //
    /////////////

    class rhssaf_30Rnd_762x39mm_M67: rhs_30Rnd_545x39_AK {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x39_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class rhssaf_30Rnd_762x39mm_M78_tracer: rhssaf_30Rnd_762x39mm_M67 {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x39_Tracer_1Rnd);
    };

    class rhssaf_30Rnd_762x39_M82_api: rhssaf_30Rnd_762x39mm_M67 {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x39_AP_1Rnd);
    };

    /////////////
    // 7.62x54 //
    /////////////

    class rhssaf_250Rnd_762x54R: rhs_100Rnd_762x54mmR {
        greenmag_ammo = QEGVAR(common_greenmag,belt_762x54_FMJ);
        greenmag_basicammo = "greenmag_beltlinked_762x54_basic";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
    };

    /////////////
    // .32 ACP //
    /////////////

    class rhsgref_20rnd_765x17_vz61: CA_Magazine {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_765x17_Basic_1Rnd);
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_765x17_Basic_1Rnd);
        
        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    /////////////
    // 7.92x57 //
    /////////////

    class rhsgref_10Rnd_792x57_m76: CA_Magazine {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_792x57_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class rhssaf_10Rnd_792x57_m76_tracer: CA_Magazine {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_792x57_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };


    //////////
    // 9x19 //
    //////////

    class rhssaf_mag_15Rnd_9x19_FMJ: CA_Magazine {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_9x19_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_9x19_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class rhssaf_mag_15Rnd_9x19_JHP: rhssaf_mag_15Rnd_9x19_FMJ {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_9x19_JHP_1Rnd);
    };

};
