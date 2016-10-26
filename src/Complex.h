/*
 * Complex.h
 *
 *  Created on: Jan 7, 2015
 *      Author: lillaccg
 */

using namespace std;

#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>
#include <cmath>

class Complex {
	double re, im;

public:
	Complex (double r, double i);
	virtual ~Complex ();

	double getRe ();
	double getIm ();
	double getMag ();
	double getPhase ();

	void setRe (double r);
	void setIm (double i);
	void setMag (double m);
	void setPhase (double p);

	void printRect ();
	void printPol ();

	Complex& operator+= (const Complex& rhs);
};

Complex operator+ (Complex lhs, const Complex& rhs);

#endif /* COMPLEX_H_ */
