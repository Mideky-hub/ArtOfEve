#ifndef ARMY_HPP
#define ARMY_HPP

template<typename T>
__interface IArmy {
public:
	
};

template<typename T>
__interface IGround_Army : public IArmy<T> {
public:
	
};

template<typename Ground_Soldier>
class Ground_Army : public IGround_Army<Ground_Soldier> {

};

template<typename T>
__interface IAir_Army : public IArmy<T> {
public:

};

template<typename Air_Soldier>
class Air_Army : public IAir_Army<Air_Soldier> {
private:
	std::vector<Air_Soldier> soldiers;

};

template<typename T>
__interface IAir_Army : public IArmy<T> {
public:

};

template<typename Naval_Solider>
class Naval_Army : public IAir_Army<Naval_Soldier> {
private:
	
};

#endif // !ARMY_HPP