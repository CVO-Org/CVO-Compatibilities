class GVAR(ammo_56x15_subsonic_1rnd): GVAR(ammo_core_1rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), ".22 LR", 1, LLSTRING(ammo_subsonic_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), ".22 LR", LLSTRING(ammo_subsonic_full)]);

    picture = "\z\greenmag\addons\main\data\556mm.paa";

    scope = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.24;
    };
};

class GVAR(ammo_56x15_subsonic_10rnd): GVAR(ammo_core_10rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), ".22 LR", 10, LLSTRING(ammo_subsonic_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), ".22 LR", LLSTRING(ammo_subsonic_full)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_56x15_subsonic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.4;
    };
};

class GVAR(ammo_56x15_subsonic_20rnd): GVAR(ammo_core_20rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), ".22 LR", 20, LLSTRING(ammo_subsonic_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), ".22 LR", LLSTRING(ammo_subsonic_full)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_56x15_subsonic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.8;
    };
};

class GVAR(ammo_56x15_subsonic_30rnd): GVAR(ammo_core_30rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), ".22 LR", 30, LLSTRING(ammo_subsonic_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), ".22 LR", LLSTRING(ammo_subsonic_full)]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_56x15_subsonic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.2;
    };
};

class GVAR(ammo_56x15_subsonic_40rnd): GVAR(ammo_core_40rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), ".22 LR", 40, LLSTRING(ammo_subsonic_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), ".22 LR", LLSTRING(ammo_subsonic_full)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_56x15_subsonic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.6;
    };
};

class GVAR(ammo_56x15_subsonic_50rnd): GVAR(ammo_core_50rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), ".22 LR", 50, LLSTRING(ammo_subsonic_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), ".22 LR", LLSTRING(ammo_subsonic_full)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_56x15_subsonic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.0;
    };
};

class GVAR(ammo_56x15_subsonic_60rnd): GVAR(ammo_core_60rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), ".22 LR", 60, LLSTRING(ammo_subsonic_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), ".22 LR", LLSTRING(ammo_subsonic_full)]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_56x15_subsonic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.4;
    };
};
