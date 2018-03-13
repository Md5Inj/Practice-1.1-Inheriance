/*
	Realization of class MatrixInterface
*/

#include "MatrixInterface.h"

#pragma once
class Matrix : public MatrixInterface
{
public:
	Matrix(); // Default constructor
	Matrix(int colCount, int rowCount); // Constructor with params
	Matrix(const Matrix &m); // Copy constructor
	~Matrix(); // Destructor

	/*
		In these functions we tell the compiler that we are redefining purely virtual functions 
		defined in interface
	*/
	virtual void SetRandom() override;
	virtual void Print() override;
	virtual void ChangeCol(int count) override;
	virtual void ChangeRow(int count) override;
	virtual void PrintSubMatr(int c, int r) override;
};

