#include "math.h"

double sum(double a, double b) {
	return a + b;
}

double sub(double a, double b) {
	return a - b;
}

double mult(double a, double b) {
	return a * b;
}

double div(double a, double b) {
	return a / b;
}

double power(double a,double b) {
 for (int i = 1; i < b; ++i)
	a = mult(a, a);
		
 return a;
}