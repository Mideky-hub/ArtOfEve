#ifndef COUNTRY_RELATION_HPP
#define COUNTRY_RELATION_HPP

#include <map>
#include <unordered_map>

#include "Country.hpp"

enum Country_Relation {
	Economic,
	Religious,
	Defense,
	Politic,
	Cultural
};

enum Country_Tension {
	Economic_ten,
	Religious_ten,
	Defense_ten,
	Politic_ten,
	Cultural_ten
};

struct Ally {
	Country country_name;
	std::unordered_map<Country_Relation, int> rel_level;
};

struct Ennemy {
	Country country_name;
	std::unordered_map<Country_Tension, int> rel_level;
};

#endif // !COUNTRY_RELATION_HPP