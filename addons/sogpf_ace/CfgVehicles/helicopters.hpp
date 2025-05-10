class vn_helicopter_base;

// CH-47 Variants
class vn_air_ch47_transport_base;
class vn_air_ch47_02_base: vn_air_ch47_transport_base {
    attendant = 1;
    ace_medical_treatment_patientSeats[] = {2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
};

// Mi-2
class vn_air_mi2_base;
class vn_air_mi2_02_base: vn_air_mi2_base {
    attendant = 1;
    ace_medical_treatment_patientSeats[] = {0};
};

// UH-1 Variants
class vn_air_uh1d_base;
class vn_air_uh1d_01_base: vn_air_uh1d_base {
    attendant = 1;
    ace_medical_treatment_patientSeats[] = {0,1,2};
};
