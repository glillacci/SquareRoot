/*
 * Complex.cpp
 *
 *  Created on: Jan 7, 2015
 *      Author: lillaccg
 */

#include "Complex.h"

using namespace std;

Complex::Complex (double r, double i)
{
	re = r;
	im = i;
}

Complex::~Complex ()
{
	// TODO Auto-generated destructor stub
}

double Complex::getRe ()
{
	return re;
}

double Complex::getIm ()
{
	return im;
}

double Complex::getMag ()
{
	return sqrt (re*re + im*im);
}

double Complex::getPhase ()
{
	return atan (im/re);
}


void Complex::setRe (double r)
{
	re = r;
}

void Complex::setIm (double i)
{
	im = i;
}

void Complex::setMag (double m)
{
	// Get current phase
	double p = atan (im/re);

	// Calculate new rectangular coordinates
	re = m*cos(p);
	im = m*sin(p);
}

void Complex::setPhase (double p)
{
	// Get current magnitude
	double m = sqrt(re*re + im*im);

	// Calculate new rectangular coordinates
	re = m*cos(p);
	im = m*sin(p);
}


void Complex::printRect ()
{
	cout << re << "+" << im << "i" << endl;
}

void Complex::printPol ()
{
	cout << getMag() << "e^i" << getPhase() << endl;
}


// Operator overloads
Complex& Complex::operator+= (const Complex& rhs)
{
	this->re = this->re + rhs.re;
	this->im = this->im + rhs.im;

	return *this;
}


Complex operator+ (Complex lhs, const Complex& rhs)
{
	return lhs+=rhs;
}
