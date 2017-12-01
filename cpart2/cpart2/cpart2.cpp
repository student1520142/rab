#include "stdafx.h" 
#include <iostream> 
using namespace std; 

int main()
{
	
	double a, b;
	char c;
	int count; 
	c= 'y';
	while (c=='y' || c=='Y')
		{
	cout << "Vvedite pervoe chislo: ";
	cin >> a;
	cout << "Vvedite vtoroe chislo: ";
	cin >> b;
	cout << "Vibirite deistvie: 1 + ; 2 - ; 3 * ; 4 / " <<endl;
	cin >> count;
	switch (count)
	{
	case 1:
		{
			cout << "function + in development" <<endl;
			break;
		}
	case 2:
		{
			cout << "function - in development" <<endl;
			break;
		}
	case 3:
		{
			cout << "function * in development" <<endl;
			break;
		}
	case 4:
		{
			cout << "function / in development" <<endl;
			break;
		}
	default:
		cout << "Nepravilni vvod" << endl;
	}
	cout << "prodozhit:Y/N " << endl;
	cin >> c;
	}

	system("pause");
	return 0;
}