class CfgMagazines {
    class CA_Magazine;

    //////////
    // 8x22 //
    //////////
    class rhs_mag_6x8mm_mhp: CA_Magazine {
        greenmag_ammo = QAMMO_CLASS(8x22_Basic_1Rnd);
        greenmag_basicammo = QAMMO_CLASS(8x22_Basic_1Rnd);

        greenmag_needBelt = 0;
        greenmag_canSpeedload = 0;
    };

    /////////////
    // 5.56x45 //
    /////////////

    class rhsgref_30rnd_556x45_m21: CA_Magazine {
        greenmag_ammo = QAMMO_CLASS(556x45_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_556x45_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class rhsgref_30rnd_556x45_m21_t: rhsgref_30rnd_556x45_m21 {
        greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
    };

    class rhsgref_30rnd_556x45_vhs2: CA_Magazine {
        greenmag_ammo = QAMMO_CLASS(556x45_EP_1Rnd);
    };

    class rhsgref_30rnd_556x45_vhs2_t: rhsgref_30rnd_556x45_vhs2 {
        greenmag_ammo = QAMMO_CLASS(556x45_Tracer_1Rnd);
    };


    /////////////
    // 7.62x25 //
    /////////////

    class rhs_mag_762x25_8: CA_Magazine {
        greenmag_ammo = QAMMO_CLASS(762x25_Basic_1Rnd);
        greenmag_basicammo = QAMMO_CLASS(762x25_Basic_1Rnd);

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };


    /////////////
    // 7.62x39 //
    /////////////

    class rhs_30Rnd_762x39mm;
    class rhs_30Rnd_762x39mm_Savz58: rhs_30Rnd_762x39mm {
        greenmag_ammo = QAMMO_CLASS(762x39_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class rhs_30Rnd_762x39mm_tracer;
    class rhs_30Rnd_762x39mm_Savz58_tracer: rhs_30Rnd_762x39mm_tracer {
        greenmag_ammo = QAMMO_CLASS(762x39_Tracer_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x39_tracer_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    /////////////
    // 7.62x51 //
    /////////////

    class rhs_mag_20Rnd_762x51_m80_fnfal: CA_Magazine {
        greenmag_ammo = QAMMO_CLASS(762x51_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x51_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class rhs_mag_30Rnd_762x51_m80_fnfal: rhs_mag_20Rnd_762x51_m80_fnfal {
        greenmag_ammo = QAMMO_CLASS(762x51_FMJ_1Rnd);
    };


    class rhs_mag_20Rnd_762x51_m80a1_fnfal: rhs_mag_20Rnd_762x51_m80_fnfal {
        greenmag_ammo = QAMMO_CLASS(762x51_EP_1Rnd);
    };

    class rhs_mag_30Rnd_762x51_m80a1_fnfal: rhs_mag_30Rnd_762x51_m80_fnfal {
        greenmag_ammo = QAMMO_CLASS(762x51_EP_1Rnd);
    };


    class rhs_mag_20Rnd_762x51_m62_fnfal: rhs_mag_20Rnd_762x51_m80_fnfal {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };

    class rhs_mag_30Rnd_762x51_m62_fnfal: rhs_mag_30Rnd_762x51_m80_fnfal {
        greenmag_ammo = QAMMO_CLASS(762x51_Tracer_1Rnd);
    };


    class rhs_mag_20Rnd_762x51_m61_fnfal: rhs_mag_20Rnd_762x51_m80_fnfal {
        greenmag_ammo = QAMMO_CLASS(762x51_AP_1Rnd);
    };

    class rhs_mag_30Rnd_762x51_m61_fnfal: rhs_mag_30Rnd_762x51_m80_fnfal {
        greenmag_ammo = QAMMO_CLASS(762x51_AP_1Rnd);
    };


    /////////////
    // 7.62x54 //
    /////////////

    class rhsgref_5Rnd_762x54_m38: CA_Magazine {
        greenmag_ammo = QAMMO_CLASS(762x54_FMJ_1Rnd);
        greenmag_basicammo = "greenmag_ammo_762x54_basic_1Rnd";

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    ////////////
    // .30-06 //
    ////////////

    class rhsgref_8Rnd_762x63_M2B_M1rifle: CA_Magazine {
        greenmag_ammo = QAMMO_CLASS(762x63_AP_1Rnd);
        greenmag_basicammo = QAMMO_CLASS(762x63_Basic_1Rnd);

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle: rhsgref_8Rnd_762x63_M2B_M1rifle {
        greenmag_ammo = QAMMO_CLASS(762x63_FMJ_1Rnd);
    };


    /////////////
    // .32 ACP //
    /////////////

    class rhsgref_20rnd_765x17_vz61: CA_Magazine {
        greenmag_ammo = QAMMO_CLASS(765x17_Basic_1Rnd);
        greenmag_basicammo = QAMMO_CLASS(765x17_Basic_1Rnd);

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };


    /////////////
    // 7.92x33 //
    /////////////

    class rhsgref_25Rnd_792x33_SmE_StG: CA_Magazine {
        greenmag_ammo = QAMMO_CLASS(792x33_Basic_1Rnd);
        greenmag_basicammo = QAMMO_CLASS(792x33_Basic_1Rnd);

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class rhsgref_30Rnd_792x33_SmE_StG: CA_Magazine {
        greenmag_ammo = QAMMO_CLASS(792x33_Basic_1Rnd);
        greenmag_basicammo = QAMMO_CLASS(792x33_Basic_1Rnd);

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    /////////////
    // 7.92x57 //
    /////////////

    class rhsgref_5Rnd_792x57_kar98k: CA_Magazine {
        greenmag_ammo = QAMMO_CLASS(792x57_FMJ_1Rnd);
        greenmag_basicammo = QAMMO_CLASS(792x57_Basic_1Rnd);

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class rhsgref_10Rnd_792x57_m76: CA_Magazine {
        greenmag_ammo = QAMMO_CLASS(792x57_FMJ_1Rnd);
        greenmag_basicammo = QAMMO_CLASS(792x57_FMJ_1Rnd);

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 0;
    };

    class rhsgref_50Rnd_792x57_SmE_drum: CA_Magazine {
        greenmag_ammo = QBELT_CLASS(792x57_FMJ);
        greenmag_basicammo = QBELT_CLASS(792x57_Basic);

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
    };

    class rhsgref_50Rnd_792x57_SmK_drum: rhsgref_50Rnd_792x57_SmE_drum {
        greenmag_ammo = QBELT_CLASS(792x57_AP);
    };

    class rhsgref_296Rnd_792x57_SmE_belt: CA_Magazine {
        greenmag_ammo = QBELT_CLASS(792x57_FMJ);
        greenmag_basicammo = QBELT_CLASS(792x57_Basic);

        greenmag_canSpeedload = 0;
        greenmag_needBelt = 1;
    };

    class rhsgref_296Rnd_792x57_SmK_belt: rhsgref_296Rnd_792x57_SmE_belt {
        greenmag_ammo = QBELT_CLASS(792x57_AP);
    };


    /////////////
    // .45 ACP //
    /////////////

    class rhsgref_30rnd_1143x23_M1911B_SMG: CA_Magazine {
        greenmag_ammo = "greenmag_ammo_45ACP_basic_1Rnd";
        greenmag_basicammo = "greenmag_ammo_45ACP_basic_1Rnd";

        greenmag_canSpeedload = 1;
        greenmag_needBelt = 0;
    };

    class rhsgref_30rnd_1143x23_M1T_SMG: rhsgref_30rnd_1143x23_M1911B_SMG {
        greenmag_ammo = "greenmag_ammo_45ACP_tracer_1Rnd"
    };

};
