#ifndef LOCATION_HPP
#define LOCATION_HPP

#include <string>

struct ZipCode {
	std::string zip_code;
};

struct City {
	std::string name;
	uint64_t population;
	ZipCode zip_code;
};

struct Country {
	std::string name;
	Army army;
	City capital;
};

struct Location {
	std::string street_address;
	std::string city;
	std::string state;
	std::string zip_code;
};

struct Address {
	const uint64_t street_number;
	const std::string street_name;

};


#endif // !LOCATION_HPP