class GVAR(ammo_127x99_AP_1rnd): GVAR(ammo_core_1rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "12.7x99", 1, LLSTRING(ammo_AP_Short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "12.7x99", LLSTRING(ammo_AP_Full)]);

    picture = "\z\greenmag\addons\main\data\127mm.paa";

    scope = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.5;
    };
};

class GVAR(ammo_127x99_AP_10rnd): GVAR(ammo_core_10rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "12.7x99", 10, LLSTRING(ammo_AP_Short)]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_127x99_AP_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.1;
    };
};

class GVAR(ammo_127x99_AP_20rnd): GVAR(ammo_core_20rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "12.7x99", 20, LLSTRING(ammo_AP_Short)]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_127x99_AP_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 50.2;
    };
};

class GVAR(ammo_127x99_AP_30rnd): GVAR(ammo_core_30rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "12.7x99", 30, LLSTRING(ammo_AP_Short)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_127x99_AP_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 75.5;
    };
};

class GVAR(ammo_127x99_AP_40rnd): GVAR(ammo_core_40rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "12.7x99", 40, LLSTRING(ammo_AP_Short)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_127x99_AP_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 100.7;
    };
};

class GVAR(ammo_127x99_AP_50rnd): GVAR(ammo_core_50rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "12.7x99", 50, LLSTRING(ammo_AP_Short)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_127x99_AP_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 125.9;
    };
};

class GVAR(ammo_127x99_AP_60rnd): GVAR(ammo_core_60rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "12.7x99", 60, LLSTRING(ammo_AP_Short)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_127x99_AP_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 151.0;
    };
};
