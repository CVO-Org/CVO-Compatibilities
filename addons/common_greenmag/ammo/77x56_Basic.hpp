class GVAR(ammo_77x56_basic_1rnd) :  GVAR(ammo_core_1rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_basic_in_Name), ".303 British", 1]);
	descriptionShort = __EVAL(format [LLSTRING(Ammo_basic_in_Desc), ".303 British"]);

	picture = "\z\greenmag\addons\main\data\762mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.22;
	};
};

class GVAR(ammo_77x56_basic_10rnd) :  GVAR(ammo_core_10rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_basic_in_Name), ".303 British", 10]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_77x56_basic_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 2.2;
	};
};

class GVAR(ammo_77x56_basic_20rnd) :  GVAR(ammo_core_20rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_basic_in_Name), ".303 British", 20]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_77x56_basic_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 4.4;
	};
};

class GVAR(ammo_77x56_basic_30rnd) :  GVAR(ammo_core_30rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_basic_in_Name), ".303 British", 30]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QGVAR(ammo_77x56_basic_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 6.6;
	};
};

class GVAR(ammo_77x56_basic_40rnd) :  GVAR(ammo_core_40rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_basic_in_Name), ".303 British", 40]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_77x56_basic_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 8.8;
	};
};

class GVAR(ammo_77x56_basic_50rnd) :  GVAR(ammo_core_50rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_basic_in_Name), ".303 British", 50]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_77x56_basic_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 11.0;
	};
};

class GVAR(ammo_77x56_basic_60rnd) :  GVAR(ammo_core_60rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_basic_in_Name), ".303 British", 60]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QGVAR(ammo_77x56_basic_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 13.2;
	};
};
