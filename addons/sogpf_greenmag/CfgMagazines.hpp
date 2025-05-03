class CfgMagazines {
    class vn_riflemag_base;
    class vn_m16_20_mag;
    class vn_m16_30_mag;
    class vn_m16_40_mag;
    class vn_kbkg_mag;
    class vn_lmgmag_base;
    class vn_smgmag_base;

    /////////////
    // 5.56x45 //
    /////////////

    class vn_m16_mag_base: vn_riflemag_base {
        greenmag_ammo = "greenmag_ammo_556x45_basic_1Rnd";
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };
    
    class vn_m16_20_t_mag: vn_m16_20_mag {
        greenmag_ammo = "greenmag_ammo_556x45_tracer_1Rnd";
    };
    
    class vn_m16_30_t_mag: vn_m16_30_mag {
        greenmag_ammo = "greenmag_ammo_556x45_tracer_1Rnd";
    };
    
    class vn_m16_40_t_mag: vn_m16_40_mag {
        greenmag_ammo = "greenmag_ammo_556x45_tracer_1Rnd";
    };

    /////////////
    // 7.62x25 //
    /////////////

    class vn_pps_mag: vn_smgmag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x25_Basic_1Rnd);
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_762x25_Basic_1Rnd);

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class vn_pps_t_mag: vn_pps_mag {
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_762x25_Tracer_1Rnd);
    };

    class vn_ppsh41_35_mag;
    class vn_ppsh41_35_t_mag: vn_ppsh41_35_mag {
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_762x25_Tracer_1Rnd);
    };

    class vn_ppsh41_71_mag: vn_smgmag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x25_Basic_1Rnd);
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_762x25_Basic_1Rnd);

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class vn_ppsh41_71_t_mag: vn_ppsh41_71_mag {
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_762x25_Tracer_1Rnd);
    };

    ///////////////////////
    // 7.62x33 (.30 Car) //
    ///////////////////////

    class vn_carbine_15_mag: vn_riflemag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x33_FMJ_1Rnd);
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_762x33_Basic_1Rnd);

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class vn_carbine_15_t_mag: vn_carbine_15_mag {
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_762x33_Tracer_1Rnd);
    };

    class vn_carbine_30_mag: vn_riflemag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x33_FMJ_1Rnd);
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_762x33_Basic_1Rnd);

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };
    
    class vn_carbine_30_t_mag: vn_carbine_30_mag {
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_762x33_Tracer_1Rnd);
    };

    /////////////
    // 7.62x39 //
    /////////////

    class vn_type56_mag: vn_riflemag_base {
        greenmag_ammo = "greenmag_ammo_762x39_basic_1Rnd";
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class vn_type56_t_mag: vn_type56_mag {
        greenmag_ammo = "greenmag_ammo_762x39_tracer_1Rnd";
    };

    class vn_kbkg_t_mag: vn_kbkg_mag {
        greenmag_ammo = "greenmag_ammo_762x39_tracer_1Rnd";
    };

    /////////////
    // 7.62x51 //
    /////////////

    class vn_m14_mag: vn_riflemag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x51_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class vn_m14_t_mag: vn_m14_mag {
        greenmag_ammo = "greenmag_ammo_762x51_tracer_1Rnd";
    };

    class vn_l1a1_10_mag: vn_riflemag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x51_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class vn_l1a1_10_t_mag: vn_l1a1_10_mag {
        greenmag_ammo = "greenmag_ammo_762x51_tracer_1Rnd";
    };

    class vn_l1a1_20_mag;
    class vn_l1a1_20_t_mag: vn_l1a1_20_mag {
        greenmag_ammo = "greenmag_ammo_762x51_tracer_1Rnd";
    };

    class vn_l1a1_30_mag;
    class vn_l1a1_30_t_mag: vn_l1a1_30_mag {
        greenmag_ammo = "greenmag_ammo_762x51_tracer_1Rnd";
    };

    class vn_l1a1_30_02_mag;
    class vn_l1a1_30_02_t_mag: vn_l1a1_30_02_mag {
        greenmag_ammo = "greenmag_ammo_762x51_tracer_1Rnd";
    };

    /////////////
    // 7.62x54 //
    /////////////

    class vn_dp28_mag: vn_lmgmag_base {
        greenmag_ammo = "greenmag_ammo_762x54_basic_1Rnd";
        greenmag_basicammo = "greenmag_ammo_762x54_basic_1Rnd";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    /////////////
    // 7.92x57 //
    /////////////

    class vn_k98k_mag: vn_riflemag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_792x57_FMJ_1Rnd);
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_792x57_Basic_1Rnd);

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class vn_k98k_t_mag: vn_k98k_mag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_792x57_Tracer_1Rnd);
    };

    //////////
    // 9x19 //
    //////////

    class vn_f1_smg_mag: vn_smgmag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_9x19_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_9x19_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class vn_f1_smg_t_mag: vn_f1_smg_mag {
        greenmag_ammo = "greenmag_ammo_9x19_tracer_1Rnd";
    };

    class vn_l34a1_smg_mag: vn_smgmag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_9x19_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_9x19_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class vn_l34a1_smg_t_mag: vn_l34a1_smg_mag {
        greenmag_ammo = "greenmag_ammo_9x19_tracer_1Rnd";
    };

    ////////////////////////
    // 11.43x23 (.45 ACP) //
    ////////////////////////

    class vn_m45_mag: vn_smgmag_base {
        greenmag_ammo = "greenmag_ammo_45ACP_basic_1Rnd";
        greenmag_basicammo = "greenmag_ammo_45ACP_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class vn_m45_t_mag: vn_m45_mag {
        greenmag_ammo = "greenmag_ammo_45ACP_tracer_1Rnd";
    };

};
