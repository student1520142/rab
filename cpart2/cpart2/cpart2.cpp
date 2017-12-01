#include "stdafx.h" 
#include <iostream> 
using namespace std; 

int main()
{
	
	double a, b;
	int count;  
	cout << "Vvedite pervoe chislo: ";
	cin >> a;
	cout << "Vvedite vtoroe chislo: ";
	cin >> b;
	cout << "Vibirite deistvie: 1 + ; 2 - ; 3 * ; 4 / : ";
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
	system("pause");
	return 0;
}