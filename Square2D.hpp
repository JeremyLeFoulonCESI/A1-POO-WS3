#pragma once
#include "Rectangle2D.hpp"

class Square2D : public Rectangle2D
{
public:
    Square2D();
    Square2D(double size);
    double getSize();
    std::string getInfoStr() override;
};

