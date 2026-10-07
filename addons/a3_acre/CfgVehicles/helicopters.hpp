class Helicopter_Base_H;

class Heli_Transport_01_base_F: Helicopter_Base_H {
    class AcreIntercoms {
        class Intercom_1 {
            limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
        };
        class Intercom_2 {
            allowedPositions[] = {"crew", {"cargo", "all"}, {"ffv", "all"}};
        };
    };
};