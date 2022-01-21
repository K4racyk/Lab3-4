#include <iostream>
#include <time.h>
using namespace std;

#include <iostream>

int main()
{
	
	//--------------Zadanie 1 -----------------
	//int tab[10],a=3;
	//
	//for(int i = 0; i <10; i++)
	//{
	//	tab[i] = a;
	//	a += 3;
	//	cout << tab[i] << endl;
	//}
	////---------------Zadanie 2-----------------
	//for (int i = 0; i < 10; i = i + 2)
	//{
	//	cout << tab[i] << " ";
	//}
	//--------------------Zadanie 3 ---------------------
	/*int tab[10], temp=0,a;
	cout << "Podaj wartosc a: ", cin >> a;
	for (int i = 9; i  >= 0; i--)
	{
		tab[i] = a - temp;
		temp += 5;

	}
	for (int i = 0; i < 10 ;i++)
	{
		cout << tab[i] << " ";
	}*/

	//-----------Zadanie 4 -------------------

	/*int tab[10], min;

	srand(time(NULL));
	min = tab[0];
		for (int i = 0; i < 10; i++)
		{
			tab[i] = (rand() % 73) - 23;
			cout << tab[i] << " ";
		}

		min = tab[0];
		for (int i = 1; i < 10; i++)
		{
			if(min > tab[i])
			{
				min = tab[i];
			}

		}
		cout << endl << min;*/

	//----------Zadanie 5 ----------------------

	/*int a;
	int b;
	int suma;
	

	cout << "Podaj wartosc a: ", cin >> a;
	cout << "Podaj wartosc b: ", cin >> b;
	int tabFloat[10];
	tabFloat[0] = a;
	tabFloat[1] = b;
	
	for (int i = 0; i < 8; i++)
	{
		for (int i = 0; i < 8; i++)
		{

			tabFloat[i+2] = tabFloat[i] + tabFloat[i+1];
			

		}

		
			cout << tabFloat[i] << " ";
			
	}*/
	
	
}

