#include "ShapeStore.hpp"
#include <iostream>


ShapeStore::ShapeStore() {
	this->shapes = 0;
	this->size = 0;
}

bool ShapeStore::append_slot() {
	if (!this->shapes) {
		Shape2D* new_buffer = (Shape2D*)std::calloc(1, sizeof(Shape2D));
		if (!new_buffer)
			return 0;
		this->shapes = new_buffer;
		this->size++;
		return 1;
	}
	Shape2D* new_buffer = (Shape2D*)std::calloc(1, (this->size + 1) * sizeof(Shape2D));
	if (!new_buffer)
		return 0;
	std::memcpy(new_buffer, this->shapes, this->size * sizeof(Shape2D));
	std::free(this->shapes);
	this->shapes = new_buffer;
	this->size++;
	return 1;
}

bool ShapeStore::append(Shape2D* pelement) {
	if (!this->append_slot())
		return 0;
	this->shapes[this->size - 1] = *pelement;
	return 1;
}

Shape2D* ShapeStore::get(size_t index) {
	if (index >= this->size)
		return nullptr;
	return this->shapes + index;
}

std::string ShapeStore::getInfoStr() {
	std::string result = "ShapeStore{";
	for (size_t i = 0; i < this->size; i++) {
		result += this->shapes[i].getInfoStr();
		result += ",\n";
	}
	result += "}";
	return result;
}

ShapeStore::~ShapeStore() {
	if (this->shapes) {
		std::free(this->shapes);
		this->shapes = nullptr;
		this->size = 0;
	}
}

