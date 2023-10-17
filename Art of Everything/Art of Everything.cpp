#include <iostream>
#include "Job.hpp"

int main(void)
{
	Job job("Software Engineer", "Develops software", std::vector<Skill>(), JobType::FullTime, Hierarchy(Hierachical_position::Employee), 100000, 0);
	return 0;
}