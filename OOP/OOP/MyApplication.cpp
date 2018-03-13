#include "stdafx.h"
#include "MyApplication.h"

MyApplication::MyApplication()
{
	Matrix *m = new Matrix(0, 0); // initializing empty matrix
	char input = 0; // variable, wich stores the user input
	int keyCode = 0, // variable input with int type
		c = 0, // For changing column count
		r = 0; // For changing row count

	while ((int)input != 48) // While zero not inputed
	{
		cout << "1 - Create a array" << endl
			 << "2 - Print a array" << endl
			 << "3 - Change column count" << endl
			 << "4 - Change row count" << endl
			 << "5 - Print the sub matrix" << endl
			 << "0 - Exit" << endl;
		
		cin >> input;
		keyCode = (int)input; // Char to int
		
		switch (keyCode) 
		{
			case 49: // Matrix init
			{
				cout << "Input column and row count: "; cin >> c >> r;
				m = new Matrix(c, r);
				break;
			}

			case 50: // Printing matrix
			{
				m->Print();
				break;
			}

			case 51: // Changing count of the cols
			{
				cout << "Input new column count: "; cin >> c;
				m->ChangeCol(c);
				break;
			}

			case 52: // Changing count of the rows
			{
				cout << "Input new row count: "; cin >> r;
				m->ChangeRow(r);
				break;
			}

			case 53: // Printing the submatr
			{
				cout << "Input the size of sub matrix: "; cin >> c >> r;
				m->PrintSubMatr(c, r);
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