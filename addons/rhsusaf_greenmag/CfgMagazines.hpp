class CfgMagazines {
    class CA_Magazine;
    class 30Rnd_556x45_Stanag;
    class rhs_mag_100Rnd_556x45_M855A1_cmag;
    class rhs_mag_30Rnd_556x45_M855A1_PMAG;
    class rhs_200rnd_556x45_B_SAW;

    /////////////
    // 12.7x99 //
    /////////////

    class 10Rnd_RHS_50BMG_Box: CA_Magazine {
        greenmag_ammo = "greenmag_ammo_127x99_basic_1Rnd";
        greenmag_basicammo = "greenmag_ammo_127x99_basic_1Rnd";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class rhsusf_mag_10Rnd_STD_50BMG_M33: 10Rnd_RHS_50BMG_Box {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_127x99_Match_1Rnd);
    };

    class rhsusf_mag_10Rnd_STD_50BMG_mk211: rhsusf_mag_10Rnd_STD_50BMG_M33 {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_127x99_AP_1Rnd);
    };

    ////////////
    // 4.6x30 //
    ////////////

    class rhsusf_mag_40Rnd_46x30_AP: CA_Magazine {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_46x30_AP_1Rnd);
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_46x30_Basic_1Rnd);

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class rhsusf_mag_40Rnd_46x30_FMJ: CA_Magazine {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_46x30_FMJ_1Rnd);
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_46x30_Basic_1Rnd);

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class rhsusf_mag_40Rnd_46x30_JHP: CA_Magazine {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_46x30_JHP_1Rnd);
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_46x30_Basic_1Rnd);

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    /////////////
    // 5.56x45 //
    /////////////

    class rhs_mag_30Rnd_556x45_M193_Stanag: 30Rnd_556x45_Stanag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_FMJ_1Rnd);
    };

    class rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red: rhs_mag_30Rnd_556x45_M193_Stanag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_Tracer_1Rnd);
    };

    class rhs_mag_30Rnd_556x45_M855A1_Stanag: 30Rnd_556x45_Stanag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_EP_1Rnd);
    };

    class rhsusf_100Rnd_556x45_soft_pouch: rhs_mag_30Rnd_556x45_M855A1_Stanag {
        greenmag_ammo = QEGVAR(common_greenmag,belt_556x45_EP);
        greenmag_basicammo = "greenmag_beltlinked_556x45_basic";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
    };

    class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green: rhs_mag_30Rnd_556x45_M855A1_Stanag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_Tracer_1Rnd);

    };

    class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red: rhs_mag_30Rnd_556x45_M855A1_Stanag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_Tracer_1Rnd);

    };

    class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange: rhs_mag_30Rnd_556x45_M855A1_Stanag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_Tracer_1Rnd);

    };

    class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow: rhs_mag_30Rnd_556x45_M855A1_Stanag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_Tracer_1Rnd);

    };

    class rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red: rhs_mag_30Rnd_556x45_M855A1_PMAG {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_Tracer_1Rnd);
    };

    class rhs_mag_30Rnd_556x45_M855_Stanag: rhs_mag_30Rnd_556x45_M855A1_Stanag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_FMJ_1Rnd);
    };

    class rhs_mag_30Rnd_556x45_M855_PMAG: rhs_mag_30Rnd_556x45_M855A1_PMAG {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_FMJ_1Rnd);
    };

    class rhs_mag_100Rnd_556x45_M855_cmag: rhs_mag_100Rnd_556x45_M855A1_cmag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_FMJ_1Rnd);
    };

    class rhsusf_100Rnd_556x45_M855_soft_pouch: rhsusf_100Rnd_556x45_soft_pouch {
        greenmag_ammo = QEGVAR(common_greenmag,belt_556x45_FMJ);
    };

    class rhsusf_100Rnd_556x45_M995_soft_pouch: rhsusf_100Rnd_556x45_soft_pouch {
        greenmag_ammo = QEGVAR(common_greenmag,belt_556x45_AP);
    };

    class rhsusf_200rnd_556x45_M855_box: rhs_200rnd_556x45_B_SAW {
        greenmag_ammo = QEGVAR(common_greenmag,belt_556x45_FMJ);
    };

    class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green: rhs_mag_30Rnd_556x45_M855_Stanag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_Tracer_1Rnd);
    };

    class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange: rhs_mag_30Rnd_556x45_M855_Stanag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_Tracer_1Rnd);
    };

    class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red: rhs_mag_30Rnd_556x45_M855_Stanag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_Tracer_1Rnd);
    };

    class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow: rhs_mag_30Rnd_556x45_M855_Stanag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_Tracer_1Rnd);
    };

    class rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red: rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_Tracer_1Rnd);
    };

    class rhs_mag_30Rnd_556x45_M200_Stanag: rhs_mag_30Rnd_556x45_M855A1_Stanag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_Blank_1Rnd);
    };

    class rhsusf_100Rnd_556x45_M200_soft_pouch: rhsusf_100Rnd_556x45_soft_pouch {
        greenmag_ammo = QEGVAR(common_greenmag,belt_556x45_Blank);
    };

    class rhs_mag_30Rnd_556x45_Mk262_Stanag: rhs_mag_30Rnd_556x45_M855A1_Stanag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_Match_1Rnd);
    };

    class rhs_mag_30Rnd_556x45_Mk262_PMAG: rhs_mag_30Rnd_556x45_M855A1_PMAG {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_Match_1Rnd);
    };

    class rhs_mag_100Rnd_556x45_Mk262_cmag: rhs_mag_100Rnd_556x45_M855A1_cmag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_Match_1Rnd);
    };

    class rhs_mag_30Rnd_556x45_Mk318_Stanag: rhs_mag_30Rnd_556x45_M855A1_Stanag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_JHP_1Rnd);
    };

    class rhs_mag_30Rnd_556x45_Mk318_PMAG: rhs_mag_30Rnd_556x45_M855A1_PMAG {    
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_JHP_1Rnd);
    };

    class rhs_mag_100Rnd_556x45_Mk318_cmag: rhs_mag_100Rnd_556x45_M855A1_cmag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_556x45_JHP_1Rnd);
    };

    /////////////
    // 7.62x51 //
    /////////////

    class rhsusf_5Rnd_762x51_m118_special_Mag: CA_Magazine {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x51_Match_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_needBelt = 0;
        greenmag_canSpeedload = 0;
    };

    class rhsusf_10Rnd_762x51_m118_special_Mag: CA_Magazine {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x51_Match_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class rhsusf_20Rnd_762x51_m118_special_Mag: CA_Magazine {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x51_Match_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class rhs_mag_20Rnd_SCAR_762x51_m80_ball: CA_Magazine {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x51_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class rhsusf_20Rnd_762x51_m80_Mag: rhsusf_20Rnd_762x51_m118_special_Mag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x51_FMJ_1Rnd);
    };

    class rhs_mag_20Rnd_SCAR_762x51_m118_special: rhs_mag_20Rnd_SCAR_762x51_m80_ball {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x51_Match_1Rnd);
    };

    class rhs_mag_20Rnd_SCAR_762x51_m80a1_epr: rhs_mag_20Rnd_SCAR_762x51_m80_ball {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x51_EP_1Rnd);
    };

    class rhs_mag_20Rnd_SCAR_762x51_m61_ap: rhs_mag_20Rnd_SCAR_762x51_m80_ball {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x51_AP_1Rnd);
    };

    class rhsusf_5Rnd_762x51_m62_Mag: rhsusf_5Rnd_762x51_m118_special_Mag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x51_Tracer_1Rnd);
    };

    class rhsusf_10Rnd_762x51_m62_Mag: rhsusf_5Rnd_762x51_m118_special_Mag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x51_Tracer_1Rnd);
    };

    class rhsusf_20Rnd_762x51_m62_Mag: rhsusf_20Rnd_762x51_m118_special_Mag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x51_Tracer_1Rnd);
    };

    class rhsusf_5Rnd_762x51_m993_Mag: rhsusf_5Rnd_762x51_m118_special_Mag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x51_AP_1Rnd);
    };

    class rhsusf_10Rnd_762x51_m993_Mag: rhsusf_5Rnd_762x51_m118_special_Mag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x51_AP_1Rnd);
    };

    class rhsusf_20Rnd_762x51_m993_Mag: rhsusf_20Rnd_762x51_m118_special_Mag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x51_AP_1Rnd);
    };

    class rhsusf_20Rnd_762x51_SR25_mk316_special_Mag: rhsusf_20Rnd_762x51_m118_special_Mag {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x51_Match_1Rnd);
    };

    class rhs_mag_20Rnd_SCAR_762x51_mk316_special: rhs_mag_20Rnd_SCAR_762x51_m80_ball {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x51_Match_1Rnd);
    };

    class rhsusf_50Rnd_762x51: CA_Magazine {
        greenmag_ammo = QEGVAR(common_greenmag,belt_762x51_EP);
        greenmag_basicammo = "greenmag_beltlinked_762x51_basic";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
    };

    class rhsusf_50Rnd_762x51_m61_ap: rhsusf_50Rnd_762x51 {
        greenmag_ammo = QEGVAR(common_greenmag,belt_762x51_AP);
    };

    class rhsusf_50Rnd_762x51_m62_tracer: rhsusf_50Rnd_762x51 {
        greenmag_ammo = QEGVAR(common_greenmag,belt_762x51_Tracer);
    };

    class rhsusf_50Rnd_762x51_m80a1epr: rhsusf_50Rnd_762x51 {
        greenmag_ammo = QEGVAR(common_greenmag,belt_762x51_EP);
    };

    class rhsusf_50Rnd_762x51_m82_blank: rhsusf_50Rnd_762x51 {
        greenmag_ammo = QEGVAR(common_greenmag,belt_762x51_Blank);
    };

    class rhsusf_50Rnd_762x51_m993: rhsusf_50Rnd_762x51 {
        greenmag_ammo = QEGVAR(common_greenmag,belt_762x51_Match);
    };

    /////////////
    // .300 WM //
    /////////////

    class rhsusf_5Rnd_300winmag_xm2010: CA_Magazine {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_762x67_Match_1Rnd);
        greenmag_basicammo = QEGVAR(common_greenmag,ammo_762x67_Basic_1Rnd);

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    //////////
    // 9x19 //
    //////////

    class rhsusf_mag_17Rnd_9x19_FMJ: CA_Magazine {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_9x19_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_9x19_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class rhsusf_mag_17Rnd_9x19_JHP: rhsusf_mag_17Rnd_9x19_FMJ {
        greenmag_ammo = QEGVAR(common_greenmag,ammo_9x19_JHP_1Rnd);
    };

};
