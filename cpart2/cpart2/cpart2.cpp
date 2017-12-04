#include "stdafx.h" 
#include <iostream> 
#include "stdafx.h"
using namespace std; 

double deistv1(double,double,int);
int main()
{
	
	double a, b;
	char c, c1;
	int count; 
	c= 'y';
	c1= 'n';
	
	while (c=='y' || c=='Y')
		{ 
			if (c1=='n' || c1=='N'){
	cout << "Vvedite pervoe chislo: ";
	cin >> a;
	cout << "Vvedite vtoroe chislo: ";
	cin >> b;
			}
	cout << "Vibirite deistvie: 1 + ; 2 - ; 3 * ; 4 / " <<endl;
	cin >> count;
	switch (count)
	{
	case 1:
		{
			cout << deistv1(a,b,count) <<endl;
			break;
		}
	case 2:
		{
			cout << deistv1(a,b,count) <<endl;
			break;
		}
	case 3:
		{
			cout << deistv1(a,b,count) <<endl;
			break;
		}
	case 4:
		{
			cout << deistv1(a,b,count) <<endl;
			break;
		}
	default:
		cout << "Nepravilni vvod" << endl;
	}
	c1= 'n';
	do{
	cout << "prodozhit:Y/N " << endl;
	cin >> c;}
	while(!(c == 'y' || c ==  'Y' || c == 'n' || c == 'N'));
	if ((c=='y' || c=='Y')&&(c1=='n' || c1=='N')){
	cout << "prodozhit s temizhe shislami:Y/N " << endl;
	cin >> c1;
	}
	}
	system("pause");
	return 0;
}