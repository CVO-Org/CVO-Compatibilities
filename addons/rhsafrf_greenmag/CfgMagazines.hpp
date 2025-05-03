class CfgMagazines {
    class CA_Magazine;
    
    /////////////
    // 5.45x39 //
    /////////////

    class rhs_30Rnd_545x39_AK;

    class rhs_30Rnd_545x39_7N6_AK: rhs_30Rnd_545x39_AK {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_545x39_fmj_1Rnd);
        greenmag_basicammo = "greenmag_ammo_545x39_basic_1Rnd";
        
        greenmag_needBelt = 0;
        greenmag_canSpeedload = 1;
    };

    class rhs_30Rnd_545x39_7N10_AK: rhs_30Rnd_545x39_7N6_AK {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_545x39_ep_1Rnd);
    };

    class rhs_30Rnd_545x39_7N22_AK: rhs_30Rnd_545x39_7N10_AK {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_545x39_ap_1Rnd);
    };

    class rhs_30Rnd_545x39_AK_green: rhs_30Rnd_545x39_7N6_AK {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_545x39_tracer_1Rnd);
    };

    class rhs_30Rnd_545x39_7U1_AK: rhs_30Rnd_545x39_7N10_AK {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_545x39_subsonic_1Rnd);
    };

    /////////////
    // 7.62x39 //
    /////////////

    class rhs_30Rnd_762x39mm: rhs_30Rnd_545x39_7N6_AK {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x39_fmj_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class rhs_30Rnd_762x39mm_89: rhs_30Rnd_762x39mm {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x39_fmj_1Rnd);
    };

    class rhs_30Rnd_762x39mm_tracer: rhs_30Rnd_762x39mm {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x39_tracer_1Rnd);
    };

    class rhs_30Rnd_762x39mm_U: rhs_30Rnd_762x39mm {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x39_subsonic_1Rnd);
    };

    //////////
    // 9x19 //
    //////////

    class rhs_mag_9x19_17: CA_Magazine {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_9x19_fmj_1Rnd);
        greenmag_basicammo = "greenmag_ammo_9x19_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class rhs_mag_9x19_7n31_17: rhs_mag_9x19_17 {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_9x19_ap_1Rnd);
    };

    class rhs_mag_9x19mm_7n21_20: rhs_mag_9x19_17 {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_9x19_fmj_1Rnd);
    };

    class rhs_mag_9x19mm_7n31_20: rhs_mag_9x19mm_7n21_20 {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_9x19_ap_1Rnd);
    };

    class rhs_mag_9x19mm_7n21_44: rhs_mag_9x19mm_7n21_20 {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_9x19_fmj_1Rnd);
    };

    class rhs_mag_9x19mm_7n31_44: rhs_mag_9x19mm_7n21_44 {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_9x19_ap_1Rnd);
    };

    //////////
    // 9x18 //
    //////////

    class rhs_mag_9x18_12_57N181S: rhs_mag_9x19_17 {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_9x18_basic_1Rnd);
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_9x18_basic_1Rnd);
        
        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };
   
    //////////
    // 9x21 //
    //////////

    class rhs_18rnd_9x21mm_7N28: rhs_mag_9x19_17 {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_9x21_fmj_1Rnd);
        greenmag_basicammo = "greenmag_ammo_9x21_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class rhs_18rnd_9x21mm_7N29: rhs_18rnd_9x21mm_7N28 {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_9x21_ap_1Rnd);
    };

    class rhs_18rnd_9x21mm_7BT3: rhs_18rnd_9x21mm_7N28 {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_9x21_tracer_1Rnd);
    };

    //////////
    // 9x39 //
    //////////

    class rhs_20rnd_9x39mm_SP5: rhs_30Rnd_762x39mm {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_9x39_ap_1Rnd);
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_9x39_basic_1Rnd);

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class rhs_20rnd_9x39mm_SP6: rhs_20rnd_9x39mm_SP5 {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_9x39_match_1Rnd);
    };

    class rhs_10rnd_9x39mm_SP5: rhs_20rnd_9x39mm_SP5 {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_9x39_ap_1Rnd);
    };

    class rhs_10rnd_9x39mm_SP6: rhs_10rnd_9x39mm_SP5 {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_9x39_match_1Rnd);
    };

    //////////
    // .338 //
    //////////

    class rhs_5Rnd_338lapua_t5000: rhs_30Rnd_762x39mm {
        greenmag_ammo = "greenmag_ammo_338_basic_1Rnd";
        greenmag_basicammo = "greenmag_ammo_338_basic_1Rnd";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };


    /////////////
    // 7.62x54 //
    /////////////

    class rhs_10Rnd_762x54mmR_7N1: rhs_30Rnd_545x39_7N6_AK {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x54_match_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x54_basic_1Rnd";    

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class rhs_10Rnd_762x54mmR_7N14: rhs_10Rnd_762x54mmR_7N1 {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x54_match_1Rnd);
    };

    class rhs_100Rnd_762x54mmR: rhs_30Rnd_545x39_7N6_AK {
        greenmag_ammo = QEGVAR(common_greenmag,belt_762x54_fmj);
        greenmag_basicammo = "greenmag_beltlinked_762x54_basic";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
    };

    class rhs_100Rnd_762x54mmR_7N13: rhs_100Rnd_762x54mmR {
        greenmag_ammo = QEGVAR(common_greenmag,belt_762x54_ep);
    };

    class rhs_100Rnd_762x54mmR_7N26: rhs_100Rnd_762x54mmR {
        greenmag_ammo = QEGVAR(common_greenmag,belt_762x54_ap);
    };

    class rhs_100Rnd_762x54mmR_green: rhs_100Rnd_762x54mmR {
        greenmag_ammo = QEGVAR(common_greenmag,belt_762x54_tracer);
    };

    class rhs_100Rnd_762x54mmR_7BZ3: rhs_100Rnd_762x54mmR_7N13 {
        greenmag_ammo = QEGVAR(common_greenmag,belt_762x54_ap);
    };
};
