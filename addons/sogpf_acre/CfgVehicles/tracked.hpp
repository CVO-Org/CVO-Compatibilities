class Tank_F;
class vn_armor_tank_base : Tank_F {
    acre_hasInfantryPhone = 1;
    acre_infantryPhoneDisableRinging = 1;
    acre_infantryPhoneIntercom[] = {"Intercom_1"};

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

            limitedPositions[] = {};
            numLimitedPositions = 0;

            connectedByDefault = 1;
        };
    };
};


class vn_armor_m41_base;
class vn_b_armor_m41_01_01_base: vn_armor_m41_base {
    class AcreRacks {
        class Rack_1 {
            displayName = "FM Communication 1";
            shortName = "FM 1";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "inside"
            };
            disabledPositions[] = {
                "driver",
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };

        class Rack_2 {
            displayName = "FM Communication 2";
            shortName = "FM 2";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "inside"
            };
            disabledPositions[] = {
                "driver",
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };
    };
};

class vn_b_armor_m41_01_02_base: vn_armor_m41_base {
    class AcreRacks {
        class Rack_1 {
            displayName = "FM Communication 1";
            shortName = "FM 1";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "inside"
            };
            disabledPositions[] = {
                "driver",
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };

        class Rack_2 {
            displayName = "FM Communication 2";
            shortName = "FM 2";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "inside"
            };
            disabledPositions[] = {
                "driver",
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };
    };
};


class vn_armor_m48a3_base;
class vn_b_armor_m48_01_01: vn_armor_m48a3_base {
    class AcreRacks {
        class Rack_1 {
            displayName = "FM Communication 1";
            shortName = "FM 1";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "inside"
            };
            disabledPositions[] = {
                "driver",
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };

        class Rack_2 {
            displayName = "FM Communication 2";
            shortName = "FM 2";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "inside"
            };
            disabledPositions[] = {
                "driver",
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };
    };
};

class vn_b_armor_m48_01_02: vn_armor_m48a3_base {
    class AcreRacks {
        class Rack_1 {
            displayName = "FM Communication 1";
            shortName = "FM 1";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "inside"
            };
            disabledPositions[] = {
                "driver",
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };

        class Rack_2 {
            displayName = "FM Communication 2";
            shortName = "FM 2";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "inside"
            };
            disabledPositions[] = {
                "driver",
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };
    };
};


class vn_armor_m67a2_base;
class vn_b_armor_m67_01_01: vn_armor_m67a2_base {
    class AcreRacks {
        class Rack_1 {
            displayName = "FM Communication 1";
            shortName = "FM 1";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "inside"
            };
            disabledPositions[] = {
                "driver",
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };

        class Rack_2 {
            displayName = "FM Communication 2";
            shortName = "FM 2";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "inside"
            };
            disabledPositions[] = {
                "driver",
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };
    };
};

class vn_b_armor_m67_01_02: vn_armor_m67a2_base {
    class AcreRacks {
        class Rack_1 {
            displayName = "FM Communication 1";
            shortName = "FM 1";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "inside"
            };
            disabledPositions[] = {
                "driver",
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };

        class Rack_2 {
            displayName = "FM Communication 2";
            shortName = "FM 2";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "inside"
            };
            disabledPositions[] = {
                "driver",
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };
    };
};


class APC_Tracked_01_base_F;
class vn_armor_m113_base: APC_Tracked_01_base_F {
    acre_hasInfantryPhone = 1;
    acre_infantryPhoneDisableRinging = 1;
    acre_infantryPhoneIntercom[] = {"Intercom_1"};

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
            disabledPositions[] = {
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };
    };

    class AcreIntercoms {
        class Intercom_1 {
            displayName = "$STR_ACRE_sys_intercom_crewIntercom";
            shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";

            allowedPositions[] = {
                "driver",
                {"turret", {0}}
            };
            disabledPositions[] = {};
            masterPositions[] = {
                {"turret", {0}},
                "commander"
            };

            limitedPositions[] = {
                {"turret", "all"},
                {"cargo", "all"}, 
                {"ffv", "all"}
            };
            numLimitedPositions = 3;

            connectedByDefault = 1;
        };
    };
};

class vn_armor_m113_01_base;
class vn_b_armor_m113_01: vn_armor_m113_01_base {
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
            disabledPositions[] = {
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };
    };
};

class vn_b_armor_m113_01_aus_army: vn_armor_m113_01_base {
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
            disabledPositions[] = {
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };
    };
};

class vn_b_armor_m113_01_rok_army: vn_armor_m113_01_base {
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
            disabledPositions[] = {
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };
    };
};

class vn_armor_m113_acav_m2_base;
class vn_b_armor_m113_acav_01: vn_armor_m113_acav_m2_base {
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
            disabledPositions[] = {
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };
    };
};

class vn_b_armor_m113_acav_01_rok_army: vn_armor_m113_acav_m2_base {
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
            disabledPositions[] = {
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };
    };
};

