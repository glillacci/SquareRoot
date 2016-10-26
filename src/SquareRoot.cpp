//============================================================================
// Name        : SquareRoot.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Complex.h"
#include "Matrix.h"

using namespace std;

double sq (double a);

int main()
{
	cout << sq (2) << endl << endl;

	Complex c1 (1,1);
	Complex c2 (2,2);
	c1+=c2;
	c1.printRect();
	Complex c = c1+c2;
	c.printRect();
	cout << endl;

	Matrix m (3, 3);
	m.print();
	cout << endl;
	m.setElement (2, 2, sq(2));
	m.print();
	cout << endl;
	cout << m[5] << endl;

	Matrix m2 (3,3);
	m2.setIdentity();
	m+=m2;
	m.print();

	return 0;
}


double sq (double a)
{
	// Set initial guess
	double x = a;

	// Newton iteration
	while ((x*x-a)>1e-8)
	{
		x = x - (x*x-a)/(2*x);
	}

	return x;
}
