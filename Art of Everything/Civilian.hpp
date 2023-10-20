#ifndef CIVILIAN_HPP
#define CIVILIAN_HPP

#include "Person.hpp"

__interface ICivilian : public IPerson {
public:
	
};

class Civilian : public Person, public ICivilian {
private:

};

#endif // !CIVILIAN_HPP