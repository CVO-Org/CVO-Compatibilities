class CfgVehicles {
    class APC_Tracked_01_base_F;

    class rhsusf_m966_w;
    class rhsusf_m998_w_2dr;
    class rhsusf_m998_w_4dr;

    class rhsusf_m1025_w;
    class rhsusf_m1025_w_m2;
    class rhsusf_m1025_w_mk19;

    class rhsusf_m1151_base;
    class rhsusf_M1151_GPK_M2_base;
    class rhsusf_M1151_GPK_M240_base;
    class rhsusf_M1151_GPK_MK19_base;
    class rhsusf_M1151_GPK_PKM_base;

    class UK3CB_LandRover_Base;

    class UK3CB_LAV25_Base;

    class rhsusf_M1117_base;

    class UK3CB_GAZ_Vodnik_Base;

    class UK3CB_AAV : APC_Tracked_01_base_F {
        
        class AcreRacks {
            class Rack_1 {
                displayName = "$STR_ACRE_sys_rack_dashUpper";
                shortName = "$STR_ACRE_sys_rack_dashUpperShort";

                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                defaultComponents[] = {};

                allowedPositions[] = {
                    "commander", 
                    {"cargo", 7, 16}
                };
                disabledPositions[] = {};

                intercom[] = {"Intercom_1"};
            };
            class Rack_2 {
                displayName = "$STR_ACRE_sys_rack_dashLower";
                shortName = "$STR_ACRE_sys_rack_dashLowerShort";

                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                defaultComponents[] = {};

                allowedPositions[] = {
                    "commander", 
                    {"cargo", 7, 16}
                };
                disabledPositions[] = {};

                intercom[] = {"Intercom_1"};
            };
        };
        
        class AcreIntercoms {
            class Intercom_1 {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";

                allowedPositions[] = {
                    "crew"
                };
                disabledPositions[] = {};
                masterPositions[] = {
                    "commander"
                };

                limitedPositions[] = {
                    {"cargo", "all"}, 
                    {"ffv", "all"}
                };
                numLimitedPositions = 2;

                connectedByDefault = 1;
            };

            class Intercom_2 {
                displayName = "$STR_ACRE_sys_intercom_passengerIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortPassengerIntercom";

                allowedPositions[] = {
                    "inside"
                };
                disabledPositions[] = {};
                masterPositions[] = {
                    "commander"
                };

                limitedPositions[] = {};
                numLimitedPositions = 0;

                connectedByDefault = 0;
            };
        };
    };

    class UK3CB_M1025_Unarmed_Base : rhsusf_m1025_w {
        class AcreRacks {
            class Rack_1 {
                displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";

                componentName = "ACRE_VRC111";
                isRadioRemovable = 1;
                defaultComponents[] = {};

                allowedPositions[] = {"driver", {"ffv", 0, [1]}};
                disabledPositions[] = {};

                intercom[] = {};
            };
        };
    };

    class UK3CB_M1025_M2_Base : rhsusf_m1025_w_m2 {
        class AcreRacks {
            class Rack_1 {
                displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";

                componentName = "ACRE_VRC111";
                isRadioRemovable = 1;
                defaultComponents[] = {};

                allowedPositions[] = {"driver", {"ffv", 0, [1]}};
                disabledPositions[] = {};

                intercom[] = {};
            };
        };
    };

    class UK3CB_M1025_MK19_Base : rhsusf_m1025_w_mk19 {
        class AcreRacks {
            class Rack_1 {
                displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";

                componentName = "ACRE_VRC111";
                isRadioRemovable = 1;
                defaultComponents[] = {};

                allowedPositions[] = {"driver", {"ffv", 0, [1]}};
                disabledPositions[] = {};

                intercom[] = {};
            };
        };
    };

    class UK3CB_M1025_TOW_Base : rhsusf_m966_w {
        class AcreRacks {
            class Rack_1 {
                displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";

                componentName = "ACRE_VRC111";
                isRadioRemovable = 1;
                defaultComponents[] = {};

                allowedPositions[] = {"driver", {"ffv", 0, [1]}};
                disabledPositions[] = {};

                intercom[] = {};
            };
        };
    };

    class UK3CB_M1151_Base : rhsusf_m1151_base {
        class AcreRacks {
            class Rack_1 {
                displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";

                componentName = "ACRE_VRC111";
                isRadioRemovable = 1;
                defaultComponents[] = {};

                allowedPositions[] = {"driver", {"turret", -1, [0]}};
                disabledPositions[] = {};

                intercom[] = {};
            };
        };
    };

    class UK3CB_M1151_GPK_M2_Base : rhsusf_M1151_GPK_M2_base {
        class AcreRacks {
            class Rack_1 {
                displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";

                componentName = "ACRE_VRC111";
                isRadioRemovable = 1;
                defaultComponents[] = {};

                allowedPositions[] = {"driver", {"turret", -1, [1]}};
                disabledPositions[] = {};

                intercom[] = {};
            };
        };
    };

    class UK3CB_M1151_GPK_M240_Base : rhsusf_M1151_GPK_M240_base {
        class AcreRacks {
            class Rack_1 {
                displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";

                componentName = "ACRE_VRC111";
                isRadioRemovable = 1;
                defaultComponents[] = {};

                allowedPositions[] = {"driver", {"turret", -1, [1]}};
                disabledPositions[] = {};

                intercom[] = {};
            };
        };
    };

    class UK3CB_M1151_GPK_MK19_Base : rhsusf_M1151_GPK_MK19_base {
        class AcreRacks {
            class Rack_1 {
                displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";

                componentName = "ACRE_VRC111";
                isRadioRemovable = 1;
                defaultComponents[] = {};

                allowedPositions[] = {"driver", {"turret", -1, [1]}};
                disabledPositions[] = {};

                intercom[] = {};
            };
        };
    };

    class UK3CB_M1151_GPK_PKM_Base : rhsusf_M1151_GPK_PKM_base {
        class AcreRacks {
            class Rack_1 {
                displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";

                componentName = "ACRE_VRC111";
                isRadioRemovable = 1;
                defaultComponents[] = {};

                allowedPositions[] = {"driver", {"turret", -1, [1]}};
                disabledPositions[] = {};

                intercom[] = {};
            };
        };
    };

    class UK3CB_M1151_OGPK_M240_Base : rhsusf_M1151_GPK_M240_base {
        class AcreRacks {
            class Rack_1 {
                displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";

                componentName = "ACRE_VRC111";
                isRadioRemovable = 1;
                defaultComponents[] = {};

                allowedPositions[] = {"driver", {"turret", -1, [1]}};
                disabledPositions[] = {};

                intercom[] = {};
            };
        };
    };

    class UK3CB_M1151_OGPK_MK19_Base : rhsusf_M1151_GPK_MK19_base {
        class AcreRacks {
            class Rack_1 {
                displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";

                componentName = "ACRE_VRC111";
                isRadioRemovable = 1;
                defaultComponents[] = {};

                allowedPositions[] = {"driver", {"turret", -1, [1]}};
                disabledPositions[] = {};

                intercom[] = {};
            };
        };
    };

    class UK3CB_M1151_OGPK_PKM_Base : rhsusf_M1151_GPK_PKM_base {
        class AcreRacks {
            class Rack_1 {
                displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";

                componentName = "ACRE_VRC111";
                isRadioRemovable = 1;
                defaultComponents[] = {};

                allowedPositions[] = {"driver", {"turret", -1, [1]}};
                disabledPositions[] = {};

                intercom[] = {};
            };
        };
    };

    class UK3CB_M998_2DR_Base : rhsusf_m998_w_2dr {
        class AcreRacks {
            class Rack_1 {
                displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";

                componentName = "ACRE_VRC111";
                isRadioRemovable = 1;
                defaultComponents[] = {};

                allowedPositions[] = {"driver", {"ffv", 0, [2]}};
                disabledPositions[] = {};

                intercom[] = {};
            };
        };
    };

    class UK3CB_M998_4DR_Base : rhsusf_m998_w_4dr {
        class AcreRacks {
            class Rack_1 {
                displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";

                componentName = "ACRE_VRC111";
                isRadioRemovable = 1;
                defaultComponents[] = {};

                allowedPositions[] = {"driver", {"ffv", 0, [2]}};
                disabledPositions[] = {};

                intercom[] = {};
            };
        };
    };

    class UK3CB_LandRover : UK3CB_LandRover_Base {
        class AcreRacks {
            class Rack_1 {
                displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";
                componentName = "ACRE_VRC103";

                allowedPositions[] = {"driver", {"turret", "all"}};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                intercom[] = {};
            };
        };
    };

    class UK3CB_LandRover_M2 : UK3CB_LandRover_Base {
        class AcreRacks {
            class Rack_1 {
                displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";
                componentName = "ACRE_VRC103";

                allowedPositions[] = {"driver", {"ffv", 0, [0]}};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                intercom[] = {"Intercom_1"};
            };
        };

        class AcreIntercoms {
            class Intercom_1 {
                displayName = "$STR_ACRE_sys_intercom_passengerIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortPassengerIntercom";

                allowedPositions[] = {"inside"};
                disabledPositions[] = {};

                limitedPositions[] = {};
                numLimitedPositions = 0;

                masterPositions[] = {{"ffv", 0, [0]}};
                connectedByDefault = 1;
            };
        };
    };

    class UK3CB_LandRover_SF_M2 : UK3CB_LandRover_Base {
        class AcreRacks {
            class Rack_1 {
                displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";
                componentName = "ACRE_VRC103";

                allowedPositions[] = {"driver", "commander"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                intercom[] = {"Intercom_1"};
            };
        };

        class AcreIntercoms {
            class Intercom_1 {
                displayName = "$STR_ACRE_sys_intercom_passengerIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortPassengerIntercom";

                allowedPositions[] = {"inside"};
                disabledPositions[] = {};

                limitedPositions[] = {};
                numLimitedPositions = 0;

                masterPositions[] = {"commander"};
                connectedByDefault = 1;
            };
        };
    };

    class UK3CB_LandRover_AGS30 : UK3CB_LandRover_Base {
        class AcreRacks {
            class Rack_1 {
                displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";
                componentName = "ACRE_VRC103";

                allowedPositions[] = {"driver", {"ffv", 0, [0]}};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                intercom[] = {"Intercom_1"};
            };
        };

        class AcreIntercoms {
            class Intercom_1 {
                displayName = "$STR_ACRE_sys_intercom_passengerIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortPassengerIntercom";

                allowedPositions[] = {"inside"};
                disabledPositions[] = {};

                limitedPositions[] = {};
                numLimitedPositions = 0;

                masterPositions[] = {{"ffv", 0, [0]}};
                connectedByDefault = 1;
            };
        };
    };

    class UK3CB_LandRover_SF_AGS30 : UK3CB_LandRover_Base {
        class AcreRacks {
            class Rack_1 {
                displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";
                componentName = "ACRE_VRC103";

                allowedPositions[] = {"driver", "commander"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                intercom[] = {"Intercom_1"};
            };
        };

        class AcreIntercoms {
            class Intercom_1 {
                displayName = "$STR_ACRE_sys_intercom_passengerIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortPassengerIntercom";

                allowedPositions[] = {"inside"};
                disabledPositions[] = {};

                limitedPositions[] = {};
                numLimitedPositions = 0;

                masterPositions[] = {"commander"};
                connectedByDefault = 1;
            };
        };
    };

    class UK3CB_LandRover_SPG9 : UK3CB_LandRover_Base {
        class AcreRacks {
            class Rack_1 {
                displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";
                componentName = "ACRE_VRC103";

                allowedPositions[] = {"driver", {"ffv", 0, [0]}};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                intercom[] = {"Intercom_1"};
            };
        };

        class AcreIntercoms {
            class Intercom_1 {
                displayName = "$STR_ACRE_sys_intercom_passengerIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortPassengerIntercom";

                allowedPositions[] = {"inside"};
                disabledPositions[] = {};

                limitedPositions[] = {};
                numLimitedPositions = 0;

                masterPositions[] = {{"ffv", 0, [0]}};
                connectedByDefault = 1;
            };
        };
    };

    class UK3CB_B_G_LandRover_Closed : UK3CB_LandRover {
        delete AcreRacks;
        delete AcreIntercoms;
    };
    class UK3CB_I_G_LandRover_Closed : UK3CB_LandRover {
        delete AcreRacks;
        delete AcreIntercoms;
    };
    class UK3CB_O_G_LandRover_Closed : UK3CB_LandRover {
        delete AcreRacks;
        delete AcreIntercoms;
    };

    class UK3CB_B_G_LandRover_Open : UK3CB_LandRover {
        delete AcreRacks;
        delete AcreIntercoms;
    };
    class UK3CB_I_G_LandRover_Open : UK3CB_LandRover {
        delete AcreRacks;
        delete AcreIntercoms;
    };
    class UK3CB_O_G_LandRover_Open : UK3CB_LandRover {
        delete AcreRacks;
        delete AcreIntercoms;
    };

    class UK3CB_B_G_LandRover_M2 : UK3CB_LandRover_M2 {
        delete AcreRacks;
        delete AcreIntercoms;
    };
    class UK3CB_I_G_LandRover_M2 : UK3CB_LandRover_M2 {
        delete AcreRacks;
        delete AcreIntercoms;
    };
    class UK3CB_O_G_LandRover_M2 : UK3CB_LandRover_M2 {
        delete AcreRacks;
        delete AcreIntercoms;
    };

    class UK3CB_C_LandRover_Closed : UK3CB_LandRover {
        delete AcreRacks;
        delete AcreIntercoms;
    };

    class UK3CB_C_LandRover_Open : UK3CB_LandRover {
        delete AcreRacks;
        delete AcreIntercoms;
    };

    class UK3CB_LAV25 : UK3CB_LAV25_Base {
        class AcreRacks {
            class Rack_Upper {
                displayName = "$STR_ACRE_sys_rack_dashUpper";
                shortName = "$STR_ACRE_sys_rack_dashUpperShort";

                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                defaultComponents[] = {};

                allowedPositions[] = {
                    "commander"
                };
                disabledPositions[] = {};

                intercom[] = {"Intercom_Crew"};
            };
            class Rack_Lower : Rack_Upper {
                displayName = "$STR_ACRE_sys_rack_dashLower";
                shortName = "$STR_ACRE_sys_rack_dashLowerShort";
            };
        };

        class AcreIntercoms {
            class Intercom_Crew {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";

                allowedPositions[] = {
                    "crew"
                };
                disabledPositions[] = {};
                masterPositions[] = {
                    "commander"
                };

                limitedPositions[] = {
                    {"cargo", "all"}, 
                    {"ffv", "all"}};
                numLimitedPositions = 2;

                connectedByDefault = 1;
            };

            class Intercom_Pax {
                displayName = "$STR_ACRE_sys_intercom_passengerIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortPassengerIntercom";

                allowedPositions[] = {
                    "inside"
                };
                disabledPositions[] = {};
                masterPositions[] = {
                    "commander"
                };

                limitedPositions[] = {};
                numLimitedPositions = 0;

                connectedByDefault = 0;
            };
        };
    };

    class UK3CB_LAV25_HQ : UK3CB_LAV25_Base {        
        class AcreRacks {
            class Rack_RTO_Left_Upper {
                displayName = "Dash Left Upper";
                shortName = "D.LU.";

                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                defaultComponents[] = {};

                allowedPositions[] = {
                    {"ffv", 1, [3]}, 
                    {"cargo", "all"}
                };
                disabledPositions[] = {
                    {"turnedOut", "all"}
                };

                intercom[] = {"Intercom_Crew"};
            };
            class Rack_RTO_Left_Lower : Rack_RTO_Left_Upper {
                displayName = "Dash Left Lower";
                shortName = "D.LL.";
            };
            class Rack_RTO_Right_Upper : Rack_RTO_Left_Upper {
                displayName = "Dash Right Upper";
                shortName = "D.RU.";
            };
            class Rack_RTO_Right_Lower : Rack_RTO_Left_Upper {
                displayName = "Dash Right Lower";
                shortName = "D.RL.";
            };

            class Rack_Commander : Rack_RTO_Left_Upper {
                displayName = "$STR_ACRE_sys_rack_dash";
                shortName = "$STR_ACRE_sys_rack_dashShort";

                allowedPositions[] = {
                    "commander", 
                    {"ffv", 0, [2]}
                };
            };
        };

        class AcreIntercoms {
            class Intercom_Crew {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";

                allowedPositions[] = {
                    "inside"
                };
                disabledPositions[] = {};
                masterPositions[] = {
                    "commander", 
                    {"ffv", 0, [2]}
                };

                limitedPositions[] = {
                    {"cargo", "all"}, 
                    {"ffv", "all"}
                };
                numLimitedPositions = 2;

                connectedByDefault = 1;
            };
        };
    };

    class UK3CB_M1117_base : rhsusf_M1117_base {
        class AcreRacks {
            class Rack_1 {
                displayName = "$STR_ACRE_sys_rack_dashUpper";
                shortName = "$STR_ACRE_sys_rack_dashUpperShort";

                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                defaultComponents[] = {};

                allowedPositions[] = {"commander"};
                disabledPositions[] = {};

                intercom[] = {"Intercom_Crew"};
            };
            class Rack_2 {
                displayName = "$STR_ACRE_sys_rack_dashLower";
                shortName = "$STR_ACRE_sys_rack_dashLowerShort";

                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                defaultComponents[] = {};

                allowedPositions[] = {"commander"};
                disabledPositions[] = {};

                intercom[] = {"Intercom_Crew"};
            };
        };

        class AcreIntercoms {
            class Intercom_1 {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";

                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                masterPositions[] = {"commander"};

                limitedPositions[] = {{"cargo", "all"}};
                numLimitedPositions = 1;

                connectedByDefault = 1;
            };
        };
    };

    class UK3CB_GAZ_Vodnik : UK3CB_GAZ_Vodnik_Base {
        class AcreRacks {
            class Rack_Commander {
                displayName = "$STR_ACRE_sys_rack_dashUpper";
                shortName = "$STR_ACRE_sys_rack_dashUpperShort";

                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                defaultComponents[] = {};

                allowedPositions[] = {
                    {"turret", [1]}
                };
                disabledPositions[] = {};

                intercom[] = {"Intercom_Crew"};
            };
        };

        class AcreIntercoms {
            class Intercom_Crew {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";

                allowedPositions[] = {
                    "driver", 
                    {"turret", "all"}
                };
                disabledPositions[] = {};
                masterPositions[] = {
                    {"turret", [1]}
                };

                limitedPositions[] = {
                    {"cargo", 0, 1}
                };
                numLimitedPositions = 1;

                connectedByDefault = 1;
            };
        };
    };

    class UK3CB_GAZ_Vodnik_MedEvac : UK3CB_GAZ_Vodnik_Base {
        class AcreRacks {
            class Rack_Commander {
                displayName = "$STR_ACRE_sys_rack_dashUpper";
                shortName = "$STR_ACRE_sys_rack_dashUpperShort";

                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                defaultComponents[] = {};

                allowedPositions[] = {
                    {"turret", [1]}
                };
                disabledPositions[] = {};

                intercom[] = {"Intercom_Crew"};
            };
        };

        class AcreIntercoms {
            class Intercom_Crew {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";

                allowedPositions[] = {
                    "driver", 
                    {"turret", "all"}
                };
                disabledPositions[] = {};
                masterPositions[] = {
                    {"turret", [1]}
                };

                limitedPositions[] = {
                    {"cargo", 0}
                };
                numLimitedPositions = 1;

                connectedByDefault = 1;
            };
        };
    };

    class UK3CB_GAZ_Vodnik_KVPT : UK3CB_GAZ_Vodnik_Base {
        class AcreRacks {
            class Rack_Commander {
                displayName = "$STR_ACRE_sys_rack_dashUpper";
                shortName = "$STR_ACRE_sys_rack_dashUpperShort";

                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                defaultComponents[] = {};

                allowedPositions[] = {
                    {"turret", [1]}
                };
                disabledPositions[] = {};

                intercom[] = {"Intercom_Crew"};
            };
        };

        class AcreIntercoms {
            class Intercom_Crew {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";

                allowedPositions[] = {
                    "driver", 
                    "gunner", 
                    {"turret", "all"}
                };
                disabledPositions[] = {};
                masterPositions[] = {
                    {"turret", [1]}
                };

                limitedPositions[] = {
                    {"cargo", 0, 1}
                };
                numLimitedPositions = 1;

                connectedByDefault = 1;
            };
        };
    };

    class UK3CB_GAZ_Vodnik_HMG : UK3CB_GAZ_Vodnik_Base {
        class AcreRacks {
            class Rack_Commander {
                displayName = "$STR_ACRE_sys_rack_dashUpper";
                shortName = "$STR_ACRE_sys_rack_dashUpperShort";

                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                defaultComponents[] = {};

                allowedPositions[] = {
                    "gunner"
                };
                disabledPositions[] = {};

                intercom[] = {"Intercom_Crew"};
            };
        };

        class AcreIntercoms {
            class Intercom_Crew {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";

                allowedPositions[] = {
                    "driver", 
                    "gunner", 
                    {"turret", "all"}
                };
                disabledPositions[] = {};
                masterPositions[] = {
                    "gunner"
                };

                limitedPositions[] = {
                    {"cargo", 0, 1}
                };
                numLimitedPositions = 1;

                connectedByDefault = 1;
            };
        };
    };

    class UK3CB_GAZ_Vodnik_GMG : UK3CB_GAZ_Vodnik_Base {
        class AcreRacks {
            class Rack_Commander {
                displayName = "$STR_ACRE_sys_rack_dashUpper";
                shortName = "$STR_ACRE_sys_rack_dashUpperShort";

                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                defaultComponents[] = {};

                allowedPositions[] = {
                    "gunner"
                };
                disabledPositions[] = {};

                intercom[] = {"Intercom_Crew"};
            };
        };

        class AcreIntercoms {
            class Intercom_Crew {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";

                allowedPositions[] = {
                    "driver", 
                    "gunner", 
                    {"turret", "all"}
                };
                disabledPositions[] = {};
                masterPositions[] = {
                    "gunner"
                };

                limitedPositions[] = {
                    {"cargo", 0, 1}
                };
                numLimitedPositions = 1;

                connectedByDefault = 1;
            };
        };
    };

    class UK3CB_GAZ_Vodnik_PKT : UK3CB_GAZ_Vodnik_Base {
        class AcreRacks {
            class Rack_Commander {
                displayName = "$STR_ACRE_sys_rack_dashUpper";
                shortName = "$STR_ACRE_sys_rack_dashUpperShort";

                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                defaultComponents[] = {};

                allowedPositions[] = {
                    {"turret", [1]}
                };
                disabledPositions[] = {};

                intercom[] = {"Intercom_Crew"};
            };
        };

        class AcreIntercoms {
            class Intercom_Crew {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";

                allowedPositions[] = {
                    "driver", 
                    "commander", 
                    "gunner", 
                    {"turret", "all"}
                };
                disabledPositions[] = {};
                masterPositions[] = {
                    {"turret", [1]}
                };

                limitedPositions[] = {
                    {"cargo", 0, 1}}
                    ;
                numLimitedPositions = 1;

                connectedByDefault = 1;
            };
        };
    };

    class UK3CB_GAZ_Vodnik_Cannon : UK3CB_GAZ_Vodnik_Base {
        class AcreRacks {
            class Rack_Commander {
                displayName = "$STR_ACRE_sys_rack_dashUpper";
                shortName = "$STR_ACRE_sys_rack_dashUpperShort";

                componentName = "ACRE_VRC103";
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                defaultComponents[] = {};

                allowedPositions[] = {
                    {"turret", [1]}
                };
                disabledPositions[] = {};

                intercom[] = {"Intercom_Crew"};
            };
        };

        class AcreIntercoms {
            class Intercom_Crew {
                displayName = "$STR_ACRE_sys_intercom_crewIntercom";
                shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";

                allowedPositions[] = {
                    "driver", 
                    "commander", 
                    {"turret", "all"}
                };
                disabledPositions[] = {};
                masterPositions[] = {
                    {"turret", [1]}
                };

                limitedPositions[] = {
                    {"cargo", 0, 1}
                };
                numLimitedPositions = 1;

                connectedByDefault = 1;
            };
        };
    };

};