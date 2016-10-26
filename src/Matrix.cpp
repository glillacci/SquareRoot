/*
 * Matrix.cpp
 *
 *  Created on: Jan 8, 2015
 *      Author: lillaccg
 */

#include "Matrix.h"

using namespace std;

Matrix::Matrix(int rows, int cols) {
	// Set the sizes
	m = rows;
	n = cols;
	data.assign (m*n, 0.0);
}

Matrix::~Matrix() {
}


double Matrix::getElement (int i, int j)
{
	return data[(i-1)*n+(j-1)];
}

void Matrix::setElement (int i, int j, double val)
{
	data[(i-1)*n+(j-1)] = val;
}


void Matrix::setIdentity ()
{
	try
	{
		// Matrix must be square to be identity
		if (n!=m)
		{
			throw 150;
		}

		for (int i = 1; i <= n; i++)
		{
			this->setElement(i,i,1);
		}
	}
	catch (int e)
	{
		cout << "Exception " << e << ": matrix must be square." << endl;
	}
}


void Matrix::print ()
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setiosflags(ios::fixed) << setprecision(4) << data[i*n+j] << "\t";
		}
		cout << endl;
	}
}


double & Matrix::operator[] (int lin)
{
	return data[lin-1];
}

const double & Matrix::operator[] (int lin) const
{
	return data[lin-1];
}

Matrix & Matrix::operator+= (const Matrix & rhs)
{
	try
	{
		// The matrices can not be summed if their dimension is not the same
		if (this->n!=rhs.n || this->m!= rhs.m)
		{
			throw 151;
		}

		// Do the sum
		for (int i = 0; i < this->data.size(); i++)
		{
			this->data[i] += rhs.data[i];
		}
	}
	catch (int e)
	{
		cout << "Exception " << e << ": matrices must be of the same size." << endl;
	}

	return *this;
}
