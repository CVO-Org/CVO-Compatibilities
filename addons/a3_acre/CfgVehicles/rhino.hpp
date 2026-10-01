class AFV_Wheeled_01_base_F : Wheeled_APC_F {
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