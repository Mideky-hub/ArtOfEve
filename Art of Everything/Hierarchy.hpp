#ifndef HIERARCHY_HPP
#define HIERARCHY_HPP

enum Hierarchical_position {
	Employee,
	Manager,
	Executive,
	CEO
};

struct Hierarchy {
	Hierarchical_position position;
	std::vector<Hierarchy*> superiors;

	Hierarchy() = default;
	Hierarchy(const Hierarchy& hierarchy) : position(hierarchy.position), superiors(hierarchy.superiors) {}
	Hierarchy(Hierarchical_position position) : position(position) {
		this->superiors = std::vector<Hierarchy*>();
	}
	Hierarchy(Hierarchical_position position, std::vector<Hierarchy*> superiors) : position(position), superiors(superiors) {}
	~Hierarchy() {}
};



#endif // !HIERARCHY_HPP