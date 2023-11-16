#include "Square2D.hpp"


Square2D::Square2D() :
	Rectangle2D()
{}

Square2D::Square2D(double size) :
	Rectangle2D(size, size)
{}

double Square2D::getSize() {
	return this->dim1;
}

std::string Square2D::getInfoStr() {
	std::string res = "Square{s=";
	res += std::to_string(this->dim1);
	res += "}";
	return res;
}
