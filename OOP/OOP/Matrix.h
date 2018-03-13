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
	virtual void ChangeCol(int count) override;
	virtual void ChangeRow(int count) override;
	virtual void PrintCol(int pos) override;
};

