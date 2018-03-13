#include "MatrixInterface.h"

#pragma once
class Matrix : MatrixInterface
{
public:
	Matrix();
	Matrix(int colCount, int rowCount);
	~Matrix();
	virtual void SetRandom() override;
	virtual void Print() override;
};

