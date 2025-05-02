#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = "24th CVO Compatibilities - RHS USAF Greenmag";
		author = "24th Chorni Voron";
		url = "https://github.com/SkippieDippie/CVO-Everything-Compats";

		requiredAddons[] = {
			"rhsusf_c_weapons",
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

	#include "magazines\rhs_usaf_127x99.hpp"
	#include "magazines\rhs_usaf_46x30.hpp"
	#include "magazines\rhs_usaf_556x45.hpp"
	#include "magazines\rhs_usaf_762x51.hpp"
	#include "magazines\rhs_usaf_762x67.hpp"
	#include "magazines\rhs_usaf_9x19.hpp"
};
