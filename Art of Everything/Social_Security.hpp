#ifndef SOCIAL_SECURITY_HPP
#define SOCIAL_SECURITY_HPP

#include <string>
#include <sstream>

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
	Social_Security_Number(const Social_Security_Number&& ssn) noexcept
		: gender(ssn.gender), year(ssn.year), month(ssn.month), area_code(ssn.area_code), group_code(ssn.group_code), serial_number(ssn.serial_number) {}
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
		for (size_t i{}; i++ < ssn.length();) {
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

#endif // !SOCIAL_SECURITY_HPP