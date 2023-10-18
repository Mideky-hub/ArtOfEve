#ifndef EDUCATION_HPP
#define EDUCATION_HPP

enum class Domain {
    ComputerScience,
    InformationTechnology,
    SoftwareEngineering,
    ComputerEngineering,
    ElectricalEngineering,
    MechanicalEngineering,
    CivilEngineering,
    ChemicalEngineering,
    AerospaceEngineering,
    BiomedicalEngineering,
    EnvironmentalEngineering,
    IndustrialEngineering,
    MaterialsScience,
    Physics,
    Chemistry,
    Biology,
    Mathematics,
    Statistics,
    Economics,
    Finance,
    BusinessAdministration,
    Marketing,
    Accounting,
    HumanResources,
    InternationalRelations,
    PoliticalScience,
    Psychology,
    Sociology,
    Anthropology,
    History,
    Geography,
    Literature,
    Linguistics,
    Philosophy,
    Music,
    FineArts,
    Theater,
    Film,
    Architecture,
    Education,
    Nursing,
    Medicine,
    Dentistry,
    Pharmacy,
    VeterinaryMedicine,
    Law,
    CriminalJustice,
    SocialWork,
    PublicHealth,
    EnvironmentalScience,
    Geology,
    Astronomy,
    Astrophysics,
    Agriculture,
    Forestry,
    WildlifeManagement,
    CulinaryArts,
    HospitalityManagement,
    SportsScience,
    ReligiousStudies,
    Other
};

enum class Level {
	Associate,
	Bachelor,
	Master,
	Doctoral
};

struct Degree {
	Domain domain;
	Level level;
};

#endif // !EDUCATION_HPP
