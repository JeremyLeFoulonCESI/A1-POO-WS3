#pragma once
#include "Square2D.hpp"
#include <vector>

class ShapeStore
{
	Shape2D* shapes;
	size_t size;

	bool append_slot();

public:
	ShapeStore();
	bool append(Shape2D* pelement);
	Shape2D* get(size_t index);
	std::string getInfoStr();

	~ShapeStore();
};

