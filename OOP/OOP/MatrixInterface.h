#include <iostream>
#include <ctime>

using namespace std;

// Interface for inheriance

#pragma once
class MatrixInterface
{
protected:
	int **array; // Prototype for dynamic array
	int rowCount; // Count of rows
	int colCount; // Count of columns
public:
	MatrixInterface(); // Default constructor
	MatrixInterface(int colCount, int rowCount); // Constructor with params
	MatrixInterface(const MatrixInterface& m); // Copy constructor
	~MatrixInterface(); // Destructor
	virtual void Print() = 0; // Purely virtual function for matrix print
	virtual void ChangeCol(int count) = 0; // Purely virtual function for changing column count
	virtual void ChangeRow(int count) = 0; // Purely virtual function for changing row count
	virtual void PrintSubMatr(int c, int r) = 0; // Purely virtual function for printing fixed matrix
	virtual void SetRandom() = 0; // Purely virtual function for random filling a matrix
};