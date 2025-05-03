class GVAR(ammo_762x33_basic_1rnd): GVAR(ammo_core_1rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_in_Name), ".30 Carbine", 1]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_in_Desc), ".30 Carbine"]);

    picture = "\z\greenmag\addons\main\data\762mm.paa";

    scope = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.28;
    };
};

class GVAR(ammo_762x33_basic_10rnd): GVAR(ammo_core_10rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_in_Name), ".30 Carbine", 10]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_in_Desc), ".30 Carbine"]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_762x33_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.8;
    };
};

class GVAR(ammo_762x33_basic_20rnd): GVAR(ammo_core_20rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_in_Name), ".30 Carbine", 20]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_in_Desc), ".30 Carbine"]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_762x33_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.6;
    };
};

class GVAR(ammo_762x33_basic_30rnd): GVAR(ammo_core_30rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_in_Name), ".30 Carbine", 30]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_in_Desc), ".30 Carbine"]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_762x33_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.4;
    };
};

class GVAR(ammo_762x33_basic_40rnd): GVAR(ammo_core_40rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_in_Name), ".30 Carbine", 40]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_in_Desc), ".30 Carbine"]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_762x33_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.2;
    };
};

class GVAR(ammo_762x33_basic_50rnd): GVAR(ammo_core_50rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_in_Name), ".30 Carbine", 50]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_in_Desc), ".30 Carbine"]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_762x33_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.0;
    };
};

class GVAR(ammo_762x33_basic_60rnd): GVAR(ammo_core_60rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_in_Name), ".30 Carbine", 60]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_in_Desc), ".30 Carbine"]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_762x33_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.8;
    };
};
