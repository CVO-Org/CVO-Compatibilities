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

#include "CfgMagazines.hpp"
