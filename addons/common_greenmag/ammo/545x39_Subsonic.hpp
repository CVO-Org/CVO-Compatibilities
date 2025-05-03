class GVAR(ammo_545x39_subsonic_1rnd): GVAR(ammo_core_1rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "5.45x39", 1, LLSTRING(ammo_subsonic_Short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "5.45x39", LLSTRING(ammo_subsonic_Full)]);

    picture = "\z\greenmag\addons\main\data\556mm.paa";

    scope = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.24;
    };
};

class GVAR(ammo_545x39_subsonic_10rnd): GVAR(ammo_core_10rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "5.45x39", 10, LLSTRING(ammo_subsonic_Short)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_545x39_subsonic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.2;
    };
};

class GVAR(ammo_545x39_subsonic_20rnd): GVAR(ammo_core_20rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "5.45x39", 20, LLSTRING(ammo_subsonic_Short)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_545x39_subsonic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.2;
    };
};

class GVAR(ammo_545x39_subsonic_30rnd): GVAR(ammo_core_30rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "5.45x39", 30, LLSTRING(ammo_subsonic_Short)]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_545x39_subsonic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.2;
    };
};

class GVAR(ammo_545x39_subsonic_40rnd): GVAR(ammo_core_40rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "5.45x39", 40, LLSTRING(ammo_subsonic_Short)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_545x39_subsonic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.2;
    };
};

class GVAR(ammo_545x39_subsonic_50rnd): GVAR(ammo_core_50rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "5.45x39", 50, LLSTRING(ammo_subsonic_Short)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_545x39_subsonic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.2;
    };
};

class GVAR(ammo_545x39_subsonic_60rnd): GVAR(ammo_core_60rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "5.45x39", 60, LLSTRING(ammo_subsonic_Short)]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_545x39_subsonic_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.4;
    };
};
