class vn_wheeled_car_base;
class vn_wheeled_truck_base;

// Dirt Rangers
class vn_wheeled_lr2a_01_base;
class vn_b_wheeled_lr2a_01_aus_army: vn_wheeled_lr2a_01_base {
    delete AcreRacks;
};
class vn_b_wheeled_lr2a_01_nz_army: vn_wheeled_lr2a_01_base {
    delete AcreRacks;
};

class vn_wheeled_lr2a_02_base;
class vn_b_wheeled_lr2a_02_aus_army: vn_wheeled_lr2a_02_base {
    delete AcreRacks;
};
class vn_b_wheeled_lr2a_02_nz_army: vn_wheeled_lr2a_02_base {
    delete AcreRacks;
};

class vn_b_wheeled_lr2a_03_aus_army: vn_wheeled_lr2a_01_base {
    delete AcreRacks;
};
class vn_b_wheeled_lr2a_03_nz_army: vn_wheeled_lr2a_01_base {
    delete AcreRacks;
};

class vn_wheeled_lr2a_mg_01_base;
class vn_b_wheeled_lr2a_mg_01_aus_army: vn_wheeled_lr2a_mg_01_base {
    delete AcreRacks;
};
class vn_b_wheeled_lr2a_mg_01_nz_army: vn_wheeled_lr2a_mg_01_base {
    delete AcreRacks;
};

class vn_wheeled_lr2a_mg_02_base;
class vn_b_wheeled_lr2a_mg_02_aus_army: vn_wheeled_lr2a_mg_02_base {
    delete AcreRacks;
};
class vn_b_wheeled_lr2a_mg_02_nz_army: vn_wheeled_lr2a_mg_02_base {
    delete AcreRacks;
};

class vn_wheeled_lr2a_mg_03_base;
class vn_b_wheeled_lr2a_mg_03_aus_army: vn_wheeled_lr2a_mg_03_base {
    delete AcreRacks;
};
class vn_b_wheeled_lr2a_mg_03_nz_army: vn_wheeled_lr2a_mg_03_base {
    delete AcreRacks;
};


// M54 Trucks
class vn_wheeled_m54_base: vn_wheeled_truck_base {
    delete AcreRacks;
};


// M151 Car
class vn_wheeled_m151_base: vn_wheeled_car_base {
    class AcreRacks { // For some reason `delete AcreRacks;` doesn't work here, so just make the rack inaccessible
        class Rack_1 {
            allowedPositions[] = {};
        };
    };
};


// M274 Car
class vn_wheeled_m274_01_base;
class vn_b_wheeled_m274_01_01: vn_wheeled_m274_01_base {
    delete AcreRacks;
};

class vn_b_wheeled_m274_01_02: vn_wheeled_m274_01_base {
    delete AcreRacks;
};

class vn_b_wheeled_m274_01_03: vn_wheeled_m274_01_base {
    delete AcreRacks;
};


class vn_wheeled_m274_02_base;
class vn_b_wheeled_m274_02_01: vn_wheeled_m274_02_base {
    delete AcreRacks;
};

class vn_b_wheeled_m274_02_02: vn_wheeled_m274_02_base {
    delete AcreRacks;
};

class vn_b_wheeled_m274_02_03: vn_wheeled_m274_02_base {
    delete AcreRacks;
};


class vn_wheeled_m274_mg_01_base;
class vn_b_wheeled_m274_mg_01_01: vn_wheeled_m274_mg_01_base {
    delete AcreRacks;
};

class vn_b_wheeled_m274_mg_01_02: vn_wheeled_m274_mg_01_base {
    delete AcreRacks;
};


class vn_wheeled_m274_mg_02_base;
class vn_b_wheeled_m274_mg_02_01: vn_wheeled_m274_mg_02_base {
    delete AcreRacks;
};

class vn_b_wheeled_m274_mg_02_02: vn_wheeled_m274_mg_02_base {
    delete AcreRacks;
};


class vn_wheeled_m274_mg_03_base;
class vn_b_wheeled_m274_mg_03_01: vn_wheeled_m274_mg_03_base {
    delete AcreRacks;
};

class vn_b_wheeled_m274_mg_03_02: vn_wheeled_m274_mg_03_base {
    delete AcreRacks;
};
