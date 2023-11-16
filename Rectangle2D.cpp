#include "Rectangle2D.hpp"


double Rectangle2D::getWidth() {
	return this->dim1;
}

double Rectangle2D::getHeight() {
	return this->dim2;
}

double Rectangle2D::getPerimeter() {
	return 2 * (this->dim1 + this->dim2);
}

double Rectangle2D::getSurfaceArea() {
	return this->dim1 * this->dim2;
}

std::string Rectangle2D::getInfoStr() {
	std::string res = "Rectangle{w=";
	res += std::to_string(this->dim1);
	res += ";h=";
	res += std::to_string(this->dim2);
	res += "}";
	return res;
}

