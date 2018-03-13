#include "stdafx.h"
#include "MyApplication.h"

MyApplication::MyApplication()
{
	Matrix *m = new Matrix(0, 0); // Создание пустой матрицы
	char input = 0; // Переменная, хранящая символ, который ввёл юзер
	int keyCode = 0, // Input преобразованный в int
		c = 0, // Для изменения числа колонок, вывода колонок
		r = 0; // Для изменения числа строк

	while ((int)input != 48) // Покуда не введён 0
	{
		cout << "1 - Create a array" << endl
			 << "2 - Print a array" << endl
			 << "3 - Change column count" << endl
			 << "4 - Change row count" << endl
			 << "5 - Print Column" << endl
			 << "0 - Exit" << endl;
		
		cin >> input;
		keyCode = (int)input; // Перевод переменной input в числовое представление
		
		switch (keyCode) 
		{
			case 49: // Инициализация матрицы 
			{
				cout << "Input column and row count: "; cin >> c >> r;
				m = new Matrix(c, r);
				break;
			}

			case 50: // Вывод матрицы
			{
				m->Print();
				break;
			}

			case 51: // Изменение количества колонок
			{
				cout << "Input new column count: "; cin >> c;
				m->ChangeCol(c);
				break;
			}

			case 52: // Изменение количества строк
			{
				cout << "Input new row count: "; cin >> r;
				m->ChangeRow(r);
				break;
			}

			case 53: // Ввывод колонки по индексу
			{
				cout << "Input index of column: "; cin >> c;
				m->PrintCol(c);
				break;
			}

		}

		system("pause");
		system("cls");
	}
}


MyApplication::~MyApplication()
{
}