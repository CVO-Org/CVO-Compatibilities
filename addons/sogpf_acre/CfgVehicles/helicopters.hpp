class vn_helicopter_base;

// AH-1 Variants
class vn_air_ah1g_01_base: vn_helicopter_base {
    acre_hasInfantryPhone = 0;

    class AcreRacks {
        class Rack_1 {
            displayName = "FM Communication";
            shortName = "FM";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "driver"
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
                "driver"
            };

            limitedPositions[] = {};
            numLimitedPositions = 0;

            connectedByDefault = 1;
        };
    };
};

// CH-34 Variants
class vn_air_ch34_01_base: vn_helicopter_base {
    acre_hasInfantryPhone = 0;

    class AcreRacks {
        class Rack_1 {
            displayName = "FM Communication";
            shortName = "FM";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "driver",
                {"turret", {0}}
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
                "gunner"
            };

            limitedPositions[] = {
                {"cargo", "all"}, 
                {"ffv", "all"}
            };
            numLimitedPositions = 4;

            connectedByDefault = 1;
        };
    };
};

class vn_air_ch34_m60_x2_base;
class vn_air_ch34_stinger_base: vn_air_ch34_m60_x2_base {
    acre_hasInfantryPhone = 0;

    class AcreRacks {
        class Rack_1 {
            displayName = "FM Communication";
            shortName = "FM";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "driver",
                "gunner"
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
                {"turret", {2}}
            };

            limitedPositions[] = {
                {"cargo", "all"}, 
                {"ffv", "all"}
            };
            numLimitedPositions = 4;

            connectedByDefault = 1;
        };
    };
};

// CH-47 Variants
class vn_air_ch47_base: vn_helicopter_base {
    acre_hasInfantryPhone = 0;

    class AcreRacks {
        class Rack_1 {
            displayName = "FM Communication";
            shortName = "FM";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "driver",
                {"turret", {0}}
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
                "gunner"
            };

            limitedPositions[] = {
                {"cargo", "all"}, 
                {"ffv", "all"}
            };
            numLimitedPositions = 4;

            connectedByDefault = 1;
        };
    };
};

class vn_air_ach47_base: vn_air_ch47_base {
    acre_hasInfantryPhone = 0;

    class AcreRacks {
        class Rack_1 {
            displayName = "FM Communication";
            shortName = "FM";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "driver",
                {"turret", {0}}
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
                {"turret", {0}}
            };

            limitedPositions[] = {
                {"cargo", "all"}, 
                {"ffv", "all"}
            };
            numLimitedPositions = 4;

            connectedByDefault = 1;
        };
    };
};

class vn_b_air_ach47_01_01: vn_air_ach47_base {
    class AcreRacks {
        class Rack_1 {
            displayName = "FM Communication";
            shortName = "FM";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "driver",
                {"turret", {0}}
            };
            disabledPositions[] = {};

            intercom[] = {QGVAR(intercom_ach47)};
        };
    };
};

class vn_b_air_ach47_02_01: vn_air_ach47_base {
    class AcreRacks {
        class Rack_1 {
            displayName = "FM Communication";
            shortName = "FM";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "driver",
                {"turret", {0}}
            };
            disabledPositions[] = {};

            intercom[] = {QGVAR(intercom_ach47)};
        };
    };
};

class vn_b_air_ach47_03_01: vn_air_ach47_base {
    class AcreRacks {
        class Rack_1 {
            displayName = "FM Communication";
            shortName = "FM";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "driver",
                {"turret", {0}}
            };
            disabledPositions[] = {};

            intercom[] = {QGVAR(intercom_ach47)};
        };
    };
};

class vn_b_air_ach47_04_01: vn_air_ach47_base {
    class AcreRacks {
        class Rack_1 {
            displayName = "FM Communication";
            shortName = "FM";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "driver",
                {"turret", {0}}
            };
            disabledPositions[] = {};

            intercom[] = {QGVAR(intercom_ach47)};
        };
    };
};

class vn_b_air_ach47_05_01: vn_air_ach47_base {
    class AcreRacks {
        class Rack_1 {
            displayName = "FM Communication";
            shortName = "FM";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "driver",
                {"turret", {0}}
            };
            disabledPositions[] = {};

            intercom[] = {QGVAR(intercom_ach47)};
        };
    };
};

// OH-6A Variants
class vn_air_oh6a_base: vn_helicopter_base {
    acre_hasInfantryPhone = 0;

    class AcreRacks {
        class Rack_1 {
            displayName = "FM Communication";
            shortName = "FM";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "driver",
                "gunner"
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
                {"turret", {1}}
            };

            limitedPositions[] = {
                {"cargo", "all"}, 
                {"ffv", "all"}
            };
            numLimitedPositions = 1;

            connectedByDefault = 1;
        };
    };
};

class vn_air_oh6a_cargo_base: vn_air_oh6a_base {
    acre_hasInfantryPhone = 0;

    class AcreRacks {
        class Rack_1 {
            displayName = "FM Communication";
            shortName = "FM";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "driver", 
                {"turret", {0}}
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
                "gunner"
            };

            limitedPositions[] = {
                {"cargo", "all"}, 
                {"ffv", "all"}
            };
            numLimitedPositions = 1;

            connectedByDefault = 1;
        };
    };
};

// UH-1 Variants
class vn_air_uh1_01_base;
class vn_air_uh1d_base;

class vn_air_uh1c_base: vn_air_uh1_01_base {
    acre_hasInfantryPhone = 0;

    class AcreRacks {
        class Rack_1 {
            displayName = "FM Communication";
            shortName = "FM";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "driver", 
                "gunner"
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
                "gunner"
            };

            limitedPositions[] = {
                {"cargo", "all"}, 
                {"ffv", "all"}
            };
            numLimitedPositions = 1;

            connectedByDefault = 1;
        };
    };
};

class vn_air_uh1c_doorguns_base: vn_air_uh1c_base {
    acre_hasInfantryPhone = 0;

    class AcreRacks {
        class Rack_1 {
            displayName = "FM Communications";
            shortName = "FM";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "driver", 
                {"gunner", {0}}
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
                "gunner"
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

class vn_air_uh1d_01_base: vn_air_uh1d_base {
    acre_hasInfantryPhone = 0;

    class AcreRacks {
        class Rack_1 {
            displayName = "FM Communication";
            shortName = "FM";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "driver", 
                "gunner",
                {"turret", {1}}
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
                "gunner"
            };

            limitedPositions[] = {
                {"cargo", "all"}, 
                {"ffv", "all"}
            };
            numLimitedPositions = 1;

            connectedByDefault = 1;
        };
    };
};

class vn_air_uh1d_02_base: vn_air_uh1d_base {
    acre_hasInfantryPhone = 0;

    class AcreRacks {
        class Rack_1 {
            displayName = "FM Communication";
            shortName = "FM";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "driver", 
                {"turret", {0}}
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
                "gunner"
            };

            limitedPositions[] = {
                {"cargo", "all"}, 
                {"ffv", "all"}
            };
            numLimitedPositions = 1;

            connectedByDefault = 1;
        };
    };
};

class vn_air_uh1d_04_base: vn_air_uh1d_base {
    acre_hasInfantryPhone = 0;

    class AcreRacks {
        class Rack_1 {
            displayName = "FM Communication";
            shortName = "FM";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "driver", 
                "gunner"
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
                "gunner"
            };

            limitedPositions[] = {
                {"cargo", "all"}, 
                {"ffv", "all"}
            };
            numLimitedPositions = 1;

            connectedByDefault = 1;
        };
    };
};
