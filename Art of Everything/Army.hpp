#ifndef ARMY_HPP
#define ARMY_HPP

#include "Country.hpp"
#include "Soldier.hpp"

__interface IArmy{
public:

};

template<SoldierType ST>
class Army : public IArmy {
private:
	Country* country;
	Soldier<ST>* soldiers;
};

#endif // !ARMY_HPP