#pragma once
class Poligonos
{
public:
	double lado;
	double width;//ancho
	double height;//altura
	int type;
	double area;
	double perimeter;
	int ID;

	Poligonos(int ID) { this->ID = ID;  lado = 0; width = 0; height = 0; type = 0; area = 0; perimeter = 0; }; // constructor
	~Poligonos() {}; //destructor
	virtual double GetArea();
	virtual double GetPerimeter();
};

