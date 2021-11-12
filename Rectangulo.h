#pragma once
#include "Poligonos.h"
class Rectangulo:public Poligonos
{
public:
    Rectangulo(int ID) : Poligonos(ID) {};
    ~Rectangulo() {};
    double GetArea() override;
    double GetPerimeter() override;
};

