#include <iostream>

using namespace std;

#pragma once
class MatrixInterface
{
private:
	int **array;
public:
	MatrixInterface();
	~MatrixInterface();
	virtual void Print() = 0;
	virtual void ChangeCol(int count) = 0;
	virtual void ChangeRow(int count) = 0;
	virtual void PrintCol(int pos) = 0;
	virtual void ShowMenu() = 0;
};