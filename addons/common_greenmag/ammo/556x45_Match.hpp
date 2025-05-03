class GVAR(ammo_556x45_match_1rnd): GVAR(ammo_core_1rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "5.56x45", 1, LLSTRING(ammo_match_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "5.56x45", LLSTRING(ammo_match_full)]);

    picture = "\z\greenmag\addons\main\data\556mm.paa";

    scope = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.22;
    };
};

class GVAR(ammo_556x45_match_10rnd): GVAR(ammo_core_10rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "5.56x45", 10, LLSTRING(ammo_match_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "5.56x45", LLSTRING(ammo_match_full)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_556x45_match_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.2;
    };
};

class GVAR(ammo_556x45_match_20rnd): GVAR(ammo_core_20rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "5.56x45", 20, LLSTRING(ammo_match_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "5.56x45", LLSTRING(ammo_match_full)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_556x45_match_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.4;
    };
};

class GVAR(ammo_556x45_match_30rnd): GVAR(ammo_core_30rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "5.56x45", 30, LLSTRING(ammo_match_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "5.56x45", LLSTRING(ammo_match_full)]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_556x45_match_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.6;
    };
};

class GVAR(ammo_556x45_match_40rnd): GVAR(ammo_core_40rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "5.56x45", 40, LLSTRING(ammo_match_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "5.56x45", LLSTRING(ammo_match_full)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_556x45_match_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.8;
    };
};

class GVAR(ammo_556x45_match_50rnd): GVAR(ammo_core_50rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "5.56x45", 50, LLSTRING(ammo_match_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "5.56x45", LLSTRING(ammo_match_full)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_556x45_match_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.0;
    };
};

class GVAR(ammo_556x45_match_60rnd): GVAR(ammo_core_60rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "5.56x45", 60, LLSTRING(ammo_match_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "5.56x45", LLSTRING(ammo_match_full)]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_556x45_match_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.2;
    };
};
