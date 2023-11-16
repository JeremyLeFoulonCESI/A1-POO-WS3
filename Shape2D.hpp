#pragma once
#include <string>

class Shape2D
{
protected:
	double dim1, dim2;

public:
	Shape2D();
	Shape2D(double dim1, double dim2);
	virtual double getPerimeter() = 0;
	virtual double getSurfaceArea() = 0;
	virtual std::string getInfoStr() = 0;
};

