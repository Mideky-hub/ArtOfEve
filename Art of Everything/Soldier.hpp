#ifndef SOLDIER_HPP
#define SOLDIER_HPP

#include "Person.hpp"

enum class SoldierType {
	Air, 
	Ground,
	Sea
};

__interface ISoldier : public IPerson {
	
};

template<SoldierType T>
class Soldier : public Person, public ISoldier {
private:
	
};

#endif // !SOLDIER_HPP