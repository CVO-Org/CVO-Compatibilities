class CfgWeapons {
	// External Classes
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;
	class greenmag_core_1Rnd;
	class greenmag_core_10Rnd;
	class greenmag_core_20Rnd;
	class greenmag_core_30Rnd;
	class greenmag_core_40Rnd;
	class greenmag_core_50Rnd;
	class greenmag_core_60Rnd;

	// Core Classes
	class  GVAR(ammo_core_1rnd) : greenmag_core_1Rnd {
		author = "24th Chorni Voron";
	};
	class  GVAR(ammo_core_10rnd) : greenmag_core_10Rnd {
		author = "24th Chorni Voron";
	};
	class  GVAR(ammo_core_20rnd) : greenmag_core_20Rnd {
		author = "24th Chorni Voron";
	};
	class  GVAR(ammo_core_30rnd) : greenmag_core_30Rnd {
		author = "24th Chorni Voron";
	};
	class  GVAR(ammo_core_40rnd) : greenmag_core_40Rnd {
		author = "24th Chorni Voron";
	};
	class  GVAR(ammo_core_50rnd) : greenmag_core_50Rnd {
		author = "24th Chorni Voron";
	};
	class  GVAR(ammo_core_60rnd) : greenmag_core_60Rnd {
		author = "24th Chorni Voron";
	};

	class  GVAR(belt_core) : CBA_MiscItem {
		author = "24th Chorni Voron";

		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;

		picture = "\z\greenmag\addons\main\data\belt.paa";
	    model = "\A3\weapons_F\ammo\mag_univ.p3d";
	    
	    icon = "iconObject_circle";
	    mapSize = 0.034;
	};


	// Ammo
	// 4.6x30
	#include "ammo\46x30_basic.hpp"
	#include "ammo\46x30_AP.hpp"
	#include "ammo\46x30_FMJ.hpp"
	#include "ammo\46x30_JHP.hpp"


	// 5.45x39
	#include "ammo\545x39_AP.hpp"
	#include "ammo\545x39_EP.hpp"
	#include "ammo\545x39_FMJ.hpp"
	#include "ammo\545x39_subsonic.hpp"
	#include "ammo\545x39_tracer.hpp"


	// 5.56x45 NATO
	#include "ammo\556x45_AP.hpp"
	#include "ammo\556x45_EP.hpp"
	#include "ammo\556x45_FMJ.hpp"
	#include "ammo\556x45_JHP.hpp"
	#include "ammo\556x45_match.hpp"
	#include "ammo\556x45_blank.hpp"
	#include "ammo\556x45_subsonic.hpp"
	#include "ammo\556x45_tracer.hpp"


	// 5.7x28
	#include "ammo\570x28_FMJ.hpp"
	#include "ammo\570x28_tracer.hpp"


	// 7.5x55
	#include "ammo\75x55_basic.hpp"
	#include "ammo\75x55_FMJ.hpp"
	#include "ammo\75x55_tracer.hpp"


	// 7.62x25
	#include "ammo\762x25_basic.hpp"
	#include "ammo\762x25_FMJ.hpp"
	#include "ammo\762x25_tracer.hpp"


	// 7.62x39
	#include "ammo\762x39_AP.hpp"
	#include "ammo\762x39_EP.hpp"
	#include "ammo\762x39_FMJ.hpp"
	#include "ammo\762x39_JHP.hpp"
	#include "ammo\762x39_subsonic.hpp"
	#include "ammo\762x39_tracer.hpp"


	// 7.62x51 NATO
	#include "ammo\762x51_AP.hpp"
	#include "ammo\762x51_EP.hpp"
	#include "ammo\762x51_FMJ.hpp"
	#include "ammo\762x51_blank.hpp"
	#include "ammo\762x51_match.hpp"
	#include "ammo\762x51_tracer.hpp"

	// 7.62x54
	#include "ammo\762x54_AP.hpp"
	#include "ammo\762x54_EP.hpp"
	#include "ammo\762x54_FMJ.hpp"
	#include "ammo\762x54_match.hpp"
	#include "ammo\762x54_tracer.hpp"

	// .30-06 Springfield
	#include "ammo\762x63_basic.hpp"
	#include "ammo\762x63_AP.hpp"
	#include "ammo\762x63_FMJ.hpp"
	#include "ammo\762x63_tracer.hpp"


	// .300 Winchester
	#include "ammo\762x67_basic.hpp"
	#include "ammo\762x67_match.hpp"


	// .32ACP
	#include "ammo\765x17_basic.hpp"


	// .303 British (7.7x56)
	#include "ammo\77x56_basic.hpp"
	#include "ammo\77x56_FMJ.hpp"
	#include "ammo\77x56_tracer.hpp"


	// 7.92x33 Kurz
	#include "ammo\792x33_basic.hpp"


	// 7.92x57 Mauser
	#include "ammo\792x57_basic.hpp"
	#include "ammo\792x57_AP.hpp"
	#include "ammo\792x57_FMJ.hpp"
	#include "ammo\792x57_tracer.hpp"


	// 8x22 Nambu
	#include "ammo\8x22_basic.hpp"
	

	// 9x18
	#include "ammo\9x18_basic.hpp"


	// 9x19
	#include "ammo\9x19_AP.hpp"
	#include "ammo\9x19_FMJ.hpp"
	#include "ammo\9x19_JHP.hpp"


	// 9x21
	#include "ammo\9x21_AP.hpp"
	#include "ammo\9x21_FMJ.hpp"
	#include "ammo\9x21_tracer.hpp"


	// 9x39
	#include "ammo\9x39_basic.hpp"
	#include "ammo\9x39_AP.hpp"
	#include "ammo\9x39_match.hpp"


	// 9.3x62
	#include "ammo\93x62_basic.hpp"
	#include "ammo\93x62_FMJ.hpp"
	#include "ammo\93x62_tracer.hpp"


	// 10x25
	#include "ammo\10x25_basic.hpp"
	#include "ammo\10x25_FMJ.hpp"
	#include "ammo\10x25_tracer.hpp"


	// .50BMG
	#include "ammo\127x99_AP.hpp"
	#include "ammo\127x99_match.hpp"


	// Belts
	#include "belts\556x45_AP.hpp"
	#include "belts\556x45_EP.hpp"
	#include "belts\556x45_FMJ.hpp"
	#include "belts\556x45_blank.hpp"


	#include "belts\762x51_AP.hpp"
	#include "belts\762x51_EP.hpp"
	#include "belts\762x51_FMJ.hpp"
	#include "belts\762x51_blank.hpp"
	#include "belts\762x51_match.hpp"
	#include "belts\762x51_tracer.hpp"


	#include "belts\762x54_AP.hpp"
	#include "belts\762x54_EP.hpp"
	#include "belts\762x54_FMJ.hpp"
	#include "belts\762x54_tracer.hpp"


	#include "belts\792x57_basic.hpp"
	#include "belts\792x57_AP.hpp"
	#include "belts\792x57_FMJ.hpp"
	#include "belts\792x57_tracer.hpp"
	
};
