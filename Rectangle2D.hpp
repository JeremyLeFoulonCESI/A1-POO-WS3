#pragma once
#include "Shape2D.hpp"

class Rectangle2D : public Shape2D
{
public:
	using Shape2D::Shape2D;
	double getWidth();
	double getHeight();
	double getPerimeter() override;
	double getSurfaceArea() override;
	std::string getInfoStr() override;
};

