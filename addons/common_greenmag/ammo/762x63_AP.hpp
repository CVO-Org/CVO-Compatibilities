class GVAR(ammo_762x63_AP_1rnd) :  GVAR(ammo_core_1rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_in_Name), ".30-06", 1, LLSTRING(Ammo_AP_Short)]);
	descriptionShort = __EVAL(format [LLSTRING(Ammo_Complex_in_Desc), ".30-06", LLSTRING(Ammo_AP_Full)]);

	picture = "\z\greenmag\addons\main\data\762mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.22;
	};
};

class GVAR(ammo_762x63_AP_10rnd) :  GVAR(ammo_core_10rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_in_Name), ".30-06", 10, LLSTRING(Ammo_AP_Short)]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_762x63_AP_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 2.2;
	};
};

class GVAR(ammo_762x63_AP_20rnd) :  GVAR(ammo_core_20rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_in_Name), ".30-06", 20, LLSTRING(Ammo_AP_Short)]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_762x63_AP_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 4.4;
	};
};

class GVAR(ammo_762x63_AP_30rnd) :  GVAR(ammo_core_30rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_in_Name), ".30-06", 30, LLSTRING(Ammo_AP_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QGVAR(ammo_762x63_AP_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 6.6;
	};
};

class GVAR(ammo_762x63_AP_40rnd) :  GVAR(ammo_core_40rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_in_Name), ".30-06", 40, LLSTRING(Ammo_AP_Short)]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_762x63_AP_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 8.8;
	};
};

class GVAR(ammo_762x63_AP_50rnd) :  GVAR(ammo_core_50rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_in_Name), ".30-06", 50, LLSTRING(Ammo_AP_Short)]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_762x63_AP_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 11.0;
	};
};

class GVAR(ammo_762x63_AP_60rnd) :  GVAR(ammo_core_60rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_in_Name), ".30-06", 60, LLSTRING(Ammo_AP_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QGVAR(ammo_762x63_AP_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 13.2;
	};
};
