#ifndef AIRINFANTERY_HPP
#define AIRINFANTERY_HPP

#include "Airplane.hpp"

__interface IFighter : public IAirplane {
public:
	virtual void attack() = 0;
};

class Fighter : public Airplane, public IFighter {
private:

};

#endif // !AIRINFANTERY_HPP