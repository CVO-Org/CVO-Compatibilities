class GVAR(ammo_46x30_basic_1rnd) :  GVAR(ammo_core_1rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_basic_mm_Name), "4.6x30", 1]);
	descriptionShort = __EVAL(format [LLSTRING(Ammo_basic_mm_Desc), "4.6x30"]);
	
	picture = "\z\greenmag\addons\main\data\556mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.22;
	};
};

class GVAR(ammo_46x30_basic_10rnd) :  GVAR(ammo_core_10rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_basic_mm_Name), "4.6x30", 10]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_46x30_basic_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 2.2;
	};
};

class GVAR(ammo_46x30_basic_20rnd) :  GVAR(ammo_core_20rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_basic_mm_Name), "4.6x30", 20]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_46x30_basic_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 4.4;
	};
};

class GVAR(ammo_46x30_basic_30rnd) :  GVAR(ammo_core_30rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_basic_mm_Name), "4.6x30", 30]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QGVAR(ammo_46x30_basic_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 6.6;
	};
};

class GVAR(ammo_46x30_basic_40rnd) :  GVAR(ammo_core_40rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_basic_mm_Name), "4.6x30", 40]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_46x30_basic_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 8.8;
	};
};

class GVAR(ammo_46x30_basic_50rnd) :  GVAR(ammo_core_50rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_basic_mm_Name), "4.6x30", 50]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_46x30_basic_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 11.0;
	};
};

class GVAR(ammo_46x30_basic_60rnd) :  GVAR(ammo_core_60rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_basic_mm_Name), "4.6x30", 60]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QGVAR(ammo_46x30_basic_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 13.2;
	};
};
