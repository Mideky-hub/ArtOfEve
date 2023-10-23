#ifndef SOLDIER_HPP
#define SOLDIER_HPP

#include "Person.hpp"


__interface ISoldier : public IPerson {
	
};

class Soldier : public Person, public ISoldier {
private:
	
};

#endif // !SOLDIER_HPP