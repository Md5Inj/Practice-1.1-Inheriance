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
	this->array = new int*[rowCount];

	for (int i = 0; i < rowCount; i++)
	{
		this->array[i] = new int[colCount];
	}
	this->SetRandom();
}

void Matrix::SetRandom()
{
	for (int i = 0; i < this->rowCount; i++)
	{
		for (int j = 0; j < this->colCount; j++)
		{
			this->array[i][j] = rand() % 30 - 10;
		}
	}
}

void Matrix::Print()
{
	for (int i = 0; i < this->rowCount; i++)
	{
		for (int j = 0; j < this->colCount; j++)
		{
			cout << this->array[i][j] << " ";
		}
		cout << endl;
	}
}

void Matrix::ChangeCol(int count)
{
	this->colCount = count;
	
	for (int i = 0; i < rowCount; i++)
	{
		this->array[i] = new int[colCount];
	}

	this->SetRandom();
}

void Matrix::ChangeRow(int count)
{
	this->rowCount = count;
	this->array = new int*[rowCount];

	for (int i = 0; i < rowCount; i++)
	{
		this->array[i] = new int[colCount];
	}

	this->SetRandom();
}

void Matrix::PrintCol(int pos)
{
	for (int i = 0; i < colCount; i++)
	{
		cout << this->array[pos][i] << " ";
	}
	cout << endl;
}

Matrix::~Matrix()
{
	delete[] this->array;
}