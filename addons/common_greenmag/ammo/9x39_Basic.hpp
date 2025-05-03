class GVAR(ammo_9x39_basic_1rnd): GVAR(ammo_core_1rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), "9x39", 1]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_mm_Desc), "9x39"]);

    picture = "\z\greenmag\addons\main\data\556mm.paa";

    scope = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.49;
    };
};

class GVAR(ammo_9x39_basic_10rnd): GVAR(ammo_core_10rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), "9x39", 10]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_9x39_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.9;
    };
};

class GVAR(ammo_9x39_basic_20rnd): GVAR(ammo_core_20rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), "9x39", 20]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_9x39_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.8;
    };
};

class GVAR(ammo_9x39_basic_30rnd): GVAR(ammo_core_30rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), "9x39", 30]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_9x39_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.7;
    };
};

class GVAR(ammo_9x39_basic_40rnd): GVAR(ammo_core_40rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), "9x39", 40]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_9x39_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.6;
    };
};

class GVAR(ammo_9x39_basic_50rnd): GVAR(ammo_core_50rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), "9x39", 50]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_9x39_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.5;
    };
};

class GVAR(ammo_9x39_basic_60rnd): GVAR(ammo_core_60rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), "9x39", 60]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_9x39_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.4;
    };
};
