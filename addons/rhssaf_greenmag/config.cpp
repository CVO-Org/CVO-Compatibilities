#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = "24th CVO Compatibilities - RHS SAF Greenmag";
		author = "24th Chorni Voron";
		url = "https://github.com/SkippieDippie/CVO-Everything-Compats";

		requiredAddons[] = {
			"rhssaf_c_weapons",
			"greenmag_main"
		};
		requiredVersion = 1.00;
		skipWhenMissingDependencies = 1;

		units[] = {};
		weapons[] = {};
	};
};

class CfgMagazines {
	class CA_Magazine;

	#include "magazines\rhs_saf_556x45.hpp"
	#include "magazines\rhs_saf_762x39.hpp"
	#include "magazines\rhs_saf_762x54.hpp"
	#include "magazines\rhs_saf_765x17.hpp"
	#include "magazines\rhs_saf_792x57.hpp"
	#include "magazines\rhs_saf_9x19.hpp"
};
