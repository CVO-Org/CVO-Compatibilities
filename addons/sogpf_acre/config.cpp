#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		name = "24th CVO Compatibilities - SOG Praire Fire ACRE2";
		author = "24th Chorni Voron";
		url = "https://github.com/SkippieDippie/CVO-Everything-Compats";

		requiredAddons[] = {
			"wheeled_f_vietnam",
			"acre_main"
		};
		requiredVersion = 1.00;
		skipWhenMissingDependencies = 1;

		units[] = {};
		weapons[] = {};
	};
};

#include "CfgVehicles.hpp"
