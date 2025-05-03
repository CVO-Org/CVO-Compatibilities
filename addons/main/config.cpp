#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "24th CVO Compatibilities";
        author = ELSTRING(main,author);
        url = "https://github.com/SkippieDippie/CVO-Communication-Systems";

        requiredVersion = 1.00;
        requiredAddons[] = {"CBA_main"};
        
        units[] = {};
        weapons[] = {};

        skipWhenMissingDependencies = 0;
    };
};
