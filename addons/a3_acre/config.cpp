#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "24th CVO Compatibilities - Arma 3";
        author = ELSTRING(main,author);
        url = "https://github.com/SkippieDippie/CVO-Everything-Compats";

        requiredAddons[] = {
            "acre_main"
        };
        requiredVersion = 1.00;
        skipWhenMissingDependencies = 1;

        units[] = {};
        weapons[] = {};
    };
};

#include "CfgVehicles.hpp"
