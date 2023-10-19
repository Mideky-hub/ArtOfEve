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
	const std::vector<std::string> middle_names;
	const std::string surname;

	Name() = default;
	Name(const Name& name) : name(name.name), surname(name.surname) {}
	Name(const std::string name, const std::vector<std::string> middle_names, const std::string surname) : name(name), middle_names(middle_names), surname(surname) {}
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
	uint64_t age;
	std::vector<Job*> jobs;
	const Social_Security_Number ssn;
};



#endif // !PERSON_HPP
