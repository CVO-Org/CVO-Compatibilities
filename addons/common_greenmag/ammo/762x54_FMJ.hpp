class GVAR(ammo_762x54_FMJ_1rnd) :  GVAR(ammo_core_1rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "7.62x54", 1, LLSTRING(Ammo_FMJ_Short)]);
	descriptionShort = __EVAL(format [LLSTRING(Ammo_Complex_mm_Desc), "7.62x54", LLSTRING(Ammo_FMJ_Full)]);
	
	picture = "\z\greenmag\addons\main\data\762mm.paa";

	scope = 2;
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.48;
	};
};

class GVAR(ammo_762x54_FMJ_10rnd) :  GVAR(ammo_core_10rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "7.62x54", 10, LLSTRING(Ammo_FMJ_Short)]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_762x54_FMJ_1rnd);
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 4.8;
	};
};

class GVAR(ammo_762x54_FMJ_20rnd) :  GVAR(ammo_core_20rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "7.62x54", 20, LLSTRING(Ammo_FMJ_Short)]);

	scope = 2;
	
	greenmag_ammotype = QGVAR(ammo_762x54_FMJ_1rnd);
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 9.6;
	};
};

class GVAR(ammo_762x54_FMJ_30rnd) :  GVAR(ammo_core_30rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "7.62x54", 30, LLSTRING(Ammo_FMJ_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;
	
	greenmag_ammotype = QGVAR(ammo_762x54_FMJ_1rnd);
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 14.4;
	};
};

class GVAR(ammo_762x54_FMJ_40rnd) :  GVAR(ammo_core_40rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "7.62x54", 40, LLSTRING(Ammo_FMJ_Short)]);

	scope = 2;
	
	greenmag_ammotype = QGVAR(ammo_762x54_FMJ_1rnd);
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 19.2;
	};
};

class GVAR(ammo_762x54_FMJ_50rnd) :  GVAR(ammo_core_50rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "7.62x54", 50, LLSTRING(Ammo_FMJ_Short)]);

	scope = 2;
	
	greenmag_ammotype = QGVAR(ammo_762x54_FMJ_1rnd);
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 24.0;
	};
};

class GVAR(ammo_762x54_FMJ_60rnd) :  GVAR(ammo_core_60rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "7.62x54", 60, LLSTRING(Ammo_FMJ_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;
	
	greenmag_ammotype = QGVAR(ammo_762x54_FMJ_1rnd);
	
	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 28.8;
	};
};
