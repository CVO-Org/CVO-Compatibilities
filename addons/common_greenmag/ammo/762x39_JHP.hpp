class GVAR(ammo_762x39_JHP_1rnd) :  GVAR(ammo_core_1rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "7.62x39", 1, LLSTRING(Ammo_JHP_Short)]);
	descriptionShort = __EVAL(format [LLSTRING(Ammo_Complex_mm_Desc), "7.62x39", LLSTRING(Ammo_JHP_Full)]);

	picture = "\z\greenmag\addons\main\data\556mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.35;
	};
};

class GVAR(ammo_762x39_JHP_10rnd) :  GVAR(ammo_core_10rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "7.62x39", 10, LLSTRING(Ammo_JHP_Short)]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_762x39_JHP_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 3.5;
	};
};

class GVAR(ammo_762x39_JHP_20rnd) :  GVAR(ammo_core_20rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "7.62x39", 20, LLSTRING(Ammo_JHP_Short)]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_762x39_JHP_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 7.0;
	};
};

class GVAR(ammo_762x39_JHP_30rnd) :  GVAR(ammo_core_30rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "7.62x39", 30, LLSTRING(Ammo_JHP_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QGVAR(ammo_762x39_JHP_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 10.5;
	};
};

class GVAR(ammo_762x39_JHP_40rnd) :  GVAR(ammo_core_40rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "7.62x39", 40, LLSTRING(Ammo_JHP_Short)]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_762x39_JHP_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 14.0;
	};
};

class GVAR(ammo_762x39_JHP_50rnd) :  GVAR(ammo_core_50rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "7.62x39", 50, LLSTRING(Ammo_JHP_Short)]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_762x39_JHP_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 17.5;
	};
};

class GVAR(ammo_762x39_JHP_60rnd) :  GVAR(ammo_core_60rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "7.62x39", 60, LLSTRING(Ammo_JHP_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QGVAR(ammo_762x39_JHP_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 21;
	};
};
