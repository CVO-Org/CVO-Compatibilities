class Tank;
class Tank_F : Tank {
    class Turrets;
};

class APC_Tracked_01_base_F : Tank_F {
    class Turrets : Turrets {
        class MainTurret;
    };
};

class B_APC_Tracked_01_base_F : APC_Tracked_01_base_F {
    class Turrets : Turrets {
        class CommanderOptics;
        class MainTurret : MainTurret {
            class Turrets;
        };
    };
};

class B_APC_Tracked_01_AA_F : B_APC_Tracked_01_base_F {
    class CommanderOptics;

    class ACRE {
        class attenuation {
            class Compartment1 {
                Compartment1 = 0;
                Compartment2 = 0.6;
            };
            class Compartment2 {
                Compartment1 = 0.6;
                Compartment2 = 0;
            };
        };

        class attenuationTurnedOut {
            class Compartment1 {
                Compartment1 = 0.3;
                Compartment2 = 0.6;
            };
            class Compartment2 {
                Compartment1 = 0.6;
                Compartment2 = 0.3;
            };
        };
    };

    class Turrets : Turrets {
        class MainTurret : MainTurret {
            gunnerCompartments = "Compartment2";

            class Turrets : Turrets {
                class CommanderOptics : CommanderOptics {
                    gunnerCompartments = "Compartment2";
                };
            };
        };
    };

    driverCompartments = "Compartment1";
    cargoCompartments[] = {
        "Compartment2"
    };
};

class B_APC_Tracked_01_rcws_F : B_APC_Tracked_01_base_F {
    class ACRE {
        class attenuation {
            class Compartment1 {
                Compartment1 = 0;
                Compartment2 = 0.6;
                Compartment3 = 0.6;
                Compartment4 = 0.6;
            };
            class Compartment2 {
                Compartment1 = 0.6;
                Compartment2 = 0;
                Compartment3 = 0.6;
                Compartment4 = 0.6;
            };
            class Compartment3 {
                Compartment1 = 0.6;
                Compartment2 = 0.6;
                Compartment3 = 0;
                Compartment4 = 0.6;
            };
            class Compartment4 {
                Compartment1 = 0.6;
                Compartment2 = 0.6;
                Compartment3 = 0.6;
                Compartment4 = 0;
            };
        };

        class attenuationTurnedOut {
            class Compartment1 {
                Compartment1 = 0.3;
                Compartment2 = 0.6;
                Compartment3 = 0.6;
                Compartment4 = 0.6;
            };
            class Compartment2 {
                Compartment1 = 0.6;
                Compartment2 = 0.3;
                Compartment3 = 0.6;
                Compartment4 = 0.6;
            };
            class Compartment3 {
                Compartment1 = 0.6;
                Compartment2 = 0.6;
                Compartment3 = 0.3;
                Compartment4 = 0.6;
            };
            class Compartment4 {
                Compartment1 = 0.6;
                Compartment2 = 0.6;
                Compartment3 = 0.6;
                Compartment4 = 0.3;
            };
        };
    };

    class Turrets : Turrets {
        class CommanderOptics : CommanderOptics {
            gunnerCompartments = "Compartment3";
        };
        class MainTurret : MainTurret {
            gunnerCompartments = "Compartment2";
        };
    };

    driverCompartments = "Compartment1";
    cargoCompartments[] = {
        "Compartment4"
    };
};

class B_APC_Tracked_01_CRV_F : B_APC_Tracked_01_base_F {
    class ACRE {
        class attenuation {
            class Compartment1 {
                Compartment1 = 0;
                Compartment2 = 0.6;
                Compartment3 = 0.6;
            };
            class Compartment2 {
                Compartment1 = 0.6;
                Compartment2 = 0;
                Compartment3 = 0.6;
            };
            class Compartment3 {
                Compartment1 = 0.6;
                Compartment2 = 0.6;
                Compartment3 = 0;
            };
        };

        class attenuationTurnedOut {
            class Compartment1 {
                Compartment1 = 0.3;
                Compartment2 = 0.6;
                Compartment3 = 0.6;
            };
            class Compartment2 {
                Compartment1 = 0.6;
                Compartment2 = 0.3;
                Compartment3 = 0.6;
            };
            class Compartment3 {
                Compartment1 = 0.6;
                Compartment2 = 0.6;
                Compartment3 = 0.3;
            };
        };
    };

    class Turrets : Turrets {
        class CommanderOptics : CommanderOptics {
            gunnerCompartments = "Compartment3";
        };
        class MainTurret : MainTurret {
            gunnerCompartments = "Compartment2";
        };
    };

    driverCompartments = "Compartment1";
    cargoCompartments[] = {
        "Compartment3"
    };
};