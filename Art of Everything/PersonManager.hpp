#ifndef PERSON_MANAGER_HPP
#define PERSON_MANAGER_HPP

#include "Soldier.hpp"
#include "Civilian.hpp"

__interface IPersonManager : public IPerson, public ISoldier {
public:

};

class PersonManager : public IPersonManager, public Person, public Soldier {
private:

};

#endif // !PERSON_MANAGER_HPP