class vn_armor_m113_acav_m1919_base;
class vn_b_armor_m113_acav_02: vn_armor_m113_acav_m1919_base {
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
            disabledPositions[] = {
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };
    };
};

class vn_b_armor_m113_acav_02_rok_army: vn_armor_m113_acav_m1919_base {
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
            disabledPositions[] = {
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };
    };
};

class vn_armor_m113_acav_m60_base;
class vn_b_armor_m113_acav_03: vn_armor_m113_acav_m60_base {
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
            disabledPositions[] = {
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };
    };
};

class vn_b_armor_m113_acav_03_rok_army: vn_armor_m113_acav_m60_base {
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
            disabledPositions[] = {
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };
    };
};

class vn_armor_m113_acav_m134_base;
class vn_b_armor_m113_acav_04: vn_armor_m113_acav_m134_base {
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
            disabledPositions[] = {
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };
    };
};

class vn_b_armor_m113_acav_04_rok_army: vn_armor_m113_acav_m134_base {
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
            disabledPositions[] = {
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };
    };
};

class vn_armor_m113_acav_mk18_base;
class vn_b_armor_m113_acav_05: vn_armor_m113_acav_mk18_base {
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
            disabledPositions[] = {
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };
    };
};

class vn_b_armor_m113_acav_05_rok_army: vn_armor_m113_acav_mk18_base {
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
            disabledPositions[] = {
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };
    };
};

class vn_armor_m113_acav_m40_base;
class vn_b_armor_m113_acav_06: vn_armor_m113_acav_m40_base {
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
            disabledPositions[] = {
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };
    };
};

class vn_b_armor_m113_acav_06_rok_army: vn_armor_m113_acav_m40_base {
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
            disabledPositions[] = {
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };
    };
};

class vn_armor_m125_base;
class vn_b_armor_m125_01: vn_armor_m125_base {
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
            disabledPositions[] = {
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };
    };
};

class vn_b_armor_m125_01_aus_army: vn_armor_m125_base {
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
            disabledPositions[] = {
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };
    };
};

class vn_b_armor_m125_01_rok_army: vn_armor_m125_base {
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
            disabledPositions[] = {
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };
    };
};


class vn_armor_m132_base;
class vn_b_armor_m132_01: vn_armor_m132_base {
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
            disabledPositions[] = {
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };
    };
};


class vn_armor_m577_01_base;
class vn_b_armor_m577_01: vn_armor_m577_01_base {
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
                "commander"
            };
            disabledPositions[] = {
                {"turnedout", "all"}
            };

            intercom[] = {Intercom_1};
        };

        class Rack_2 {
            displayName = "FM Communication 1";
            shortName = "FM 1";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "inside"
            };
            disabledPositions[] = {
                "driver"
                {"turnedout", "all"}
            };

            intercom[] = {};
        };

        class Rack_3 {
            displayName = "FM Communication 2";
            shortName = "FM 2";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "inside"
            };
            disabledPositions[] = {
                "driver"
                {"turnedout", "all"}
            };

            intercom[] = {};
        };
    };
};

class vn_b_armor_m577_01_aus_army: vn_armor_m577_01_base {
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
                "commander"
            };
            disabledPositions[] = {
                {"turnedout", "all"}
            };

            intercom[] = {Intercom_1};
        };

        class Rack_2 {
            displayName = "FM Communication 1";
            shortName = "FM 1";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "inside"
            };
            disabledPositions[] = {
                "driver"
                {"turnedout", "all"}
            };

            intercom[] = {};
        };

        class Rack_3 {
            displayName = "FM Communication 2";
            shortName = "FM 2";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "inside"
            };
            disabledPositions[] = {
                "driver"
                {"turnedout", "all"}
            };

            intercom[] = {};
        };
    };
};

class vn_b_armor_m577_01_rok_army: vn_armor_m577_01_base {
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
                "commander"
            };
            disabledPositions[] = {
                {"turnedout", "all"}
            };

            intercom[] = {Intercom_1};
        };

        class Rack_2 {
            displayName = "FM Communication 1";
            shortName = "FM 1";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "inside"
            };
            disabledPositions[] = {
                "driver"
                {"turnedout", "all"}
            };

            intercom[] = {};
        };

        class Rack_3 {
            displayName = "FM Communication 2";
            shortName = "FM 2";

            componentName = "ACRE_VRC64";
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            defaultComponents[] = {};

            allowedPositions[] = {
                "inside"
            };
            disabledPositions[] = {
                "driver"
                {"turnedout", "all"}
            };

            intercom[] = {};
        };
    };
};

class vn_armor_m577_02_base;
class vn_b_armor_m577_02: vn_armor_m577_02_base {
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
            disabledPositions[] = {
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };
    };
};

class vn_b_armor_m577_02_aus_army: vn_armor_m577_02_base {
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
            disabledPositions[] = {
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };
    };
};

class vn_b_armor_m577_02_rok_army: vn_armor_m577_02_base {
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
            disabledPositions[] = {
                {"turnedout", "all"}
            };

            intercom[] = {"Intercom_1"};
        };
    };
};
