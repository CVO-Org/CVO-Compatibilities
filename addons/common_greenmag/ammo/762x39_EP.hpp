class GVAR(ammo_762x39_ep_1rnd): GVAR(ammo_core_1rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.62x39", 1, LLSTRING(ammo_ep_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "7.62x39", LLSTRING(ammo_ep_full)]);

    picture = "\z\greenmag\addons\main\data\556mm.paa";

    scope = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.35;
    };
};

class GVAR(ammo_762x39_ep_10rnd): GVAR(ammo_core_10rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.62x39", 10, LLSTRING(ammo_ep_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "7.62x39", LLSTRING(ammo_ep_full)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_762x39_ep_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.5;
    };
};

class GVAR(ammo_762x39_ep_20rnd): GVAR(ammo_core_20rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.62x39", 20, LLSTRING(ammo_ep_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "7.62x39", LLSTRING(ammo_ep_full)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_762x39_ep_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.0;
    };
};

class GVAR(ammo_762x39_ep_30rnd): GVAR(ammo_core_30rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.62x39", 30, LLSTRING(ammo_ep_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "7.62x39", LLSTRING(ammo_ep_full)]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_762x39_ep_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.5;
    };
};

class GVAR(ammo_762x39_ep_40rnd): GVAR(ammo_core_40rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.62x39", 40, LLSTRING(ammo_ep_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "7.62x39", LLSTRING(ammo_ep_full)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_762x39_ep_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.0;
    };
};

class GVAR(ammo_762x39_ep_50rnd): GVAR(ammo_core_50rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.62x39", 50, LLSTRING(ammo_ep_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "7.62x39", LLSTRING(ammo_ep_full)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_762x39_ep_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.5;
    };
};

class GVAR(ammo_762x39_ep_60rnd): GVAR(ammo_core_60rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.62x39", 60, LLSTRING(ammo_ep_short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "7.62x39", LLSTRING(ammo_ep_full)]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_762x39_ep_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21;
    };
};
