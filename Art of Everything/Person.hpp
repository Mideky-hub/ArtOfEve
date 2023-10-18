#ifndef PERSON_HPP
#define PERSON_HPP

#include <memory>
#include <string>
#include <sstream>
#include <vector>

#include <boost/tuple/tuple.hpp>
#include <boost/unordered_map.hpp>

#include "Time.hpp"
#include "Job.hpp"	
#include "Social_Security.hpp"
#include "Geography.hpp"	//Call Army.hpp & Geography_dec.hpp
#include "Education.hpp"

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
	Address address;
	//things to add: education, criminal record, medical record, phone number, email, etc.
public:
};

__interface IFamily {
public:
	
};

class Family : public IFamily {
private:
	boost::unordered_map<RelationType, std::vector<std::shared_ptr<Person>>> relations;
	
};

__interface IPersonManager {
public:
	
};

class PersonManager : public IPersonManager {

};



#endif // !PERSON_HPP
