#pragma once
#include "Rectangulo.h"
class Cuadrado : public  Rectangulo
{
public:
    Cuadrado(int ID) : Rectangulo(ID) {};
    ~Cuadrado() {};
    double GetArea() override;
    double GetPerimeter() override;
};