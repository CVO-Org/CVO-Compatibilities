#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = "24th CVO Compatibilities - SOG Praire Fire ACE3";
        author = ELSTRING(main,author);
        url = "https://github.com/SkippieDippie/CVO-Everything-Compats";

        requiredAddons[] = {
            "armor_f_vietnam_03_c",
            "air_f_vietnam_c",
            "air_f_vietnam_02_c",
            "air_f_vietnam_03_c",
            "wheeled_f_vietnam_c",
            "wheeled_f_vietnam_04_c",
            "ace_main"
        };
        requiredVersion = 1.00;
        skipWhenMissingDependencies = 1;

        units[] = {};
        weapons[] = {};
    };
};

#include "CfgVehicles.hpp"

class ace_medical_facilities {
    SOGPF_medicalFacilities[] = {   "Land_vn_barracks_04_02",
                                    "Land_vn_tent_mash_01_01",
                                    "Land_vn_tent_mash_01_02",
                                    "Land_vn_hootch_02_01",
                                    "Land_vn_hootch_02_11",
                                    "Land_vn_tent_mash_02_01",
                                    "Land_vn_tent_mash_02_02",
                                    "Land_vn_tent_mash_02_03",
                                    "Land_vn_tent_mash_02_04",
                                    "Land_vn_tent_mash_01_03",
                                    "Land_vn_tent_mash_01_04",
                                    "Land_vn_tent_mash_01",
                                    "Land_vn_a_hospital",
                                    "Land_vn_wf_field_hospital_east" };

};
