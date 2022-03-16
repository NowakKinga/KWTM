#ifdef USE_TRIGONOMETRY_DEGREE
	#include "trygonometria.h"
#else
	#include <cmath>
#endif
#include <iostream>

int main() {
#ifdef USE_TRIGONOMETRY_DEGREE
	double result = degreemath::sin(45.0); 
#else
	double result = std::sin(M_PI/4.0); 
#endif 
}