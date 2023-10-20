#ifndef GEOGRAPHY_HPP
#define GEOGRAPHY_HPP

#include <string>
#include <vector>
#include <memory>
#include <unordered_map>

#include "Country_dec.hpp"

struct ZipCode {
	std::string zip_code;
};

struct Address {
	const uint64_t street_number;
	const std::string street_name;
};

struct City {
	std::string name;
	uint64_t population;
	ZipCode zip_code;
	State state;
};

struct State {
	std::string name;
	uint64_t population;
	std::vector<City> cities;
	Country country;
};

struct Country {
	std::string name;
	City capital;
	uint64_t population;
	State states;
};



#endif // !GEOGRAPHY_HPP