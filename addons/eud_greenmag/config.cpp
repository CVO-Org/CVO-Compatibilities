#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "24th CVO Compatibilities";
        author = ELSTRING(main,author);
        url = "https://github.com/CVO-Org/CVO-Compatibilities";

        requiredVersion = 1.00;
        requiredAddons[] = {"eup_pouches", "greenmag_main"};
        
        units[] = {};
        weapons[] = {};

        skipWhenMissingDependencies = 1;
    };
};

#include "CfgEFAKKits.hpp"