#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>
#include <sstream>
#include "Time.hpp"
#include "Job.hpp"

__interface ISocial_Security_Number {
public:
	virtual std::string get_ssn() const noexcept = 0;
	virtual bool is_ssn_valid(std::string ssn) const noexcept = 0;
};

class Social_Security_Number : public ISocial_Security_Number {
private:
	const int gender;
	const int year;
	const int month;
	const int area_code;
	const int group_code;
	const int serial_number;
	Social_Security_Number(const Social_Security_Number&& ssn)
		: gender(std::move(ssn.gender)), year(std::move(ssn.year)), month(std::move(ssn.month)), area_code(std::move(ssn.area_code)), group_code(std::move(ssn.group_code)), serial_number(std::move(ssn.serial_number)) {}
public:
	Social_Security_Number() = default;
	Social_Security_Number(const int gender, const int year, const int month, const int area_code, const int group_code, const int serial_number) :
		gender(gender), year(year), month(month), area_code(area_code), group_code(group_code), serial_number(serial_number) {}
	~Social_Security_Number() {}

	virtual std::string get_ssn() const noexcept override {
		std::stringstream ssnStream;
		ssnStream << gender << year << month << area_code << group_code << serial_number;
		return ssnStream.str();
	}

	virtual bool is_ssn_valid(std::string ssn) const noexcept override {
		if (ssn.length() != 9) {
			return false;
		}
		for (int i = 0; i < ssn.length(); i++) {
			if (!isdigit(ssn[i])) {
				return false;
			}
		}
		return true;
	}

	bool operator==(const Social_Security_Number& other) const noexcept {
		return this->gender == other.gender && this->year == other.year && this->month == other.month && this->area_code == other.area_code && this->group_code == other.group_code && this->serial_number == other.serial_number;
	}
};


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
	std::vector<Job*> jobs;
	const Social_Security_Number ssn;
	
	//things to add: address, phone number, email, 
};

#endif // !PERSON_HPP
