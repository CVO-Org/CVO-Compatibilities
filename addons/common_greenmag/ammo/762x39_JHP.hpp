class GVAR(ammo_762x39_jhp_1rnd): GVAR(ammo_core_1rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.62x39", 1, LLSTRING(ammo_jhp_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "7.62x39", LLSTRING(ammo_jhp_full)]);

    picture = "\z\greenmag\addons\main\data\556mm.paa";

    scope = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.35;
    };
};

class GVAR(ammo_762x39_jhp_10rnd): GVAR(ammo_core_10rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.62x39", 10, LLSTRING(ammo_jhp_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "7.62x39", LLSTRING(ammo_jhp_full)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_762x39_jhp_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.5;
    };
};

class GVAR(ammo_762x39_jhp_20rnd): GVAR(ammo_core_20rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.62x39", 20, LLSTRING(ammo_jhp_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "7.62x39", LLSTRING(ammo_jhp_full)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_762x39_jhp_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.0;
    };
};

class GVAR(ammo_762x39_jhp_30rnd): GVAR(ammo_core_30rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.62x39", 30, LLSTRING(ammo_jhp_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "7.62x39", LLSTRING(ammo_jhp_full)]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_762x39_jhp_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.5;
    };
};

class GVAR(ammo_762x39_jhp_40rnd): GVAR(ammo_core_40rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.62x39", 40, LLSTRING(ammo_jhp_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "7.62x39", LLSTRING(ammo_jhp_full)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_762x39_jhp_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.0;
    };
};

class GVAR(ammo_762x39_jhp_50rnd): GVAR(ammo_core_50rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.62x39", 50, LLSTRING(ammo_jhp_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "7.62x39", LLSTRING(ammo_jhp_full)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_762x39_jhp_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.5;
    };
};

class GVAR(ammo_762x39_jhp_60rnd): GVAR(ammo_core_60rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.62x39", 60, LLSTRING(ammo_jhp_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "7.62x39", LLSTRING(ammo_jhp_full)]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_762x39_jhp_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21;
    };
};
