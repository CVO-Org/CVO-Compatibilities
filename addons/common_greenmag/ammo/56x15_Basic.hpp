class GVAR(ammo_56x15_basic_1rnd): GVAR(ammo_core_1rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), ".22 LR", 1]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_mm_Desc), ".22 LR"]);
    
    picture = "\z\greenmag\addons\main\data\9mm.paa";

    scope = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.2;
    };
};

class GVAR(ammo_56x15_basic_10rnd): GVAR(ammo_core_10rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), ".22 LR", 10]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_mm_Desc), ".22 LR"]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_56x15_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.0;
    };
};

class GVAR(ammo_56x15_basic_20rnd): GVAR(ammo_core_20rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), ".22 LR", 20]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_mm_Desc), ".22 LR"]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_56x15_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.0;
    };
};

class GVAR(ammo_56x15_basic_30rnd): GVAR(ammo_core_30rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), ".22 LR", 30]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_mm_Desc), ".22 LR"]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_56x15_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.0;
    };
};

class GVAR(ammo_56x15_basic_40rnd): GVAR(ammo_core_40rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), ".22 LR", 40]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_mm_Desc), ".22 LR"]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_56x15_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.0;
    };
};

class GVAR(ammo_56x15_basic_50rnd): GVAR(ammo_core_50rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), ".22 LR", 50]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_mm_Desc), ".22 LR"]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_56x15_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.0;
    };
};

class GVAR(ammo_56x15_basic_60rnd): GVAR(ammo_core_60rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_basic_mm_Name), ".22 LR", 60]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_basic_mm_Desc), ".22 LR"]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_56x15_basic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.0;
    };
};
