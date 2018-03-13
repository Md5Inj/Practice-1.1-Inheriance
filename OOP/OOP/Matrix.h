/*
	Конкретная реализация интерфейса класса MatrixInterface
*/

#include "MatrixInterface.h"

#pragma once
class Matrix : public MatrixInterface
{
public:
	Matrix(); // Конструктор по умолчанию
	Matrix(int colCount, int rowCount); // Конструктор с параметрами
	Matrix(const Matrix &m); // Конструктор копирования
	~Matrix(); // Деструтор

	/*
		Далее идёт сообщение компилятору о том, что мы определяем унаследованные функции
	*/
	virtual void SetRandom() override;
	virtual void Print() override;
	virtual void ChangeCol(int count) override;
	virtual void ChangeRow(int count) override;
	virtual void PrintCol(int pos) override;
};

