class CfgPatches {
	class CVO_Compats_RHSAFRF {
		name = "24th CVO Compatibilities - RHS AFRF Greenmag";
		author = "24th Chorni Voron";
		url = "https://github.com/SkippieDippie/CVO-Everything-Compats";

		requiredAddons[] = {
			"rhs_c_weapons",
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

	#include "magazines\rhs_afrf_545x39.hpp"
	#include "magazines\rhs_afrf_762x39.hpp"
	#include "magazines\rhs_afrf_762x54.hpp"
	#include "magazines\rhs_afrf_9x19.hpp"
	#include "magazines\rhs_afrf_9x18.hpp"
	#include "magazines\rhs_afrf_9x21.hpp"
	#include "magazines\rhs_afrf_9x39.hpp"
	#include "magazines\rhs_afrf_338.hpp"
};
