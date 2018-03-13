#include "stdafx.h"
#include "MyApplication.h"

MyApplication::MyApplication()
{
//	Matrix m;
	char input = 0;

	while ((int)input != 71)
	{
		cin >> input;
		cout << (int)input << endl;
		system("pause");
		system("cls");
	}
}


MyApplication::~MyApplication()
{
}
