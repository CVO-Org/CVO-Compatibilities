class GVAR(ammo_765x17_fmj_1rnd): GVAR(ammo_core_1rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_in_Name), ".32 ACP", 1, LLSTRING(ammo_fmj_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_in_Desc), ".32 ACP", LLSTRING(ammo_fmj_full)]);
    
    picture = "\z\greenmag\addons\main\data\762mm.paa";

    scope = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.22;
    };
};

class GVAR(ammo_765x17_fmj_10rnd): GVAR(ammo_core_10rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_in_Name), ".32 ACP", 10, LLSTRING(ammo_fmj_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_in_Desc), ".32 ACP", LLSTRING(ammo_fmj_full)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_765x17_fmj_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.2;
    };
};

class GVAR(ammo_765x17_fmj_20rnd): GVAR(ammo_core_20rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_in_Name), ".32 ACP", 20, LLSTRING(ammo_fmj_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_in_Desc), ".32 ACP", LLSTRING(ammo_fmj_full)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_765x17_fmj_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.4;
    };
};

class GVAR(ammo_765x17_fmj_30rnd): GVAR(ammo_core_30rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_in_Name), ".32 ACP", 30, LLSTRING(ammo_fmj_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_in_Desc), ".32 ACP", LLSTRING(ammo_fmj_full)]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_765x17_fmj_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.6;
    };
};

class GVAR(ammo_765x17_fmj_40rnd): GVAR(ammo_core_40rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_in_Name), ".32 ACP", 40, LLSTRING(ammo_fmj_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_in_Desc), ".32 ACP", LLSTRING(ammo_fmj_full)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_765x17_fmj_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.8;
    };
};

class GVAR(ammo_765x17_fmj_50rnd): GVAR(ammo_core_50rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_in_Name), ".32 ACP", 50, LLSTRING(ammo_fmj_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_in_Desc), ".32 ACP", LLSTRING(ammo_fmj_full)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_765x17_fmj_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.0;
    };
};

class GVAR(ammo_765x17_fmj_60rnd): GVAR(ammo_core_60rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_in_Name), ".32 ACP", 60, LLSTRING(ammo_fmj_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_in_Desc), ".32 ACP", LLSTRING(ammo_fmj_full)]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_765x17_fmj_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.2;
    };
};
