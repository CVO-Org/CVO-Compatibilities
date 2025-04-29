class GVAR(ammo_765x17_basic_1rnd) :  GVAR(ammo_core_1rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_basic_in_Name), ".320ACP", 1]);
	descriptionShort = __EVAL(format [LLSTRING(Ammo_basic_in_Desc), ".320ACP"]);

	picture = "\z\greenmag\addons\main\data\9mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.2;
	};
};

class GVAR(ammo_765x17_basic_10rnd) :  GVAR(ammo_core_10rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_basic_in_Name), ".320ACP", 10]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_765x17_basic_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 2.0;
	};
};

class GVAR(ammo_765x17_basic_20rnd) :  GVAR(ammo_core_20rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_basic_in_Name), ".320ACP", 20]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_765x17_basic_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 4.0;
	};
};

class GVAR(ammo_765x17_basic_30rnd) :  GVAR(ammo_core_30rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_basic_in_Name), ".320ACP", 30]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QGVAR(ammo_765x17_basic_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 6.0;
	};
};

class GVAR(ammo_765x17_basic_40rnd) :  GVAR(ammo_core_40rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_basic_in_Name), ".320ACP", 40]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_765x17_basic_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 8.0;
	};
};

class GVAR(ammo_765x17_basic_50rnd) :  GVAR(ammo_core_50rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_basic_in_Name), ".320ACP", 50]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_765x17_basic_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 10.0;
	};
};

class GVAR(ammo_765x17_basic_60rnd) :  GVAR(ammo_core_60rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_basic_in_Name), ".320ACP", 60]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QGVAR(ammo_765x17_basic_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 12.0;
	};
};
