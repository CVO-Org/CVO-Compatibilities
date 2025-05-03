class GVAR(ammo_75x55_FMJ_1rnd): GVAR(ammo_core_1rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.5x55", 1, LLSTRING(ammo_FMJ_Short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "7.5x55", LLSTRING(ammo_FMJ_Full)]);
    
    picture = "\z\greenmag\addons\main\data\556mm.paa";

    scope = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.2;
    };
};

class GVAR(ammo_75x55_FMJ_10rnd): GVAR(ammo_core_10rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.5x55", 10, LLSTRING(ammo_FMJ_Short)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_75x55_FMJ_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.0;
    };
};

class GVAR(ammo_75x55_FMJ_20rnd): GVAR(ammo_core_20rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.5x55", 20, LLSTRING(ammo_FMJ_Short)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_75x55_FMJ_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.0;
    };
};

class GVAR(ammo_75x55_FMJ_30rnd): GVAR(ammo_core_30rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.5x55", 30, LLSTRING(ammo_FMJ_Short)]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_75x55_FMJ_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.0;
    };
};

class GVAR(ammo_75x55_FMJ_40rnd): GVAR(ammo_core_40rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.5x55", 40, LLSTRING(ammo_FMJ_Short)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_75x55_FMJ_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.0;
    };
};

class GVAR(ammo_75x55_FMJ_50rnd): GVAR(ammo_core_50rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.5x55", 50, LLSTRING(ammo_FMJ_Short)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_75x55_FMJ_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.0;
    };
};

class GVAR(ammo_75x55_FMJ_60rnd): GVAR(ammo_core_60rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.5x55", 60, LLSTRING(ammo_FMJ_Short)]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_75x55_FMJ_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.0;
    };
};
