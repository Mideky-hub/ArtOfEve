#ifndef PERSON_HPP
#define PERSON_HPP

#include <memory>
#include <string>
#include <sstream>
#include <vector>

#include <boost/tuple/tuple.hpp>
#include <boost/unordered_map.hpp>

#include "Time.hpp" // Single depedency
#include "Job.hpp" // Single depedency
#include "Social_Security.hpp"	// Single depedency
#include "Location.hpp"	// Country.hpp -> Country_dec.hpp
#include "Education.hpp" // Single depedency

struct Name {
	const std::string name;
	const std::string surname;

	Name() = default;
	Name(const Name& name) : name(name.name), surname(name.surname) {}
	Name(const std::string name, const std::string surname) : name(name), surname(surname) {}
	~Name() {}
};

__interface IPerson {
public:
	virtual Name get_name() const noexcept = 0;
	virtual Social_Security_Number get_ssn() const noexcept = 0;
	virtual Time get_birth_date() const noexcept = 0;
	virtual Job get_job() const noexcept = 0;
	virtual uint64_t get_salary() const noexcept = 0;
	virtual uint64_t get_yoe() const noexcept = 0;
};

class Person : public IPerson {
private:
	Name name;
	Date date_of_birth;
	uint64_t age;
	std::vector<std::shared_ptr<Job>> jobs;
	const Social_Security_Number ssn;
	Address address;
	//things to add: education, criminal record, medical record, phone number, email, etc.
public:
};

#endif // !PERSON_HPP
