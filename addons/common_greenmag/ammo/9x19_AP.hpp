class GVAR(ammo_9x19_AP_1rnd): GVAR(ammo_core_1rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "9x19", 1, LLSTRING(ammo_AP_Short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "9x19", LLSTRING(ammo_AP_Full)]);

    picture = "\z\greenmag\addons\main\data\9mm.paa";

    scope = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.17;
    };
};

class GVAR(ammo_9x19_AP_10rnd): GVAR(ammo_core_10rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "9x19", 10, LLSTRING(ammo_AP_Short)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_9x19_AP_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.7;
    };
};

class GVAR(ammo_9x19_AP_20rnd): GVAR(ammo_core_20rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "9x19", 20, LLSTRING(ammo_AP_Short)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_9x19_AP_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.4;
    };
};

class GVAR(ammo_9x19_AP_30rnd): GVAR(ammo_core_30rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "9x19", 30, LLSTRING(ammo_AP_Short)]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_9x19_AP_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.1;
    };
};

class GVAR(ammo_9x19_AP_40rnd): GVAR(ammo_core_40rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "9x19", 40, LLSTRING(ammo_AP_Short)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_9x19_AP_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.8;
    };
};

class GVAR(ammo_9x19_AP_50rnd): GVAR(ammo_core_50rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "9x19", 50, LLSTRING(ammo_AP_Short)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_9x19_AP_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.5;
    };
};

class GVAR(ammo_9x19_AP_60rnd): GVAR(ammo_core_60rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "9x19", 60, LLSTRING(ammo_AP_Short)]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_9x19_AP_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.2;
    };
};
