#pragma once
#include "Poligonos.h"
class Triangulo :public Poligonos
{
public:
    Triangulo(int ID) : Poligonos(ID) {};
    ~Triangulo() {};
    double GetArea() override;
    double GetPerimeter() override;
};
