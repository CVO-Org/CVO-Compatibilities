class GVAR(ammo_570x28_tracer_1rnd) :  GVAR(ammo_core_1rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "5.7x28", 1, LLSTRING(Ammo_tracer_Short)]);
	descriptionShort = __EVAL(format [LLSTRING(Ammo_Complex_mm_Desc), "5.7x28", LLSTRING(Ammo_tracer_Full)]);

	picture = "\z\greenmag\addons\main\data\556mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.22;
	};
};

class GVAR(ammo_570x28_tracer_10rnd) :  GVAR(ammo_core_10rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "5.7x28", 10, LLSTRING(Ammo_tracer_Short)]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_570x28_tracer_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 2.2;
	};
};

class GVAR(ammo_570x28_tracer_20rnd) :  GVAR(ammo_core_20rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "5.7x28", 20, LLSTRING(Ammo_tracer_Short)]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_570x28_tracer_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 4.4;
	};
};

class GVAR(ammo_570x28_tracer_30rnd) :  GVAR(ammo_core_30rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "5.7x28", 30, LLSTRING(Ammo_tracer_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QGVAR(ammo_570x28_tracer_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 6.6;
	};
};

class GVAR(ammo_570x28_tracer_40rnd) :  GVAR(ammo_core_40rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "5.7x28", 40, LLSTRING(Ammo_tracer_Short)]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_570x28_tracer_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 8.8;
	};
};

class GVAR(ammo_570x28_tracer_50rnd) :  GVAR(ammo_core_50rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "5.7x28", 50, LLSTRING(Ammo_tracer_Short)]);

	scope = 2;

	greenmag_ammotype = QGVAR(ammo_570x28_tracer_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 11.0;
	};
};

class GVAR(ammo_570x28_tracer_60rnd) :  GVAR(ammo_core_60rnd) {
	displayName = __EVAL(format [LLSTRING(Ammo_Complex_mm_Name), "5.7x28", 60, LLSTRING(Ammo_tracer_Short)]);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QGVAR(ammo_570x28_tracer_1rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 13.2;
	};
};
