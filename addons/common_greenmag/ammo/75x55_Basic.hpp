class GVAR(ammo_75x55_basic_1rnd) :  GVAR(ammo_core_1rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_basic_mm_Name), "7.5x55", 1]);
	descriptionShort = __EVAL(format [LLSTRING(Ammo_basic_mm_Desc), "7.5x55"]);
	
	picture = "\z\greenmag\addons\main\data\556mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.2;
	};
};

class GVAR(ammo_75x55_basic_10rnd) :  GVAR(ammo_core_10rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_basic_mm_Name), "7.5x55", 10]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_75x55_basic_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 2.0;
	};
};

class GVAR(ammo_75x55_basic_20rnd) :  GVAR(ammo_core_20rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_basic_mm_Name), "7.5x55", 20]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_75x55_basic_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 4.0;
	};
};

class GVAR(ammo_75x55_basic_30rnd) :  GVAR(ammo_core_30rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_basic_mm_Name), "7.5x55", 30]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QGVAR(ammo_75x55_basic_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 6.0;
	};
};

class GVAR(ammo_75x55_basic_40rnd) :  GVAR(ammo_core_40rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_basic_mm_Name), "7.5x55", 40]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_75x55_basic_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 8.0;
	};
};

class GVAR(ammo_75x55_basic_50rnd) :  GVAR(ammo_core_50rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_basic_mm_Name), "7.5x55", 50]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_75x55_basic_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 10.0;
	};
};

class GVAR(ammo_75x55_basic_60rnd) :  GVAR(ammo_core_60rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_basic_mm_Name), "7.5x55", 60]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QGVAR(ammo_75x55_basic_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 12.0;
	};
};
