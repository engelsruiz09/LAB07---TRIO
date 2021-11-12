#include "Triangulo.h"
#include <math.h>  
double Triangulo::GetArea() {
	return (width * height) / 2;
}
double Triangulo::GetPerimeter() {
	return (sqrt(pow(width, 2) + pow(height, 2)) * 2 + width);
}