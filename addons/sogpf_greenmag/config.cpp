#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "24th CVO Compatibilities - SOG Praire Fire Greenmag";
        author = ELSTRING(main,author);
        url = "https://github.com/SkippieDippie/CVO-Everything-Compats";

        requiredAddons[] = {
            "weapons_f_vietnam_c",
            "weapons_f_vietnam_02_c",
            "weapons_f_vietnam_03_c",
            "weapons_f_vietnam_04_c",
            "greenmag_main"
        };
        requiredVersion = 1.00;
        skipWhenMissingDependencies = 1;

        units[] = {};
        weapons[] = {};
    };
};

#include "CfgMagazines.hpp"
