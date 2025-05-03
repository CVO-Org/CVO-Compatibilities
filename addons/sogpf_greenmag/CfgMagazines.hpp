class CfgMagazines {
    class vn_riflemag_base;
    class vn_m16_20_mag;
    class vn_m16_30_mag;
    class vn_m16_40_mag;
    class vn_kbkg_mag;
    class vn_lmgmag_base;
    class vn_smgmag_base;
    class vn_pistolmag_base;

    /////////////
    // 5.56x45 //
    /////////////

    class vn_m16_mag_base: vn_riflemag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_FMJ_1Rnd);
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

    class vn_m63a_30_mag;
    class vn_m63a_30_t_mag: vn_m63a_30_mag {
        greenmag_ammo = "greenmag_ammo_556x45_tracer_1Rnd";
    };

    class vn_m63a_100_mag: vn_m16_mag_base {
        greenmag_ammo = QEGVAR(common_greenmag,belt_556x45_FMJ);
        greenmag_basicammo = "greenmag_beltlinked_556x45_basic";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
    };

    class vn_m63a_100_t_mag: vn_m63a_100_mag {
        greenmag_ammo = "greenmag_beltlinked_556x45_tracer";
    };

    class vn_m63a_150_mag;
    class vn_m63a_150_t_mag: vn_m63a_150_mag {
        greenmag_ammo = "greenmag_beltlinked_556x45_tracer";
    };

    /////////////////////
    // 5.6x15 (.22 LR) //
    /////////////////////

    class vn_hd_mag: vn_pistolmag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_56x15_subsonic_1Rnd);
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_56x15_Basic_1Rnd);

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    /////////////
    // 7.5x54 //
    /////////////

    class vn_m36_mag: vn_riflemag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_75x55_FMJ_1Rnd);
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_75x55_Basic_1Rnd);

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class vn_m36_t_mag: vn_m36_mag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_75x55_tracer_1Rnd);
    };

    class vn_m4956_10_mag: vn_riflemag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_75x55_FMJ_1Rnd);
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_75x55_Basic_1Rnd);

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class vn_m4956_10_t_mag: vn_m4956_10_mag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_75x55_tracer_1Rnd);
    };

        ///////////////////////
    // 7.62x33 (.30 Car) //
    ///////////////////////

    class vn_carbine_15_mag: vn_riflemag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x33_FMJ_1Rnd);
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_762x33_Basic_1Rnd);

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class vn_carbine_15_t_mag: vn_carbine_15_mag {
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_762x33_Tracer_1Rnd);
    };

    class vn_carbine_30_mag: vn_riflemag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x33_FMJ_1Rnd);
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_762x33_Basic_1Rnd);

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };
    
    class vn_carbine_30_t_mag: vn_carbine_30_mag {
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_762x33_Tracer_1Rnd);
    };

    /////////////
    // 7.62x39 //
    /////////////

    class vn_type56_mag: vn_riflemag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x39_FMJ_1Rnd);
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

    class vn_sks_mag: vn_riflemag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x39_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class vn_sks_t_mag: vn_sks_mag {
        greenmag_ammo = "greenmag_ammo_762x39_tracer_1Rnd";
    };

    class vn_rpd_100_mag: vn_lmgmag_base {
        greenmag_ammo = QEGVAR(common_greenmag,belt_762x39_FMJ);
        greenmag_basicammo = QEGVAR(common_greenmag,belt_762x39_basic);

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
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

    class vn_m40a1_mag: vn_riflemag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x51_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class vn_m40a1_t_mag: vn_m40a1_mag {
        greenmag_ammo = "greenmag_ammo_762x51_tracer_1Rnd";
    };

    class vn_m60_100_mag: vn_lmgmag_base {
        greenmag_ammo = QEGVAR(common_greenmag,belt_762x51_FMJ);
        greenmag_basicammo = "greenmag_beltlinked_762x51_basic";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
    };

    /////////////
    // 7.62x54 //
    /////////////

    class vn_dp28_mag: vn_lmgmag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x54_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x54_basic_1Rnd";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class vn_m38_mag: vn_riflemag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x54_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x54_basic_1Rnd";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class vn_m38_t_mag: vn_m38_mag {
        greenmag_ammo = "greenmag_ammo_762x54_tracer_1Rnd";
    };

    class vn_svd_mag: vn_riflemag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x54_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x54_basic_1Rnd";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class vn_svd_t_mag: vn_svd_mag {
        greenmag_ammo = "greenmag_ammo_762x54_tracer_1Rnd";
    };

    class vn_pk_100_mag: vn_lmgmag_base {
        greenmag_ammo = QEGVAR(common_greenmag,belt_762x54_FMJ);
        greenmag_basicammo = "greenmag_beltlinked_762x54_basic";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
    };

    /////////////
    // 7.62x63 //
    /////////////
    
    class vn_m1_garand_mag: vn_riflemag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x63_AP_1Rnd);
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_762x63_Basic_1Rnd);

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };
    
    class vn_m1_garand_t_mag: vn_m1_garand_mag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x63_tracer_1Rnd);
    };

    class vn_m1903_mag: vn_riflemag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x63_AP_1Rnd);
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_762x63_Basic_1Rnd);

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };
    
    class vn_m1903_t_mag: vn_m1903_mag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x63_tracer_1Rnd);
    };

    class vn_m1918_mag: vn_lmgmag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x63_AP_1Rnd);
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_762x63_Basic_1Rnd);

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };
    
    class vn_m1918_t_mag: vn_m1918_mag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x63_tracer_1Rnd);
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

    class vn_mg42_50_mag: vn_lmgmag_base {
        greenmag_ammo = QEGVAR(common_greenmag,belt_792x57_FMJ);
        greenmag_basicammo = QEGVAR(common_greenmag,belt_792x57_Basic);

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
    };

    class vn_mg42_50_t_mag: vn_mg42_50_mag {
        greenmag_ammo = QEGVAR(common_greenmag,belt_792x57_tracer);
    };

    //////////
    // 9x19 //
    //////////

    class vn_pm_mag: vn_pistolmag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_9x18_basic_1Rnd);
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_9x18_basic_1Rnd);

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };
    
    class vn_ppk_mag: vn_pistolmag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_9x18_basic_1Rnd);
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_9x18_basic_1Rnd);

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
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

    class vn_mat49_mag: vn_smgmag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_9x19_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_9x19_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class vn_mat49_t_mag: vn_mat49_mag {
        greenmag_ammo = "greenmag_ammo_9x19_tracer_1Rnd";
    };

    class vn_mc10_mag: vn_smgmag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_9x19_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_9x19_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class vn_mc10_t_mag: vn_mc10_mag {
        greenmag_ammo = "greenmag_ammo_9x19_tracer_1Rnd";
    };

    class vn_mp40_mag: vn_smgmag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_9x19_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_9x19_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class vn_mp40_t_mag: vn_mp40_mag {
        greenmag_ammo = "greenmag_ammo_9x19_tracer_1Rnd";
    };

    class vn_mpu_mag: vn_smgmag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_9x19_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_9x19_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class vn_mpu_t_mag: vn_mpu_mag {
        greenmag_ammo = "greenmag_ammo_9x19_tracer_1Rnd";
    };

    class vn_sten_mag: vn_smgmag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_9x19_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_9x19_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class vn_sten_t_mag: vn_sten_mag {
        greenmag_ammo = "greenmag_ammo_9x19_tracer_1Rnd";
    };

    class vn_hp_mag: vn_pistolmag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_9x19_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_9x19_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class vn_mk22_mag: vn_pistolmag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_9x19_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_9x19_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class vn_p38_mag: vn_pistolmag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_9x19_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_9x19_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
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

    class vn_m1a1_20_mag: vn_smgmag_base {
        greenmag_ammo = "greenmag_ammo_45ACP_basic_1Rnd";
        greenmag_basicammo = "greenmag_ammo_45ACP_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class vn_m1a1_20_t_mag: vn_m1a1_20_mag {
        greenmag_ammo = "greenmag_ammo_45ACP_tracer_1Rnd";
    };

    class vn_m1a1_30_mag: vn_m1a1_20_mag {
        greenmag_ammo = "greenmag_ammo_45ACP_basic_1Rnd";
        greenmag_basicammo = "greenmag_ammo_45ACP_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class vn_m1a1_30_t_mag: vn_m1a1_30_mag {
        greenmag_ammo = "greenmag_ammo_45ACP_tracer_1Rnd";
    };

    class vn_m1928_mag: vn_smgmag_base {
        greenmag_ammo = "greenmag_ammo_45ACP_basic_1Rnd";
        greenmag_basicammo = "greenmag_ammo_45ACP_basic_1Rnd";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class vn_m1928_t_mag: vn_m1928_mag {
        greenmag_ammo = "greenmag_ammo_45ACP_tracer_1Rnd";
    };

    class vn_m3a1_mag: vn_smgmag_base {
        greenmag_ammo = "greenmag_ammo_45ACP_basic_1Rnd";
        greenmag_basicammo = "greenmag_ammo_45ACP_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class vn_m3a1_t_mag: vn_m3a1_mag {
        greenmag_ammo = "greenmag_ammo_45ACP_tracer_1Rnd";
    };

    class vn_m1911_mag: vn_pistolmag_base {
        greenmag_ammo = "greenmag_ammo_45ACP_basic_1Rnd";
        greenmag_basicammo = "greenmag_ammo_45ACP_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    /////////////
    // 7.62x25 //
    /////////////

    class vn_pps_mag: vn_smgmag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x25_FMJ_1Rnd);
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
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x25_FMJ_1Rnd);
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_762x25_Basic_1Rnd);

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class vn_ppsh41_71_t_mag: vn_ppsh41_71_mag {
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_762x25_Tracer_1Rnd);
    };

    class vn_mat49_vc_mag: vn_mat49_mag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x25_FMJ_1Rnd);
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_762x25_Basic_1Rnd);

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class vn_mat49_vc_t_mag: vn_mat49_vc_mag {
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_762x25_Tracer_1Rnd);
    };

    class vn_m712_mag: vn_pistolmag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x25_FMJ_1Rnd);
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_762x25_Basic_1Rnd);

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class vn_tt33_mag: vn_pistolmag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x25_FMJ_1Rnd);
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_762x25_Basic_1Rnd);

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    ///////////////////////
    // 7.65x17 (.32 ACP) //
    ///////////////////////

    class vn_mat49_vc_mag: vn_mat49_mag { 
        greenmag_ammo = QEGVAR(common_greenmag,ammo_765x17_FMJ_1Rnd);
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_765x17_Basic_1Rnd);

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class vn_mat49_vc_t_mag: vn_mat49_vc_mag {
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_765x17_Tracer_1Rnd);
    };

    class vn_type64_smg_mag: vn_smgmag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_765x17_FMJ_1Rnd);
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_765x17_Basic_1Rnd);

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class vn_type64_smg_t_mag: vn_type64_smg_mag {
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_765x17_Tracer_1Rnd);
    };

    class vn_vz61_mag: vn_smgmag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_765x17_FMJ_1Rnd);
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_765x17_Basic_1Rnd);

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class vn_vz61_t_mag: vn_vz61_mag {
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_765x17_Tracer_1Rnd);
    };

    class vn_type64_mag: vn_pistolmag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_765x17_FMJ_1Rnd);
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_765x17_Basic_1Rnd);

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class vn_welrod_mag: vn_pistolmag_base {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_765x17_FMJ_1Rnd);
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_765x17_Basic_1Rnd);

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

};
