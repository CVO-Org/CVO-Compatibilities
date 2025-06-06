class GVAR(ammo_9x18_basic_1rnd): GVAR(ammo_core_1rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), "9x18", 1]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_mm_Desc), "9x18"]);

    picture = "\z\greenmag\addons\main\data\9mm.paa";

    scope = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.22;
    };
};

class GVAR(ammo_9x18_basic_10rnd): GVAR(ammo_core_10rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), "9x18", 10]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_mm_Desc), "9x18"]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_9x18_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.2;
    };
};

class GVAR(ammo_9x18_basic_20rnd): GVAR(ammo_core_20rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), "9x18", 20]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_mm_Desc), "9x18"]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_9x18_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.4;
    };
};

class GVAR(ammo_9x18_basic_30rnd): GVAR(ammo_core_30rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), "9x18", 30]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_mm_Desc), "9x18"]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_9x18_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.6;
    };
};

class GVAR(ammo_9x18_basic_40rnd): GVAR(ammo_core_40rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), "9x18", 40]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_mm_Desc), "9x18"]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_9x18_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.8;
    };
};

class GVAR(ammo_9x18_basic_50rnd): GVAR(ammo_core_50rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), "9x18", 50]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_mm_Desc), "9x18"]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_9x18_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.0;
    };
};

class GVAR(ammo_9x18_basic_60rnd): GVAR(ammo_core_60rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), "9x18", 60]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_mm_Desc), "9x18"]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_9x18_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.2;
    };
};
