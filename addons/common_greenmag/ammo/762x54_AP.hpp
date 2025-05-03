class GVAR(ammo_762x54_AP_1rnd): GVAR(ammo_core_1rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.62x54", 1, LLSTRING(ammo_AP_Short)]);
    descriptionShort = __EVAL(format [LLSTRING(ammo_Complex_mm_Desc), "7.62x54", LLSTRING(ammo_AP_Full)]);
    
    picture = "\z\greenmag\addons\main\data\762mm.paa";

    scope = 2;
    
    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.48;
    };
};

class GVAR(ammo_762x54_AP_10rnd): GVAR(ammo_core_10rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.62x54", 10, LLSTRING(ammo_AP_Short)]);

    scope = 2;
    
    greenmag_ammotype = QGVAR(ammo_762x54_AP_1rnd);
    
    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.8;
    };
};

class GVAR(ammo_762x54_AP_20rnd): GVAR(ammo_core_20rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.62x54", 20, LLSTRING(ammo_AP_Short)]);

    scope = 2;
    
    greenmag_ammotype = QGVAR(ammo_762x54_AP_1rnd);
    
    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.6;
    };
};

class GVAR(ammo_762x54_AP_30rnd): GVAR(ammo_core_30rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.62x54", 30, LLSTRING(ammo_AP_Short)]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;
    
    greenmag_ammotype = QGVAR(ammo_762x54_AP_1rnd);
    
    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.4;
    };
};

class GVAR(ammo_762x54_AP_40rnd): GVAR(ammo_core_40rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.62x54", 40, LLSTRING(ammo_AP_Short)]);

    scope = 2;
    
    greenmag_ammotype = QGVAR(ammo_762x54_AP_1rnd);
    
    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.2;
    };
};

class GVAR(ammo_762x54_AP_50rnd): GVAR(ammo_core_50rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.62x54", 50, LLSTRING(ammo_AP_Short)]);

    scope = 2;
    
    greenmag_ammotype = QGVAR(ammo_762x54_AP_1rnd);
    
    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.0;
    };
};

class GVAR(ammo_762x54_AP_60rnd): GVAR(ammo_core_60rnd) {
    displayName = __EVAL(format [LLSTRING(ammo_Complex_mm_Name), "7.62x54", 60, LLSTRING(ammo_AP_Short)]);

    scope = 2;
    scopeArsenal=2;
    scopeCurator=2;
    
    greenmag_ammotype = QGVAR(ammo_762x54_AP_1rnd);
    
    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.8;
    };
};
