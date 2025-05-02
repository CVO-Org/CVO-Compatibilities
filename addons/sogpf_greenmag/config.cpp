#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = "24th CVO Compatibilities - SOG Praire Fire Greenmag";
		author = "24th Chorni Voron";
		url = "https://github.com/SkippieDippie/CVO-Everything-Compats";

		requiredAddons[] = {
			"weapons_f_vietnam",
			"greenmag_main"
		};
		requiredVersion = 1.00;
		skipWhenMissingDependencies = 1;

		units[] = {};
		weapons[] = {};
	};
};

#include "CfgMagazines.hpp"
