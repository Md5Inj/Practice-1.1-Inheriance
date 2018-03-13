#include <iostream>
#include <ctime>

using namespace std;

// Класс-интерфейс для наследования

#pragma once
class MatrixInterface
{
protected:
	int **array; // "Прототип двумерного массива"
	int rowCount; // Количество строк
	int colCount; // Количество столбцов
public:
	MatrixInterface(); // Конструктор по умолчанию
	MatrixInterface(int colCount, int rowCount); // Конструктор с параметрами
	MatrixInterface(const MatrixInterface& m); // Конструктор копирования
	~MatrixInterface(); // Деструктор
	virtual void Print() = 0; // Чисто виртуальная функция вывода
	virtual void ChangeCol(int count) = 0; // Чисто виртуальная функция изменения количества столбцов
	virtual void ChangeRow(int count) = 0; // Чисто виртуальная функция изменения количества строк
	virtual void PrintCol(int pos) = 0; // Чисто виртуальная функция для вывода определённого столбца
	virtual void SetRandom() = 0; // Чисто виртуальная функция для рандомного заполнения двумерного массива
};