#ifndef PERSON_HPP
#define PERSON_HPP

#include <memory>
#include <string>
#include <sstream>
#include <unordered_map>
#include <vector>

#include "Time.hpp"
#include "Job.hpp"

__interface ISocial_Security_Number {
public:
};

struct Social_Security_Number : public ISocial_Security_Number {
	const int gender;
	const int year;
	const int month;
	const int area_code;
	const int group_code;
	const int serial_number;

	Social_Security_Number() = default;
	Social_Security_Number(const Social_Security_Number& ssn)
		: gender(ssn.gender), year(ssn.year), month(ssn.month), area_code(ssn.area_code), group_code(ssn.group_code), serial_number(ssn.serial_number) {}
	Social_Security_Number(const int gender, const int year, const int month, const int area_code, const int group_code, const int serial_number) :
		gender(gender), year(year), month(month), area_code(area_code), group_code(group_code), serial_number(serial_number) {}
	~Social_Security_Number() {}

	std::string get_ssn() const noexcept {
		std::stringstream ssnStream;
		ssnStream << gender << year << month << area_code << group_code << serial_number;
		return ssnStream.str();
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

};

enum class RelationType
{
	CoWorker,
	Friend,
	Classmate,
	Roommate,
	Neighbor,
	Girlfriend,
	Boyfriend,
	Partner,
	Fiance,
	SpouseToBe,
	ExSpouse,
	ExGirlfriend,
	ExBoyfriend,
	ExPartner,
	ExFiance,
	Knows,
	Superior,
	Subordinate,
	ExSpouseToBe,
	Parent,
	Child,
	Spouse,
	Grandparent,
	Grandchild,
	Sibling,
	Cousin,
	Aunt,
	Uncle,
	Nephew,
	Niece,
	StepParent,
	StepChild,
	StepSibling,
	StepGrandparent,
	StepGrandchild,
	StepCousin,
	StepAunt,
	StepUncle,
	StepNephew,
	StepNiece,
	AdoptiveParent,
	AdoptiveChild,
	AdoptiveSibling,
	AdoptiveGrandparent,
	AdoptiveGrandchild,
	AdoptiveCousin,
	AdoptiveAunt,
	AdoptiveUncle,
	AdoptiveNephew,
	AdoptiveNiece,
	AdoptiveStepParent,
	AdoptiveStepChild,
	AdoptiveStepSibling,
	AdoptiveStepGrandparent,
	AdoptiveStepGrandchild,
	AdoptiveStepCousin,
	AdoptiveStepAunt,
	AdoptiveStepUncle,
	AdoptiveStepNephew,
	AdoptiveStepNiece,
	Other
};

class Person : public IPerson {
private:
	Name name;
	Date date_of_birth;
	int age;
	std::vector<Job*> jobs;
	const Social_Security_Number ssn;
	std::unordered_map<std::shared_ptr<Person>, std::vector<RelationType>> relations;
};

#endif // !PERSON_HPP
