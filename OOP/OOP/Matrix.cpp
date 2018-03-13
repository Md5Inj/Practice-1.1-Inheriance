#include "stdafx.h"
#include "Matrix.h"

Matrix::Matrix()
{
	srand((unsigned)time(0));
}

Matrix::Matrix(int colCount, int rowCount)
{
	srand((unsigned)time(0));
	this->colCount = colCount;
	this->rowCount = rowCount;

	for (int i = 0; i < colCount; i++)
	{
		this->array[i] = new int[rowCount];
	}
}

void Matrix::SetRandom()
{
	for (int i = 0; i < this->colCount; i++)
	{
		for (int j = 0; j < this->rowCount; j++)
		{
			this->array[i][j] = rand() % 5 - 10;
		}
	}
}

void Matrix::Print()
{
	for (int i = 0; i < this->colCount; i++)
	{
		for (int j = 0; j < this->rowCount; j++)
		{
			cout << this->array[i][j] << " ";
		}
		cout << endl;
	}
}

Matrix::~Matrix()
{
	delete[] this->array;
}