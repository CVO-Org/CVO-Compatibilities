#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "24th CVO Compatibilities - SOG Praire Fire ACRE2";
        author = ELSTRING(main,author);
        url = "https://github.com/SkippieDippie/CVO-Everything-Compats";

        requiredAddons[] = {
            "air_f_vietnam_c",
            "air_f_vietnam_02_c",
            "wheeled_f_vietnam_c",
            "wheeled_f_vietnam_02_c",
            "wheeled_f_vietnam_03_c",
            "wheeled_f_vietnam_04_c",
            "acre_main",
            "acre_compat_sog"
        };
        requiredVersion = 1.00;
        skipWhenMissingDependencies = 1;

        units[] = {};
        weapons[] = {};
    };
};

#include "CfgVehicles.hpp"
