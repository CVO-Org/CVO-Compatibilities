// Ifrit
class MRAP_02_base_F : Car_F {
    class AcreIntercoms {
        class Intercom_1 {
            displayName = "$STR_ACRE_sys_intercom_crewIntercom";
            shortName = "$STR_ACRE_sys_intercom_shortCrewIntercom";

            allowedPositions[] = {"driver", {"cargo", 0, 1}};

            connectedByDefault = 1;
        };
    };

    class AcreRacks {
        class Rack_1 {
            displayName = "$STR_ACRE_sys_rack_dashUpper";
            shortName = "$STR_ACRE_sys_rack_dashUpperShort";

            componentName = "ACRE_VRC110";
            isRadioRemovable = 1;

            allowedPositions[] = {"driver", {"cargo", 0}};
            intercom[] = {};
        };

        class Rack_2 {
            displayName = "$STR_ACRE_sys_rack_dashLower";
            shortName = "$STR_ACRE_sys_rack_dashLowerShort";

            componentName = "ACRE_VRC103";
            mountedRadio = "ACRE_PRC117F";
            isRadioRemovable = 0;

            allowedPositions[] = {"driver", {"cargo", 0}};
            intercom[] = {"Intercom_1"};
        };
    };

    class ACRE {
        class attenuation {
            class Compartment1 {
                Compartment1 = 0;

                delete Compartment2;
                delete Compartment3;
                delete Compartment4;
            };

            delete Compartment2;
            delete Compartment3;
            delete Compartment4;
        };
        class attenuationTurnedOut {
            class Compartment1 {
                Compartment1 = 0.3;

                delete Compartment2;
                delete Compartment3;
                delete Compartment4;
            };

            delete Compartment2;
            delete Compartment3;
            delete Compartment4;
        };
    };
};

// Ifrit (HMG/GMG)
class MRAP_02_hmg_base_F : MRAP_02_base_F {
    class AcreRacks : AcreRacks {
        class Rack_1 : Rack_1 {
            allowedPositions[] = {"driver", "gunner"};
        };

        class Rack_2 : Rack_2 {
            allowedPositions[] = {"driver", "gunner"};
        };
    };

    class AcreIntercoms : AcreIntercoms {
        class Intercom_1 : Intercom_1 {
            allowedPositions[] = {"driver", "gunner", {"cargo", 0}};
        };
    };
};