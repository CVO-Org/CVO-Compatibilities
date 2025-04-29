class GVAR(ammo_9x21_tracer_1rnd) :  GVAR(ammo_core_1rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "9x21", 1, LLSTRING(Ammo_tracer_Short)]);
	descriptionShort = __EVAL(format [LLSTRING(Ammo_Complex_mm_Desc), "9x21", LLSTRING(Ammo_tracer_Full)]);

	picture = "\z\greenmag\addons\main\data\9mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.26;
	};
};

class GVAR(ammo_9x21_tracer_10rnd) :  GVAR(ammo_core_10rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "9x21", 10, LLSTRING(Ammo_tracer_Short)]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_9x21_tracer_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 2.6;
	};
};

class GVAR(ammo_9x21_tracer_20rnd) :  GVAR(ammo_core_20rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "9x21", 20, LLSTRING(Ammo_tracer_Short)]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_9x21_tracer_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 5.2;
	};
};

class GVAR(ammo_9x21_tracer_30rnd) :  GVAR(ammo_core_30rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "9x21", 30, LLSTRING(Ammo_tracer_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QGVAR(ammo_9x21_tracer_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 7.8;
	};
};

class GVAR(ammo_9x21_tracer_40rnd) :  GVAR(ammo_core_40rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "9x21", 40, LLSTRING(Ammo_tracer_Short)]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_9x21_tracer_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 10.4;
	};
};

class GVAR(ammo_9x21_tracer_50rnd) :  GVAR(ammo_core_50rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "9x21", 50, LLSTRING(Ammo_tracer_Short)]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_9x21_tracer_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 13.0;
	};
};

class GVAR(ammo_9x21_tracer_60rnd) :  GVAR(ammo_core_60rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "9x21", 60, LLSTRING(Ammo_tracer_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QGVAR(ammo_9x21_tracer_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 15.6;
	};
};
