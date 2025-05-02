class CfgMagazines {
	class CA_Magazine;
	class 20Rnd_762x51_Mag;
	class 30Rnd_556x45_Stanag;
	class 30Rnd_9x21_Mag;
	class 30Rnd_9x21_Mag_SMG_02;
	class 50Rnd_570x28_SMG_03;
	class rhs_10Rnd_762x54mmR_7N1;
	class rhs_30Rnd_545x39_AK;
	class rhs_30Rnd_545x39_AK_green;
	class rhs_30Rnd_762x39mm;
	class rhs_30Rnd_762x39mm_tracer;
	class rhsusf_5Rnd_300winmag_xm2010;
	class rhsusf_100Rnd_762x51_m80a1epr;
	class rhsusf_mag_17Rnd_9x19_FMJ;
	class rhs_mag_30Rnd_556x45_Mk318_Stanag;
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red;

    //////////
    // 9x19 //
    //////////

    class UK3CB_AUG_25Rnd_9x19mm_Magazine : rhsusf_mag_17Rnd_9x19_FMJ {
        greenmag_ammo = QAMMO_CLASS(9x19_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_9x19_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_BHP_9_13Rnd : rhsusf_mag_17Rnd_9x19_FMJ {
        greenmag_ammo = QAMMO_CLASS(9x19_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_9x19_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_CZ75_9_20Rnd : rhsusf_mag_17Rnd_9x19_FMJ {
        greenmag_ammo = QAMMO_CLASS(9x19_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_9x19_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_MP5_30Rnd_9x19_Magazine: 30Rnd_9x21_Mag {
        greenmag_ammo = QAMMO_CLASS(9x19_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_9x19_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_MP5_30Rnd_9x19_Magazine_R: 30Rnd_9x21_Mag {
        greenmag_ammo = QAMMO_CLASS(9x19_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_9x19_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_MP5_30Rnd_9x19_Magazine_RT: UK3CB_MP5_30Rnd_9x19_Magazine_R {
        greenmag_ammo = "greenmag_ammo_9x19_tracer_1Rnd";
    };

    class UK3CB_MP5_30Rnd_9x19_Magazine_Y;
    class UK3CB_MP5_30Rnd_9x19_Magazine_YT: UK3CB_MP5_30Rnd_9x19_Magazine_Y {
        greenmag_ammo = "greenmag_ammo_9x19_tracer_1Rnd";
    };

    class UK3CB_MP5_30Rnd_9x19_Magazine_G;
    class UK3CB_MP5_30Rnd_9x19_Magazine_GT: UK3CB_MP5_30Rnd_9x19_Magazine_G {
        greenmag_ammo = "greenmag_ammo_9x19_tracer_1Rnd";
    };

    class UK3CB_MP5_30Rnd_9x19_Magazine_W;
    class UK3CB_MP5_30Rnd_9x19_Magazine_WT: UK3CB_MP5_30Rnd_9x19_Magazine_W {
        greenmag_ammo = "greenmag_ammo_9x19_tracer_1Rnd";
    };

    class UK3CB_Sten_34Rnd_Magazine: 30Rnd_9x21_Mag_SMG_02 {
        greenmag_ammo = QAMMO_CLASS(9x19_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_9x19_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_Sten_34Rnd_Magazine_R: 30Rnd_9x21_Mag_SMG_02 {
        greenmag_ammo = QAMMO_CLASS(9x19_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_9x19_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };


    class UK3CB_Sten_34Rnd_Magazine_RT: UK3CB_Sten_34Rnd_Magazine_R {
        greenmag_ammo = "greenmag_ammo_9x19_tracer_1Rnd";
    };

    class UK3CB_Sten_34Rnd_Magazine_Y;
    class UK3CB_Sten_34Rnd_Magazine_YT: UK3CB_Sten_34Rnd_Magazine_Y {
        greenmag_ammo = "greenmag_ammo_9x19_tracer_1Rnd";
    };

    class UK3CB_Sten_34Rnd_Magazine_G;
    class UK3CB_Sten_34Rnd_Magazine_GT: UK3CB_Sten_34Rnd_Magazine_G {
        greenmag_ammo = "greenmag_ammo_9x19_tracer_1Rnd";
    };

    class UK3CB_Sten_34Rnd_Magazine_W;
    class UK3CB_Sten_34Rnd_Magazine_WT: UK3CB_Sten_34Rnd_Magazine_W {
        greenmag_ammo = "greenmag_ammo_9x19_tracer_1Rnd";
    };

    class UK3CB_USP_9_15Rnd: rhsusf_mag_17Rnd_9x19_FMJ {
        greenmag_ammo = QAMMO_CLASS(9x19_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_9x19_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    ///////////
    // 10x25 //
    ///////////

    class UK3CB_MP5_30Rnd_10_Magazine: 30Rnd_9x21_Mag {
        greenmag_ammo = QAMMO_CLASS(10x25_FMJ_1Rnd);
        greenmag_basicammo = QAMMO_CLASS(10x25_Basic_1Rnd);

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };


    class UK3CB_MP5_30Rnd_10_Magazine_R: 30Rnd_9x21_Mag {
        greenmag_ammo = QAMMO_CLASS(10x25_FMJ_1Rnd);
        greenmag_basicammo = QAMMO_CLASS(10x25_Basic_1Rnd);

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_MP5_30Rnd_10_Magazine_RT: UK3CB_MP5_30Rnd_10_Magazine_R {
        greenmag_ammo = QAMMO_CLASS(10x25_Tracer_1Rnd);
    };

    class UK3CB_MP5_30Rnd_10_Magazine_Y;
    class UK3CB_MP5_30Rnd_10_Magazine_YT: UK3CB_MP5_30Rnd_10_Magazine_Y {
        greenmag_ammo = QAMMO_CLASS(10x25_Tracer_1Rnd);
    };

    class UK3CB_MP5_30Rnd_10_Magazine_G;
    class UK3CB_MP5_30Rnd_10_Magazine_GT: UK3CB_MP5_30Rnd_10_Magazine_G {
        greenmag_ammo = QAMMO_CLASS(10x25_Tracer_1Rnd);
    };

    class UK3CB_MP5_30Rnd_10_Magazine_W;
    class UK3CB_MP5_30Rnd_10_Magazine_WT: UK3CB_MP5_30Rnd_10_Magazine_W {
        greenmag_ammo = QAMMO_CLASS(10x25_Tracer_1Rnd);
    };

    ////////////
    // 7.5x55 //
    ////////////

    class UK3CB_STGW57_24rnd_75x55: 30Rnd_556x45_Stanag {
        greenmag_ammo = QAMMO_CLASS(75x55_FMJ_1Rnd);
        greenmag_basicammo = QAMMO_CLASS(75x55_Basic_1Rnd);

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };


    class UK3CB_STGW57_24rnd_75x55_RT: UK3CB_STGW57_24rnd_75x55 {
        greenmag_ammo = QAMMO_CLASS(75x55_Tracer_1Rnd);
        greenmag_basicammo = QAMMO_CLASS(75x55_Basic_1Rnd);

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_STGW57_24rnd_75x55_GT: UK3CB_STGW57_24rnd_75x55 {
        greenmag_ammo = QAMMO_CLASS(75x55_Tracer_1Rnd);
        greenmag_basicammo = QAMMO_CLASS(75x55_Basic_1Rnd);

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_STGW57_24rnd_75x55_YT: UK3CB_STGW57_24rnd_75x55 {
        greenmag_ammo = QAMMO_CLASS(75x55_Tracer_1Rnd);
        greenmag_basicammo = QAMMO_CLASS(75x55_Basic_1Rnd);

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_STGW57_24rnd_75x55_WT: UK3CB_STGW57_24rnd_75x55 {
        greenmag_ammo = QAMMO_CLASS(75x55_Tracer_1Rnd);
        greenmag_basicammo = QAMMO_CLASS(75x55_Basic_1Rnd);

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class uk3cb_no4_enfield_303_10Rnd_magazine: 20Rnd_762x51_Mag {
        greenmag_ammo = QAMMO_CLASS(77x56_FMJ_1Rnd);
        greenmag_basicammo = QAMMO_CLASS(77x56_Basic_1Rnd);

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    //////////
    // .303 //
    //////////

    class uk3cb_no4_enfield_303_10Rnd_magazine_RT: uk3cb_no4_enfield_303_10Rnd_magazine {
        greenmag_ammo = QAMMO_CLASS(77x56_Tracer_1Rnd);
    };

    class uk3cb_no4_enfield_303_10Rnd_magazine_YT: uk3cb_no4_enfield_303_10Rnd_magazine {
        greenmag_ammo = QAMMO_CLASS(77x56_Tracer_1Rnd);
    };

    class uk3cb_no4_enfield_303_10Rnd_magazine_GT: uk3cb_no4_enfield_303_10Rnd_magazine {
        greenmag_ammo = QAMMO_CLASS(77x56_Tracer_1Rnd);
    };

    class uk3cb_no4_enfield_303_10Rnd_magazine_WT: uk3cb_no4_enfield_303_10Rnd_magazine {
        greenmag_ammo = QAMMO_CLASS(77x56_Tracer_1Rnd);
    };

    ////////////
    // 9.3x62 //
    ////////////

    class UK3CB_CZ550_5rnd_Mag : rhsusf_5Rnd_300winmag_xm2010 {
        greenmag_ammo = QAMMO_CLASS(93x62_FMJ_1Rnd);
        greenmag_basicammo = QAMMO_CLASS(93x62_Tracer_1Rnd);

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class UK3CB_CZ550_5rnd_Mag_RT : UK3CB_CZ550_5rnd_Mag {
        greenmag_ammo = QAMMO_CLASS(93x62_Tracer_1Rnd);
    };

    class UK3CB_CZ550_5rnd_Mag_GT : UK3CB_CZ550_5rnd_Mag {
        greenmag_ammo = QAMMO_CLASS(93x62_Tracer_1Rnd);
    };

    class UK3CB_CZ550_5rnd_Mag_YT : UK3CB_CZ550_5rnd_Mag {
        greenmag_ammo = QAMMO_CLASS(93x62_Tracer_1Rnd);
    };

    class UK3CB_CZ550_5rnd_Mag_WT : UK3CB_CZ550_5rnd_Mag {
        greenmag_ammo = QAMMO_CLASS(93x62_Tracer_1Rnd);
    };

    /////////////
    // 5.45x39 //
    /////////////

    class UK3CB_RPK74_60rnd_545x39: rhs_30Rnd_545x39_AK {
        greenmag_ammo = QAMMO_CLASS(545x39_EP_1Rnd);
        greenmag_basicammo = "greenmag_ammo_545x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };


    class UK3CB_RPK74_60rnd_545x39_R: rhs_30Rnd_545x39_AK {
        greenmag_ammo = QAMMO_CLASS(545x39_EP_1Rnd);
        greenmag_basicammo = "greenmag_ammo_545x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_RPK74_60rnd_545x39_Y: rhs_30Rnd_545x39_AK {
        greenmag_ammo = QAMMO_CLASS(545x39_EP_1Rnd);
        greenmag_basicammo = "greenmag_ammo_545x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_RPK74_60rnd_545x39_G: rhs_30Rnd_545x39_AK {
        greenmag_ammo = QAMMO_CLASS(545x39_EP_1Rnd);
        greenmag_basicammo = "greenmag_ammo_545x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_RPK74_60rnd_545x39_W: rhs_30Rnd_545x39_AK {
        greenmag_ammo = QAMMO_CLASS(545x39_EP_1Rnd);
        greenmag_basicammo = "greenmag_ammo_545x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };


    class UK3CB_RPK74_60rnd_545x39_RM: rhs_30Rnd_545x39_AK_green {
        greenmag_ammo = QAMMO_CLASS(545x39_EP_1Rnd);
        greenmag_basicammo = "greenmag_ammo_545x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_RPK74_60rnd_545x39_YM: rhs_30Rnd_545x39_AK_green {
        greenmag_ammo = QAMMO_CLASS(545x39_EP_1Rnd);
        greenmag_basicammo = "greenmag_ammo_545x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_RPK74_60rnd_545x39_GM: rhs_30Rnd_545x39_AK_green {
        greenmag_ammo = QAMMO_CLASS(545x39_EP_1Rnd);
        greenmag_basicammo = "greenmag_ammo_545x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_RPK74_60rnd_545x39_WM: rhs_30Rnd_545x39_AK_green {
        greenmag_ammo = QAMMO_CLASS(545x39_EP_1Rnd);
        greenmag_basicammo = "greenmag_ammo_545x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };


    class UK3CB_RPK74_60rnd_545x39_RT: rhs_30Rnd_545x39_AK_green {
        greenmag_ammo = QAMMO_CLASS(545x39_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_545x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_RPK74_60rnd_545x39_YT: rhs_30Rnd_545x39_AK_green {
        greenmag_ammo = QAMMO_CLASS(545x39_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_545x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_RPK74_60rnd_545x39_GT: rhs_30Rnd_545x39_AK_green {
        greenmag_ammo = QAMMO_CLASS(545x39_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_545x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_RPK74_60rnd_545x39_WT: rhs_30Rnd_545x39_AK_green {
        greenmag_ammo = QAMMO_CLASS(545x39_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_545x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_ACR_30rnd_556x45 : 30Rnd_556x45_Stanag {
        greenmag_ammo = QAMMO_CLASS(556x45_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    /////////////
    // 5.56x45 //
    /////////////

    class UK3CB_ACR_30rnd_556x45_R;
    class UK3CB_ACR_30rnd_556x45_RT : UK3CB_ACR_30rnd_556x45_R {
        greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
    };

    class UK3CB_ACR_30rnd_556x45_G;
    class UK3CB_ACR_30rnd_556x45_GT : UK3CB_ACR_30rnd_556x45_G {
        greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
    };

    class UK3CB_ACR_30rnd_556x45_Y;
    class UK3CB_ACR_30rnd_556x45_YT : UK3CB_ACR_30rnd_556x45_Y {
        greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
    };

    class UK3CB_ACR_30rnd_556x45_W;
    class UK3CB_ACR_30rnd_556x45_WT : UK3CB_ACR_30rnd_556x45_Y {
        greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
    };

    class UK3CB_AUG_30Rnd_556x45_Magazine : 30Rnd_556x45_Stanag {
        greenmag_ammo = QAMMO_CLASS(556x45_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };


    class UK3CB_AUG_30Rnd_556x45_Magazine_RT : UK3CB_AUG_30Rnd_556x45_Magazine {
        greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
    };

    class UK3CB_AUG_30Rnd_556x45_Magazine_YT : UK3CB_AUG_30Rnd_556x45_Magazine {
        greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
    };

    class UK3CB_AUG_30Rnd_556x45_Magazine_GT : UK3CB_AUG_30Rnd_556x45_Magazine {
        greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
    };

    class UK3CB_AUG_30Rnd_556x45_Magazine_WT : UK3CB_AUG_30Rnd_556x45_Magazine {
        greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
    };


    class UK3CB_AUG_42Rnd_556x45_Magazine;
    class UK3CB_AUG_42Rnd_556x45_Magazine_RT : UK3CB_AUG_42Rnd_556x45_Magazine {
        greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
    };

    class UK3CB_AUG_42Rnd_556x45_Magazine_YT : UK3CB_AUG_42Rnd_556x45_Magazine {
        greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
    };

    class UK3CB_AUG_42Rnd_556x45_Magazine_GT : UK3CB_AUG_42Rnd_556x45_Magazine {
        greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
    };

    class UK3CB_AUG_42Rnd_556x45_Magazine_WT : UK3CB_AUG_42Rnd_556x45_Magazine {
        greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
    };

    class UK3CB_FAMAS_25rnd_556x45 : 30Rnd_556x45_Stanag {
        greenmag_ammo = QAMMO_CLASS(556x45_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };


    class UK3CB_FAMAS_25rnd_556x45_R : 30Rnd_556x45_Stanag {
        greenmag_ammo = QAMMO_CLASS(556x45_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_FAMAS_25rnd_556x45_G : 30Rnd_556x45_Stanag {
        greenmag_ammo = QAMMO_CLASS(556x45_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_FAMAS_25rnd_556x45_Y : 30Rnd_556x45_Stanag {
        greenmag_ammo = QAMMO_CLASS(556x45_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_FAMAS_25rnd_556x45_W : 30Rnd_556x45_Stanag {
        greenmag_ammo = QAMMO_CLASS(556x45_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };


    class UK3CB_FAMAS_25rnd_556x45_RT : UK3CB_FAMAS_25rnd_556x45_R {
        greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
    };

    class UK3CB_FAMAS_25rnd_556x45_GT : UK3CB_FAMAS_25rnd_556x45_G {
        greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
    };

    class UK3CB_FAMAS_25rnd_556x45_YT : UK3CB_FAMAS_25rnd_556x45_Y {
        greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
    };

    class UK3CB_FAMAS_25rnd_556x45_WT : UK3CB_FAMAS_25rnd_556x45_W {
        greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
    };

    class UK3CB_HK33_30rnd_556x45 : 30Rnd_556x45_Stanag {
        greenmag_ammo = QAMMO_CLASS(556x45_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };


    class UK3CB_HK33_30rnd_556x45_R : 30Rnd_556x45_Stanag {
        greenmag_ammo = QAMMO_CLASS(556x45_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_HK33_30rnd_556x45_G : 30Rnd_556x45_Stanag {
        greenmag_ammo = QAMMO_CLASS(556x45_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_HK33_30rnd_556x45_Y : 30Rnd_556x45_Stanag {
        greenmag_ammo = QAMMO_CLASS(556x45_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_HK33_30rnd_556x45_W : 30Rnd_556x45_Stanag {
        greenmag_ammo = QAMMO_CLASS(556x45_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };


    class UK3CB_HK33_30rnd_556x45_RT : UK3CB_HK33_30rnd_556x45_R {
        greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
    };

    class UK3CB_HK33_30rnd_556x45_GT : UK3CB_HK33_30rnd_556x45_G {
        greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
    };

    class UK3CB_HK33_30rnd_556x45_YT : UK3CB_HK33_30rnd_556x45_Y {
        greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
    };

    class UK3CB_HK33_30rnd_556x45_WT : UK3CB_HK33_30rnd_556x45_W {
        greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
    };

    class UK3CB_M16_20rnd_556x45: rhs_mag_30Rnd_556x45_Mk318_Stanag {
        greenmag_ammo = QAMMO_CLASS(556x45_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_M16_30rnd_556x45: rhs_mag_30Rnd_556x45_Mk318_Stanag {
        greenmag_ammo = QAMMO_CLASS(556x45_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };



    class UK3CB_M16_20rnd_556x45_R: rhs_mag_30Rnd_556x45_Mk318_Stanag {
        greenmag_ammo = QAMMO_CLASS(556x45_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_M16_30rnd_556x45_R: rhs_mag_30Rnd_556x45_Mk318_Stanag {
        greenmag_ammo = QAMMO_CLASS(556x45_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };


    class UK3CB_M16_20rnd_556x45_Y: rhs_mag_30Rnd_556x45_Mk318_Stanag {
        greenmag_ammo = QAMMO_CLASS(556x45_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_M16_30rnd_556x45_Y: rhs_mag_30Rnd_556x45_Mk318_Stanag {
        greenmag_ammo = QAMMO_CLASS(556x45_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };


    class UK3CB_M16_20rnd_556x45_G: rhs_mag_30Rnd_556x45_Mk318_Stanag {
        greenmag_ammo = QAMMO_CLASS(556x45_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_M16_30rnd_556x45_G: rhs_mag_30Rnd_556x45_Mk318_Stanag {
        greenmag_ammo = QAMMO_CLASS(556x45_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };


    class UK3CB_M16_20rnd_556x45_W: rhs_mag_30Rnd_556x45_Mk318_Stanag {
        greenmag_ammo = QAMMO_CLASS(556x45_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_M16_30rnd_556x45_W: rhs_mag_30Rnd_556x45_Mk318_Stanag {
        greenmag_ammo = QAMMO_CLASS(556x45_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };



    class UK3CB_M16_20rnd_556x45_RT: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
        greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_M16_30rnd_556x45_RT: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
        greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };


    class UK3CB_M16_20rnd_556x45_YT: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
        greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_M16_30rnd_556x45_YT: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
        greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };


    class UK3CB_M16_20rnd_556x45_GT: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
        greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_M16_30rnd_556x45_GT: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
        greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_M16_20rnd_556x45_WT: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
        greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_M16_30rnd_556x45_WT: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red {
        greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    ////////////
    // 5.7x28 //
    ////////////

    class UK3CB_P90_50rnd_570x28_Magazine: 50Rnd_570x28_SMG_03 {
        greenmag_ammo = QAMMO_CLASS(570x28_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_570x28_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_P90_50rnd_570x28_Magazine_RT: UK3CB_P90_50rnd_570x28_Magazine {
        greenmag_ammo = QAMMO_CLASS(570x28_Tracer_1Rnd);
    };

    class UK3CB_P90_50rnd_570x28_Magazine_GT: UK3CB_P90_50rnd_570x28_Magazine {
        greenmag_ammo = QAMMO_CLASS(570x28_Tracer_1Rnd);
    };

    class UK3CB_P90_50rnd_570x28_Magazine_YT: UK3CB_P90_50rnd_570x28_Magazine {
        greenmag_ammo = QAMMO_CLASS(570x28_Tracer_1Rnd);
    };

    class UK3CB_P90_50rnd_570x28_Magazine_WT: UK3CB_P90_50rnd_570x28_Magazine {
        greenmag_ammo = QAMMO_CLASS(570x28_Tracer_1Rnd);
    };

    /////////////
    // 7.62x25 //
    /////////////

    class uk3cb_PPSH_71rnd_magazine: CA_Magazine {
        greenmag_ammo = QAMMO_CLASS(762x25_FMJ_1Rnd);
        greenmag_basicammo = QAMMO_CLASS(762x25_Basic_1Rnd);

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class uk3cb_PPSH_71rnd_magazine_R: CA_Magazine {
        greenmag_ammo = QAMMO_CLASS(762x25_FMJ_1Rnd);
        greenmag_basicammo = QAMMO_CLASS(762x25_Basic_1Rnd);

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class uk3cb_PPSH_71rnd_magazine_RM: CA_Magazine {
        greenmag_ammo = QAMMO_CLASS(762x25_FMJ_1Rnd);
        greenmag_basicammo = QAMMO_CLASS(762x25_Basic_1Rnd);

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class uk3cb_PPSH_71rnd_magazine_RT: CA_Magazine {
        greenmag_ammo = QAMMO_CLASS(762x25_Tracer_1Rnd);
        greenmag_basicammo = QAMMO_CLASS(762x25_Basic_1Rnd);

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    /////////////
    // 7.62x39 //
    /////////////

    class UK3CB_AK47_30Rnd_Magazine : rhs_30Rnd_762x39mm {
        greenmag_ammo = QAMMO_CLASS(762x39_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_AK47_45Rnd_Magazine : rhs_30Rnd_762x39mm {
        greenmag_ammo = QAMMO_CLASS(762x39_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_AK47_30Rnd_Magazine_G : rhs_30Rnd_762x39mm {
        greenmag_ammo = QAMMO_CLASS(762x39_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_AK47_45Rnd_Magazine_G : rhs_30Rnd_762x39mm {
        greenmag_ammo = QAMMO_CLASS(762x39_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_AK47_30Rnd_Magazine_R : rhs_30Rnd_762x39mm {
        greenmag_ammo = QAMMO_CLASS(762x39_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_AK47_45Rnd_Magazine_R : rhs_30Rnd_762x39mm {
        greenmag_ammo = QAMMO_CLASS(762x39_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };


    class UK3CB_AK47_30Rnd_Magazine_Y : rhs_30Rnd_762x39mm {
        greenmag_ammo = QAMMO_CLASS(762x39_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_AK47_45Rnd_Magazine_Y : rhs_30Rnd_762x39mm {
        greenmag_ammo = QAMMO_CLASS(762x39_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_AK47_30Rnd_Magazine_W : rhs_30Rnd_762x39mm {
        greenmag_ammo = QAMMO_CLASS(762x39_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_AK47_45Rnd_Magazine_W : rhs_30Rnd_762x39mm {
        greenmag_ammo = QAMMO_CLASS(762x39_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_AK47_30Rnd_Magazine_GT : rhs_30Rnd_762x39mm_tracer {
        greenmag_ammo = QAMMO_CLASS(762x39_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_AK47_45Rnd_Magazine_GT : rhs_30Rnd_762x39mm_tracer {
        greenmag_ammo = QAMMO_CLASS(762x39_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_AK47_30Rnd_Magazine_RT : rhs_30Rnd_762x39mm_tracer {
        greenmag_ammo = QAMMO_CLASS(762x39_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_AK47_45Rnd_Magazine_RT : rhs_30Rnd_762x39mm_tracer {
        greenmag_ammo = QAMMO_CLASS(762x39_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_AK47_30Rnd_Magazine_YT : rhs_30Rnd_762x39mm_tracer {
        greenmag_ammo = QAMMO_CLASS(762x39_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_AK47_45Rnd_Magazine_YT : rhs_30Rnd_762x39mm_tracer {
        greenmag_ammo = QAMMO_CLASS(762x39_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_AK47_30Rnd_Magazine_WT : rhs_30Rnd_762x39mm_tracer {
        greenmag_ammo = QAMMO_CLASS(762x39_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_AK47_45Rnd_Magazine_WT : rhs_30Rnd_762x39mm_tracer {
        greenmag_ammo = QAMMO_CLASS(762x39_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_RPK_75rnd_762x39: rhs_30Rnd_762x39mm {
        greenmag_ammo = QAMMO_CLASS(762x39_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };


    class UK3CB_RPK_75rnd_762x39_R: rhs_30Rnd_762x39mm {
        greenmag_ammo = QAMMO_CLASS(762x39_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_RPK_75rnd_762x39_G: rhs_30Rnd_762x39mm {
        greenmag_ammo = QAMMO_CLASS(762x39_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_RPK_75rnd_762x39_Y: rhs_30Rnd_762x39mm {
        greenmag_ammo = QAMMO_CLASS(762x39_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_RPK_75rnd_762x39_W: rhs_30Rnd_762x39mm {
        greenmag_ammo = QAMMO_CLASS(762x39_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };


    class UK3CB_RPK_75rnd_762x39_RM: rhs_30Rnd_762x39mm_tracer {
        greenmag_ammo = QAMMO_CLASS(762x39_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_RPK_75rnd_762x39_GM: rhs_30Rnd_762x39mm_tracer {
        greenmag_ammo = QAMMO_CLASS(762x39_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_RPK_75rnd_762x39_YM: rhs_30Rnd_762x39mm_tracer {
        greenmag_ammo = QAMMO_CLASS(762x39_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_RPK_75rnd_762x39_WM: rhs_30Rnd_762x39mm_tracer {
        greenmag_ammo = QAMMO_CLASS(762x39_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };


    class UK3CB_RPK_75rnd_762x39_RT: rhs_30Rnd_762x39mm_tracer {
        greenmag_ammo = QAMMO_CLASS(762x39_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_RPK_75rnd_762x39_GT: rhs_30Rnd_762x39mm_tracer {
        greenmag_ammo = QAMMO_CLASS(762x39_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_RPK_75rnd_762x39_YT: rhs_30Rnd_762x39mm_tracer {
        greenmag_ammo = QAMMO_CLASS(762x39_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_RPK_75rnd_762x39_WT: rhs_30Rnd_762x39mm_tracer {
        greenmag_ammo = QAMMO_CLASS(762x39_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class uk3cb_10rnd_magazine_sks: CA_Magazine {
        greenmag_ammo = QAMMO_CLASS(762x39_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class uk3cb_10rnd_magazine_sks_RT: uk3cb_10rnd_magazine_sks {
        greenmag_ammo = QAMMO_CLASS(762x39_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class uk3cb_10rnd_magazine_sks_YT: uk3cb_10rnd_magazine_sks {
        greenmag_ammo = QAMMO_CLASS(762x39_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class uk3cb_10rnd_magazine_sks_GT: uk3cb_10rnd_magazine_sks {
        greenmag_ammo = QAMMO_CLASS(762x39_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class uk3cb_10rnd_magazine_sks_WT: uk3cb_10rnd_magazine_sks {
        greenmag_ammo = QAMMO_CLASS(762x39_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    /////////////
    // 7.62x51 //
    /////////////
    
    class UK3CB_Bren_30Rnd_762x51_Magazine : 20Rnd_762x51_Mag {
        greenmag_ammo = QAMMO_CLASS(762x51_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };


    class UK3CB_Bren_30Rnd_762x51_Magazine_R : 20Rnd_762x51_Mag {
        greenmag_ammo = QAMMO_CLASS(762x51_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_Bren_30Rnd_762x51_Magazine_G : 20Rnd_762x51_Mag {
        greenmag_ammo = QAMMO_CLASS(762x51_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_Bren_30Rnd_762x51_Magazine_Y : 20Rnd_762x51_Mag {
        greenmag_ammo = QAMMO_CLASS(762x51_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_Bren_30Rnd_762x51_Magazine_W : 20Rnd_762x51_Mag {
        greenmag_ammo = QAMMO_CLASS(762x51_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };


    class UK3CB_Bren_30Rnd_762x51_Magazine_RT : 20Rnd_762x51_Mag {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_Bren_30Rnd_762x51_Magazine_GT : 20Rnd_762x51_Mag {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_Bren_30Rnd_762x51_Magazine_YT : 20Rnd_762x51_Mag {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_Bren_30Rnd_762x51_Magazine_WT : 20Rnd_762x51_Mag {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class uk3cb_l42_enfield_762_10Rnd_magazine: 20Rnd_762x51_Mag {
        greenmag_ammo = QAMMO_CLASS(762x51_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class uk3cb_l42_enfield_762_10Rnd_magazine_RT: uk3cb_l42_enfield_762_10Rnd_magazine {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class uk3cb_l42_enfield_762_10Rnd_magazine_YT: uk3cb_l42_enfield_762_10Rnd_magazine {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class uk3cb_l42_enfield_762_10Rnd_magazine_GT: uk3cb_l42_enfield_762_10Rnd_magazine {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class uk3cb_l42_enfield_762_10Rnd_magazine_WT: uk3cb_l42_enfield_762_10Rnd_magazine {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class UK3CB_FNFAL_20rnd_762x51 : 30Rnd_556x45_Stanag {
        greenmag_ammo = QAMMO_CLASS(762x51_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_FNFAL_30rnd_762x51 : 30Rnd_556x45_Stanag {
        greenmag_ammo = QAMMO_CLASS(762x51_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_FNFAL_20rnd_762x51_R : 30Rnd_556x45_Stanag {
        greenmag_ammo = QAMMO_CLASS(762x51_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_FNFAL_30rnd_762x51_R : 30Rnd_556x45_Stanag {
        greenmag_ammo = QAMMO_CLASS(762x51_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_FNFAL_20rnd_762x51_G : 30Rnd_556x45_Stanag {
        greenmag_ammo = QAMMO_CLASS(762x51_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_FNFAL_30rnd_762x51_G : 30Rnd_556x45_Stanag {
        greenmag_ammo = QAMMO_CLASS(762x51_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_FNFAL_20rnd_762x51_Y : 30Rnd_556x45_Stanag {
        greenmag_ammo = QAMMO_CLASS(762x51_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_FNFAL_30rnd_762x51_Y : 30Rnd_556x45_Stanag {
        greenmag_ammo = QAMMO_CLASS(762x51_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_FNFAL_20rnd_762x51_W : 30Rnd_556x45_Stanag {
        greenmag_ammo = QAMMO_CLASS(762x51_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_FNFAL_30rnd_762x51_W : 30Rnd_556x45_Stanag {
        greenmag_ammo = QAMMO_CLASS(762x51_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_FNFAL_20rnd_762x51_RT : UK3CB_FNFAL_20rnd_762x51_R {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class UK3CB_FNFAL_30rnd_762x51_RT : UK3CB_FNFAL_30rnd_762x51_R {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class UK3CB_FNFAL_20rnd_762x51_GT : UK3CB_FNFAL_20rnd_762x51_G {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class UK3CB_FNFAL_30rnd_762x51_GT : UK3CB_FNFAL_30rnd_762x51_G {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class UK3CB_FNFAL_20rnd_762x51_YT : UK3CB_FNFAL_20rnd_762x51_Y {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class UK3CB_FNFAL_30rnd_762x51_YT : UK3CB_FNFAL_30rnd_762x51_Y {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class UK3CB_FNFAL_20rnd_762x51_WT : UK3CB_FNFAL_20rnd_762x51_G {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class UK3CB_FNFAL_30rnd_762x51_WT : UK3CB_FNFAL_30rnd_762x51_G {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class UK3CB_G3_20rnd_762x51 : 30Rnd_556x45_Stanag {
        greenmag_ammo = QAMMO_CLASS(762x51_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_G3_20rnd_762x51_R : 30Rnd_556x45_Stanag {
        greenmag_ammo = QAMMO_CLASS(762x51_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_G3_20rnd_762x51_G : 30Rnd_556x45_Stanag {
        greenmag_ammo = QAMMO_CLASS(762x51_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_G3_20rnd_762x51_Y : 30Rnd_556x45_Stanag {
        greenmag_ammo = QAMMO_CLASS(762x51_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_G3_20rnd_762x51_W : 30Rnd_556x45_Stanag {
        greenmag_ammo = QAMMO_CLASS(762x51_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_G3_20rnd_762x51_RT : UK3CB_G3_20rnd_762x51_R {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class UK3CB_G3_50rnd_762x51_R;
    class UK3CB_G3_50rnd_762x51_RT : UK3CB_G3_50rnd_762x51_R {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };


    class UK3CB_G3_20rnd_762x51_GT : UK3CB_G3_20rnd_762x51_G {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class UK3CB_G3_50rnd_762x51_G;
    class UK3CB_G3_50rnd_762x51_GT : UK3CB_G3_50rnd_762x51_G {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class UK3CB_G3_20rnd_762x51_YT : UK3CB_G3_20rnd_762x51_Y {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class UK3CB_G3_50rnd_762x51_Y;
    class UK3CB_G3_50rnd_762x51_YT : UK3CB_G3_50rnd_762x51_Y {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class UK3CB_G3_20rnd_762x51_WT : UK3CB_G3_20rnd_762x51_Y {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class UK3CB_G3_50rnd_762x51_W;
    class UK3CB_G3_50rnd_762x51_WT : UK3CB_G3_50rnd_762x51_W {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class UK3CB_M14_20rnd_762x51 : 30Rnd_556x45_Stanag {
        greenmag_ammo = QAMMO_CLASS(762x51_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_M14_20rnd_762x51_R;
    class UK3CB_M14_20rnd_762x51_RT : UK3CB_M14_20rnd_762x51_R {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class UK3CB_M14_20rnd_762x51_Y;
    class UK3CB_M14_20rnd_762x51_YT : UK3CB_M14_20rnd_762x51_Y {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class UK3CB_M14_20rnd_762x51_G;
    class UK3CB_M14_20rnd_762x51_GT : UK3CB_M14_20rnd_762x51_G {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class UK3CB_M14_20rnd_762x51_W;
    class UK3CB_M14_20rnd_762x51_WT : UK3CB_M14_20rnd_762x51_W {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class UK3CB_DMR_20rnd_762x51 : 30Rnd_556x45_Stanag {
        greenmag_ammo = QAMMO_CLASS(762x51_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_DMR_20rnd_762x51_R;
    class UK3CB_DMR_20rnd_762x51_RT : UK3CB_DMR_20rnd_762x51_R {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class UK3CB_DMR_20rnd_762x51_Y;
    class UK3CB_DMR_20rnd_762x51_YT : UK3CB_DMR_20rnd_762x51_Y {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class UK3CB_DMR_20rnd_762x51_G;
    class UK3CB_DMR_20rnd_762x51_GT : UK3CB_DMR_20rnd_762x51_G {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class UK3CB_DMR_20rnd_762x51_W;
    class UK3CB_DMR_20rnd_762x51_WT : UK3CB_DMR_20rnd_762x51_W {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class UK3CB_M60_100rnd_762x51 : rhsusf_100Rnd_762x51_m80a1epr {
        greenmag_ammo = QBELT_CLASS(762x51_EP);
        greenmag_basicammo = "greenmag_beltlinked_762x51_basic";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
    };

    class UK3CB_M60_100rnd_762x51_R : rhsusf_100Rnd_762x51_m80a1epr {
        greenmag_ammo = QBELT_CLASS(762x51_EP);
        greenmag_basicammo = "greenmag_beltlinked_762x51_basic";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
    };

    class UK3CB_M60_100rnd_762x51_Y : rhsusf_100Rnd_762x51_m80a1epr {
        greenmag_ammo = QBELT_CLASS(762x51_EP);
        greenmag_basicammo = "greenmag_beltlinked_762x51_basic";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
    };

    class UK3CB_M60_100rnd_762x51_G : rhsusf_100Rnd_762x51_m80a1epr {
        greenmag_ammo = QBELT_CLASS(762x51_EP);
        greenmag_basicammo = "greenmag_beltlinked_762x51_basic";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
    };

    class UK3CB_M60_100rnd_762x51_W : rhsusf_100Rnd_762x51_m80a1epr {
        greenmag_ammo = QBELT_CLASS(762x51_EP);
        greenmag_basicammo = "greenmag_beltlinked_762x51_basic";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
    };

    class UK3CB_M60_100rnd_762x51_RT : UK3CB_M60_100rnd_762x51_R {
        greenmag_ammo = QBELT_CLASS(762x51_Tracer);
    };

    class UK3CB_M60_100rnd_762x51_YT : UK3CB_M60_100rnd_762x51_Y {
        greenmag_ammo = QBELT_CLASS(762x51_Tracer);
    };

    class UK3CB_M60_100rnd_762x51_GT : UK3CB_M60_100rnd_762x51_G {
        greenmag_ammo = QBELT_CLASS(762x51_Tracer);
    };

    class UK3CB_M60_100rnd_762x51_WT : UK3CB_M60_100rnd_762x51_W {
        greenmag_ammo = QBELT_CLASS(762x51_Tracer);
    };

    class UK3CB_MG3_50rnd_762x51 : rhsusf_100Rnd_762x51_m80a1epr {
        greenmag_ammo = QBELT_CLASS(762x51_EP);
        greenmag_basicammo = "greenmag_beltlinked_762x51_basic";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
    };

    class UK3CB_MG3_100rnd_762x51 : rhsusf_100Rnd_762x51_m80a1epr {
        greenmag_ammo = QBELT_CLASS(762x51_EP);
        greenmag_basicammo = "greenmag_beltlinked_762x51_basic";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
    };

    class UK3CB_MG3_250rnd_762x51: rhsusf_100Rnd_762x51_m80a1epr {
        greenmag_ammo = QBELT_CLASS(762x51_EP);
        greenmag_basicammo = "greenmag_beltlinked_762x51_basic";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
    };

    class UK3CB_MG3_50rnd_762x51_R : rhsusf_100Rnd_762x51_m80a1epr {
        greenmag_ammo = QBELT_CLASS(762x51_EP);
        greenmag_basicammo = "greenmag_beltlinked_762x51_basic";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
    };

    class UK3CB_MG3_100rnd_762x51_R : rhsusf_100Rnd_762x51_m80a1epr {
        greenmag_ammo = QBELT_CLASS(762x51_EP);
        greenmag_basicammo = "greenmag_beltlinked_762x51_basic";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
    };

    class UK3CB_MG3_250rnd_762x51_R: rhsusf_100Rnd_762x51_m80a1epr {
        greenmag_ammo = QBELT_CLASS(762x51_EP);
        greenmag_basicammo = "greenmag_beltlinked_762x51_basic";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
    };


    class UK3CB_MG3_50rnd_762x51_Y : rhsusf_100Rnd_762x51_m80a1epr {
        greenmag_ammo = QBELT_CLASS(762x51_EP);
        greenmag_basicammo = "greenmag_beltlinked_762x51_basic";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
    };

    class UK3CB_MG3_100rnd_762x51_Y : rhsusf_100Rnd_762x51_m80a1epr {
        greenmag_ammo = QBELT_CLASS(762x51_EP);
        greenmag_basicammo = "greenmag_beltlinked_762x51_basic";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
    };

    class UK3CB_MG3_250rnd_762x51_Y: rhsusf_100Rnd_762x51_m80a1epr {
        greenmag_ammo = QBELT_CLASS(762x51_EP);
        greenmag_basicammo = "greenmag_beltlinked_762x51_basic";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
    };

    class UK3CB_MG3_50rnd_762x51_G : rhsusf_100Rnd_762x51_m80a1epr {
        greenmag_ammo = QBELT_CLASS(762x51_EP);
        greenmag_basicammo = "greenmag_beltlinked_762x51_basic";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
    };

    class UK3CB_MG3_100rnd_762x51_G : rhsusf_100Rnd_762x51_m80a1epr {
        greenmag_ammo = QBELT_CLASS(762x51_EP);
        greenmag_basicammo = "greenmag_beltlinked_762x51_basic";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
    };

    class UK3CB_MG3_250rnd_762x51_G: rhsusf_100Rnd_762x51_m80a1epr {
        greenmag_ammo = QBELT_CLASS(762x51_EP);
        greenmag_basicammo = "greenmag_beltlinked_762x51_basic";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
    };

    class UK3CB_MG3_50rnd_762x51_W : rhsusf_100Rnd_762x51_m80a1epr {
        greenmag_ammo = QBELT_CLASS(762x51_EP);
        greenmag_basicammo = "greenmag_beltlinked_762x51_basic";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
    };

    class UK3CB_MG3_100rnd_762x51_W : rhsusf_100Rnd_762x51_m80a1epr {
        greenmag_ammo = QBELT_CLASS(762x51_EP);
        greenmag_basicammo = "greenmag_beltlinked_762x51_basic";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
    };

    class UK3CB_MG3_250rnd_762x51_W: rhsusf_100Rnd_762x51_m80a1epr {
        greenmag_ammo = QBELT_CLASS(762x51_EP);
        greenmag_basicammo = "greenmag_beltlinked_762x51_basic";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
    };

    class UK3CB_MG3_50rnd_762x51_RT : UK3CB_MG3_50rnd_762x51_R {
        greenmag_ammo = QBELT_CLASS(762x51_Tracer);
    };

    class UK3CB_MG3_100rnd_762x51_RT : UK3CB_MG3_100rnd_762x51_R {
        greenmag_ammo = QBELT_CLASS(762x51_Tracer);
    };

    class UK3CB_MG3_250rnd_762x51_RT: UK3CB_MG3_250rnd_762x51_R {
        greenmag_ammo = QBELT_CLASS(762x51_Tracer);
    };

    class UK3CB_MG3_50rnd_762x51_YT : UK3CB_MG3_50rnd_762x51_Y {
        greenmag_ammo = QBELT_CLASS(762x51_Tracer);
    };

    class UK3CB_MG3_100rnd_762x51_YT : UK3CB_MG3_100rnd_762x51_Y {
        greenmag_ammo = QBELT_CLASS(762x51_Tracer);
    };

    class UK3CB_MG3_250rnd_762x51_YT: UK3CB_MG3_250rnd_762x51_Y {
        greenmag_ammo = QBELT_CLASS(762x51_Tracer);
    };

    class UK3CB_MG3_50rnd_762x51_GT : UK3CB_MG3_50rnd_762x51_G {
        greenmag_ammo = QBELT_CLASS(762x51_Tracer);
    };

    class UK3CB_MG3_100rnd_762x51_GT : UK3CB_MG3_100rnd_762x51_G {
        greenmag_ammo = QBELT_CLASS(762x51_Tracer);
    };

    class UK3CB_MG3_250rnd_762x51_GT: UK3CB_MG3_250rnd_762x51_G {
        greenmag_ammo = QBELT_CLASS(762x51_Tracer);
    };

    class UK3CB_MG3_50rnd_762x51_WT : UK3CB_MG3_50rnd_762x51_W {
        greenmag_ammo = QBELT_CLASS(762x51_Tracer);
    };

    class UK3CB_MG3_100rnd_762x51_WT : UK3CB_MG3_100rnd_762x51_W {
        greenmag_ammo = QBELT_CLASS(762x51_Tracer);
    };

    class UK3CB_MG3_250rnd_762x51_WT: UK3CB_MG3_250rnd_762x51_W {
        greenmag_ammo = QBELT_CLASS(762x51_Tracer);
    };

    class UK3CB_STGW57_AMT_20Rnd_762x51: UK3CB_STGW57_24rnd_75x55 {
        greenmag_ammo = QAMMO_CLASS(762x51_EP_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class UK3CB_STGW57_AMT_20Rnd_762x51_RT: UK3CB_STGW57_AMT_20Rnd_762x51 {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class UK3CB_STGW57_AMT_20Rnd_762x51_GT: UK3CB_STGW57_AMT_20Rnd_762x51 {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class UK3CB_STGW57_AMT_20Rnd_762x51_YT: UK3CB_STGW57_AMT_20Rnd_762x51 {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class UK3CB_STGW57_AMT_20Rnd_762x51_WT: UK3CB_STGW57_AMT_20Rnd_762x51 {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class UK3CB_UKM_100rnd_762x51: rhsusf_100Rnd_762x51_m80a1epr {
        greenmag_ammo = QBELT_CLASS(762x51_EP);
        greenmag_basicammo = "greenmag_beltlinked_762x51_basic";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
    };

    class UK3CB_UKM_100rnd_762x51_R;
    class UK3CB_UKM_100rnd_762x51_RT: UK3CB_UKM_100rnd_762x51_R {
        greenmag_ammo = QBELT_CLASS(762x51_Tracer);
    };

    class UK3CB_UKM_100rnd_762x51_Y;
    class UK3CB_UKM_100rnd_762x51_YT: UK3CB_UKM_100rnd_762x51_Y {
        greenmag_ammo = QBELT_CLASS(762x51_Tracer);
    };

    class UK3CB_UKM_100rnd_762x51_G;
    class UK3CB_UKM_100rnd_762x51_GT: UK3CB_UKM_100rnd_762x51_G {
        greenmag_ammo = QBELT_CLASS(762x51_Tracer);
    };

    class UK3CB_UKM_100rnd_762x51_W;
    class UK3CB_UKM_100rnd_762x51_WT: UK3CB_UKM_100rnd_762x51_W {
        greenmag_ammo = QBELT_CLASS(762x51_Tracer);
    };

    /////////////
    // 7.62x54 //
    /////////////

    class UK3CB_SVD_10rnd_762x54: rhs_10Rnd_762x54mmR_7N1 {
        greenmag_ammo = QAMMO_CLASS(762x54_Match_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x54_basic_1Rnd";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class UK3CB_SVD_10rnd_762x54_R: rhs_10Rnd_762x54mmR_7N1 {
        greenmag_ammo = QAMMO_CLASS(762x54_Match_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x54_basic_1Rnd";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class UK3CB_SVD_10rnd_762x54_G: rhs_10Rnd_762x54mmR_7N1 {
        greenmag_ammo = QAMMO_CLASS(762x54_Match_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x54_basic_1Rnd";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class UK3CB_SVD_10rnd_762x54_Y: rhs_10Rnd_762x54mmR_7N1 {
        greenmag_ammo = QAMMO_CLASS(762x54_Match_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x54_basic_1Rnd";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class UK3CB_SVD_10rnd_762x54_W: rhs_10Rnd_762x54mmR_7N1 {
        greenmag_ammo = QAMMO_CLASS(762x54_Match_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x54_basic_1Rnd";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class UK3CB_SVD_10rnd_762x54_RT: rhs_10Rnd_762x54mmR_7N1 {
        greenmag_ammo = "greenmag_ammo_762x54_tracer_1Rnd";
        greenmag_basicammo = "greenmag_ammo_762x54_basic_1Rnd";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class UK3CB_SVD_10rnd_762x54_GT: rhs_10Rnd_762x54mmR_7N1 {
        greenmag_ammo = "greenmag_ammo_762x54_tracer_1Rnd";
        greenmag_basicammo = "greenmag_ammo_762x54_basic_1Rnd";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class UK3CB_SVD_10rnd_762x54_YT: rhs_10Rnd_762x54mmR_7N1 {
        greenmag_ammo = "greenmag_ammo_762x54_tracer_1Rnd";
        greenmag_basicammo = "greenmag_ammo_762x54_basic_1Rnd";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class UK3CB_SVD_10rnd_762x54_WT: rhs_10Rnd_762x54mmR_7N1 {
        greenmag_ammo = "greenmag_ammo_762x54_tracer_1Rnd";
        greenmag_basicammo = "greenmag_ammo_762x54_basic_1Rnd";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    ////////////
    // .30-06 //
    ////////////

    class UK3CB_M1903A1_3006_5rnd_Magazine: 30Rnd_556x45_Stanag {
        greenmag_ammo = QAMMO_CLASS(762x63_FMJ_1Rnd);
        greenmag_basicammo = QAMMO_CLASS(762x63_Basic_1Rnd);

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class UK3CB_M1903A1_3006_5rnd_Magazine_R: UK3CB_M1903A1_3006_5rnd_Magazine {
        greenmag_ammo = QAMMO_CLASS(762x63_FMJ_1Rnd);
        greenmag_basicammo = QAMMO_CLASS(762x63_Basic_1Rnd);

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class UK3CB_M1903A1_3006_5rnd_Magazine_G: UK3CB_M1903A1_3006_5rnd_Magazine {
        greenmag_ammo = QAMMO_CLASS(762x63_FMJ_1Rnd);
        greenmag_basicammo = QAMMO_CLASS(762x63_Basic_1Rnd);

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class UK3CB_M1903A1_3006_5rnd_Magazine_Y: UK3CB_M1903A1_3006_5rnd_Magazine {
        greenmag_ammo = QAMMO_CLASS(762x63_FMJ_1Rnd);
        greenmag_basicammo = QAMMO_CLASS(762x63_Basic_1Rnd);

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class UK3CB_M1903A1_3006_5rnd_Magazine_W: UK3CB_M1903A1_3006_5rnd_Magazine {
        greenmag_ammo = QAMMO_CLASS(762x63_FMJ_1Rnd);
        greenmag_basicammo = QAMMO_CLASS(762x63_Basic_1Rnd);

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class UK3CB_M1903A1_3006_5rnd_Magazine_RT: UK3CB_M1903A1_3006_5rnd_Magazine {
        greenmag_ammo = QAMMO_CLASS(762x63_Tracer_1Rnd);
        greenmag_basicammo = QAMMO_CLASS(762x63_Basic_1Rnd);

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class UK3CB_M1903A1_3006_5rnd_Magazine_GT: UK3CB_M1903A1_3006_5rnd_Magazine {
        greenmag_ammo = QAMMO_CLASS(762x63_Tracer_1Rnd);
        greenmag_basicammo = QAMMO_CLASS(762x63_Basic_1Rnd);

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class UK3CB_M1903A1_3006_5rnd_Magazine_YT: UK3CB_M1903A1_3006_5rnd_Magazine {
        greenmag_ammo = QAMMO_CLASS(762x63_Tracer_1Rnd);
        greenmag_basicammo = QAMMO_CLASS(762x63_Basic_1Rnd);

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class UK3CB_M1903A1_3006_5rnd_Magazine_WT: UK3CB_M1903A1_3006_5rnd_Magazine {
        greenmag_ammo = QAMMO_CLASS(762x63_Tracer_1Rnd);
        greenmag_basicammo = QAMMO_CLASS(762x63_Basic_1Rnd);

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

};
