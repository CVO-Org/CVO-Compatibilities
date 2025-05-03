class GVAR(ammo_762x51_EP_1rnd): GVAR(ammo_core_1rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.62x51", 1, LLSTRING(ammo_EP_Short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "7.62x51", LLSTRING(ammo_EP_Full)]);
    
    picture = "\z\greenmag\addons\main\data\762mm.paa";

    scope = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.22;
    };
};

class GVAR(ammo_762x51_EP_10rnd): GVAR(ammo_core_10rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.62x51", 10, LLSTRING(ammo_EP_Short)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_762x51_EP_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.2;
    };
};

class GVAR(ammo_762x51_EP_20rnd): GVAR(ammo_core_20rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.62x51", 20, LLSTRING(ammo_EP_Short)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_762x51_EP_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.4;
    };
};

class GVAR(ammo_762x51_EP_30rnd): GVAR(ammo_core_30rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.62x51", 30, LLSTRING(ammo_EP_Short)]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_762x51_EP_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.6;
    };
};

class GVAR(ammo_762x51_EP_40rnd): GVAR(ammo_core_40rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.62x51", 40, LLSTRING(ammo_EP_Short)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_762x51_EP_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.8;
    };
};

class GVAR(ammo_762x51_EP_50rnd): GVAR(ammo_core_50rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.62x51", 50, LLSTRING(ammo_EP_Short)]);

    scope = 2;

    greenmag_ammotype = QGVAR(ammo_762x51_EP_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.0;
    };
};

class GVAR(ammo_762x51_EP_60rnd): GVAR(ammo_core_60rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.62x51", 60, LLSTRING(ammo_EP_Short)]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;

    greenmag_ammotype = QGVAR(ammo_762x51_EP_1rnd);

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.2;
    };
};
