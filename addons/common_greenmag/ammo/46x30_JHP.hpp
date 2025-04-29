class GVAR(ammo_46x30_JHP_1rnd) :  GVAR(ammo_core_1rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "4.6x30", 1, LLSTRING(Ammo_JHP_Short)]);
	descriptionShort = __EVAL(format [LLSTRING(Ammo_Complex_mm_Desc), "4.6x30", LLSTRING(Ammo_JHP_Full)]);

	picture = "\z\greenmag\addons\main\data\556mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.22;
	};
};

class GVAR(ammo_46x30_JHP_10rnd) :  GVAR(ammo_core_10rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "4.6x30", 10, LLSTRING(Ammo_JHP_Short)]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_46x30_JHP_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 2.2;
	};
};

class GVAR(ammo_46x30_JHP_20rnd) :  GVAR(ammo_core_20rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "4.6x30", 20, LLSTRING(Ammo_JHP_Short)]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_46x30_JHP_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 4.4;
	};
};

class GVAR(ammo_46x30_JHP_30rnd) :  GVAR(ammo_core_30rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "4.6x30", 30, LLSTRING(Ammo_JHP_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QGVAR(ammo_46x30_JHP_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 6.6;
	};
};

class GVAR(ammo_46x30_JHP_40rnd) :  GVAR(ammo_core_40rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "4.6x30", 40, LLSTRING(Ammo_JHP_Short)]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_46x30_JHP_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 8.8;
	};
};

class GVAR(ammo_46x30_JHP_50rnd) :  GVAR(ammo_core_50rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "4.6x30", 50, LLSTRING(Ammo_JHP_Short)]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_46x30_JHP_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 11.0;
	};
};

class GVAR(ammo_46x30_JHP_60rnd) :  GVAR(ammo_core_60rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "4.6x30", 60, LLSTRING(Ammo_JHP_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QGVAR(ammo_46x30_JHP_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 13.2;
	};
};
