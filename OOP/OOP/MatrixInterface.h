#include <iostream>
#include <ctime>

using namespace std;

// Класс-интерфейс

#pragma once
class MatrixInterface
{
protected:
	int **array;
	int rowCount;
	int colCount;
public:
	MatrixInterface();
	MatrixInterface(int colCount, int rowCount);
	MatrixInterface(const MatrixInterface& m);
	~MatrixInterface();
	virtual void Print() = 0;
	virtual void ChangeCol(int count) = 0;
	virtual void ChangeRow(int count) = 0;
	virtual void PrintCol(int pos) = 0;
	virtual void SetRandom() = 0;
};