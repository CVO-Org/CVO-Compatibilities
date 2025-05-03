class GVAR(ammo_9x39_match_1rnd): GVAR(ammo_core_1rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "9x39", 1, LLSTRING(ammo_match_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "9x39", LLSTRING(ammo_match_full)]);

    picture = "\z\greenmag\addons\main\data\556mm.paa";

    scope = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.5;
    };
};

class GVAR(ammo_9x39_match_10rnd): GVAR(ammo_core_10rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "9x39", 10, LLSTRING(ammo_match_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "9x39", LLSTRING(ammo_match_full)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_9x39_match_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.0;
    };
};

class GVAR(ammo_9x39_match_20rnd): GVAR(ammo_core_20rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "9x39", 20, LLSTRING(ammo_match_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "9x39", LLSTRING(ammo_match_full)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_9x39_match_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10;
    };
};

class GVAR(ammo_9x39_match_30rnd): GVAR(ammo_core_30rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "9x39", 30, LLSTRING(ammo_match_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "9x39", LLSTRING(ammo_match_full)]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_9x39_match_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.0;
    };
};

class GVAR(ammo_9x39_match_40rnd): GVAR(ammo_core_40rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "9x39", 40, LLSTRING(ammo_match_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "9x39", LLSTRING(ammo_match_full)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_9x39_match_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.0;
    };
};

class GVAR(ammo_9x39_match_50rnd): GVAR(ammo_core_50rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "9x39", 50, LLSTRING(ammo_match_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "9x39", LLSTRING(ammo_match_full)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_9x39_match_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.0;
    };
};

class GVAR(ammo_9x39_match_60rnd): GVAR(ammo_core_60rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "9x39", 60, LLSTRING(ammo_match_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "9x39", LLSTRING(ammo_match_full)]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_9x39_match_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 30.0;
    };
};
