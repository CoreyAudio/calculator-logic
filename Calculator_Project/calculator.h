#pragma once
#include <iostream>

class calculator
{
	double a;
	double b;
	char op;

public:
	calculator(double n1 = 0, double n2 = 0, char o = 0);

	void ObtainNumbers();
	double Math() const;

};
