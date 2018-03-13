#include "stdafx.h"
#include "MyApplication.h"

MyApplication::MyApplication()
{
	Matrix *m = new Matrix(0, 0);
	char input = 0;
	int keyCode = 0, c = 0, r = 0;

	while ((int)input != 48)
	{
		cout << "1 - Create a array" << endl
			 << "2 - Print a array" << endl
			 << "3 - Change column count" << endl
			 << "4 - Change row count" << endl
			 << "5 - Print Column" << endl
			 << "0 - Exit" << endl;
		
		cin >> input;
		keyCode = (int)input;
		
		switch (keyCode) 
		{
			case 49: 
			{
				cout << "Input column and row count: "; cin >> c >> r;
				m = new Matrix(c, r);
				break;
			}

			case 50:
			{
				m->Print();
				break;
			}

			case 51:
			{
				cout << "Input new column count: "; cin >> c;
				m->ChangeCol(c);
				break;
			}

			case 52:
			{
				cout << "Input new row count: "; cin >> r;
				m->ChangeRow(r);
				break;
			}

			case 53:
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
