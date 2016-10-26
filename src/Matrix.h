/*
 * Matrix.h
 *
 *  Created on: Jan 8, 2015
 *      Author: lillaccg
 */

#ifndef MATRIX_H_
#define MATRIX_H_

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;



class Matrix {
	int m,n;
	vector<double> data;

public:
	Matrix (int rows, int cols);
	virtual ~Matrix();

	double getElement (int i, int j);
	void setElement (int i, int j, double val);

	void setIdentity ();

	void print ();

	double & operator[] (int lin);
	const double & operator[] (int lin) const;
	Matrix & operator+= (const Matrix & rhs);
};


#endif /* MATRIX_H_ */
