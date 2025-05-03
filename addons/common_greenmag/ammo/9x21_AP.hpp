class GVAR(ammo_9x21_ap_1rnd): GVAR(ammo_core_1rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "9x21", 1, LLSTRING(ammo_ap_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "9x21", LLSTRING(ammo_ap_full)]);

    picture = "\z\greenmag\addons\main\data\9mm.paa";

    scope = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.24;
    };
};

class GVAR(ammo_9x21_ap_10rnd): GVAR(ammo_core_10rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "9x21", 10, LLSTRING(ammo_ap_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "9x21", LLSTRING(ammo_ap_full)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_9x21_ap_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.4;
    };
};

class GVAR(ammo_9x21_ap_20rnd): GVAR(ammo_core_20rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "9x21", 20, LLSTRING(ammo_ap_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "9x21", LLSTRING(ammo_ap_full)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_9x21_ap_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.8;
    };
};

class GVAR(ammo_9x21_ap_30rnd): GVAR(ammo_core_30rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "9x21", 30, LLSTRING(ammo_ap_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "9x21", LLSTRING(ammo_ap_full)]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_9x21_ap_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.2;
    };
};

class GVAR(ammo_9x21_ap_40rnd): GVAR(ammo_core_40rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "9x21", 40, LLSTRING(ammo_ap_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "9x21", LLSTRING(ammo_ap_full)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_9x21_ap_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.6;
    };
};

class GVAR(ammo_9x21_ap_50rnd): GVAR(ammo_core_50rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "9x21", 50, LLSTRING(ammo_ap_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "9x21", LLSTRING(ammo_ap_full)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_9x21_ap_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.0;
    };
};

class GVAR(ammo_9x21_ap_60rnd): GVAR(ammo_core_60rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "9x21", 60, LLSTRING(ammo_ap_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "9x21", LLSTRING(ammo_ap_full)]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_9x21_ap_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.4;
    };
};
