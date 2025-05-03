class GVAR(ammo_93x62_basic_1rnd): GVAR(ammo_core_1rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), "9.3x62", 1]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_mm_Desc), "9.3x62"]);
    
    picture = "\z\greenmag\addons\main\data\762mm.paa";

    scope = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.22;
    };
};

class GVAR(ammo_93x62_basic_10rnd): GVAR(ammo_core_10rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), "9.3x62", 10]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_mm_Desc), "9.3x62"]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_93x62_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.2;
    };
};

class GVAR(ammo_93x62_basic_20rnd): GVAR(ammo_core_20rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), "9.3x62", 20]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_mm_Desc), "9.3x62"]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_93x62_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.4;
    };
};

class GVAR(ammo_93x62_basic_30rnd): GVAR(ammo_core_30rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), "9.3x62", 30]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_mm_Desc), "9.3x62"]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_93x62_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.6;
    };
};

class GVAR(ammo_93x62_basic_40rnd): GVAR(ammo_core_40rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), "9.3x62", 40]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_mm_Desc), "9.3x62"]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_93x62_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.8;
    };
};

class GVAR(ammo_93x62_basic_50rnd): GVAR(ammo_core_50rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), "9.3x62", 50]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_mm_Desc), "9.3x62"]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_93x62_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.0;
    };
};

class GVAR(ammo_93x62_basic_60rnd): GVAR(ammo_core_60rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), "9.3x62", 60]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_mm_Desc), "9.3x62"]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_93x62_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.2;
    };
};
