// chuvsustruct.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	const int n = 2;
	struct NOTE
	{
		char name[2][15];
		__int64 phnum;
		short int date[3];
	} p[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Input like 'Surname Name Phone_Num Day Month Year'" << endl << "in Phone_Num and Month use digits only, pls" << endl;
		cin >> p[i].name[0] >> p[i].name[1] >> p[i].phnum >> p[i].date[0] >> p[i].date[1] >> p[i].date[2];
		cout << endl;
	}
	int year;
	cout << "What year?" << endl;
	cin >> year;
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (p[i].date[2] == year) {
			cout << p[i].name[0] << " " << p[i].name[1] << endl;
			k++;
		}
	}
	if (k == 0) cout << "No one";
	system("pause");
	return 0;
}

