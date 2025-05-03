#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "24th CVO Compatibilities - RHS AFRF Greenmag";
        author = ELSTRING(main,author);
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

#include "CfgMagazines.hpp"
