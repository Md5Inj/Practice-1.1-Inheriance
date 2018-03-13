#include "stdafx.h"
#include "Matrix.h"

Matrix::Matrix() // Так как размера нету, просто включаем рандом
{
	srand((unsigned)time(0));
}

Matrix::Matrix(int colCount, int rowCount) // Размер есть, создаём массив размера соответствующий параметрам
{
	srand((unsigned)time(0));
	this->colCount = colCount;
	this->rowCount = rowCount;
	this->array = new int*[rowCount];

	for (int i = 0; i < rowCount; i++)
	{
		this->array[i] = new int[colCount];
	}
	this->SetRandom(); // Рандомим его
}

Matrix::Matrix(const Matrix & m) // Копируем массив и свойства из массива, который в параметрах
{
	this->colCount = m.colCount;
	this->rowCount = m.rowCount;
	this->array = m.array;
}

void Matrix::SetRandom() // Рандомим
{
	for (int i = 0; i < this->rowCount; i++)
	{
		for (int j = 0; j < this->colCount; j++)
		{
			this->array[i][j] = rand() % 30 - 10;
		}
	}
}

void Matrix::Print() // Выводим массив
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

void Matrix::ChangeCol(int count) // Изменяем количество колонок
{
	this->colCount = count;
	
	for (int i = 0; i < rowCount; i++)
	{
		this->array[i] = new int[colCount];
	}

	this->SetRandom();
}

void Matrix::ChangeRow(int count) // Изменяем количество строк
{
	this->rowCount = count;
	this->array = new int*[rowCount];

	for (int i = 0; i < rowCount; i++)
	{
		this->array[i] = new int[colCount];
	}

	this->SetRandom();
}

void Matrix::PrintCol(int pos) // Выводим определённую колонку
{
	for (int i = 0; i < colCount; i++)
	{
		cout << this->array[pos][i] << " ";
	}
	cout << endl;
}

Matrix::~Matrix() // Динамически освобождаем память от массива
{
	delete[] this->array;
}