#ifndef ARMY_HPP
#define ARMY_HPP

#include <vector>

struct Air_Soldier;

__interface IArmy {
public:
	
};

__interface IGround_Army : public IArmy {
public:
	
};

class Ground_Army : public IGround_Army {

};

__interface IAir_Army : public IArmy {
public:

};

class Air_Army : public IAir_Army {
private:
	std::vector<Air_Soldier> soldiers;

};

class Naval_Army : public IAir_Army {
private:
	
};

struct Army
{

};

#endif // !ARMY_HPP