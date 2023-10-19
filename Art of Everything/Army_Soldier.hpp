#ifndef ARMY_SOLDIER_HPP
#define ARMY_SOLDIER_HPP

#include "Person.hpp"

namespace army_person {
	__interface IMilitaryPerson : public IPerson {
public:
	};

	namespace land_soldier {
		__interface ILandSoldier : public IMilitaryPerson {
public:

		};

		class LandSoldier : public ILandSoldier {

		};
	}

	namespace air_soldier {
		__interface IAirSoldier : public IMilitaryPerson {
public:

		};

		class AirSoldier : public IAirSoldier {

		};
	}

	namespace naval_soldier {
		__interface INavalSoldier : public IMilitaryPerson {
public:

		};

		class NavalSoldier : public INavalSoldier {

		};
	}
}

#endif