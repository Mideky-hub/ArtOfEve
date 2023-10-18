#ifndef GEOGRAPHY_HPP
#define GEOGRAPHY_HPP

#include <string>
#include <vector>
#include <memory>

#include <boost/tuple/tuple.hpp>

#include "Army.hpp"
#include "Geography_dec.hpp"

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

struct Address {
	const uint64_t street_number;
	const std::string street_name;
};

struct ZipCode {
	std::string zip_code;
};

struct City {
	std::string name;
	uint64_t population;
	std::shared_ptr<ZipCode> zip_code;
	std::shared_ptr<State> state;
};

struct State {
	std::string name;
	uint64_t population;
	std::vector<City> cities;
	std::shared_ptr<Country> country;
};

struct Ally {
	std::shared_ptr<Country> country_name;
	std::vector<boost::tuple<Country_Relation, int>> rel_level;
};

struct Ennemy {
	std::shared_ptr<Country> country_name;
	std::vector<std::pair<Country_Relation, int>> rel_level;
};

struct Country {
	std::string name;
	std::shared_ptr<Army> army;
	std::shared_ptr<City> capital;
	uint64_t population;
	std::vector<State> states;

	std::vector<std::shared_ptr<Ally>> allies;
	std::vector<std::shared_ptr<Ennemy>> ennemies;
};

struct Location {
	std::shared_ptr<Address> street_address;
	std::shared_ptr<City> city;
};

#endif // !GEOGRAPHY_HPP