#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
//-------------zadanie 1----------------------
//float pole(float r);
//float pole(float a, float b);
//float pTojkata(float a, float h);
//void szescian(float a);
//void walec(float, float);
//
//
//
//int main()
//{
//    float r, a, b, h;
//    cout << "Podaj a = ", cin >> a;
//    cout << "Podaj b = ", cin >> b;
//    cout << "Podaj h = ", cin >> h;
//    cout << "Podaj r = ", cin >> r;
//    if (a > 0 && b > 0 && h > 0 && r > 0) {
//        cout << "pole kola: " << pole(r) << endl;
//        cout << "pole prostokata: " << pole(a, b) << endl;
//        cout << "pole trojkata: " << pole(a, h) << endl;
//        cout << "Szescian : \n";
//        szescian(a);
//        cout << "\nWalec: \n";
//        walec(r, h); cout << endl;
//
//    }
//    else cout << "Podano bledne dane!";
//}
//
//float pole(float r) {
//    return 3.14 * r * r;
//}
//float pole(float a, float b) {
//    return a * b;
//
//}
//float pTrojkata(float a , float h)
//{
//    return(a * h) / 2;
//
//}
//void szescian (float a)
//{
//    cout << "Pole = " << 6 * a * a;
//    cout << "\nObjetosc = " << a * a * a;
//}
//void walec(float r, float h) {
//    cout << "Pole = " << 2 * 3.14 *(r + h);
//    cout << "\nObjetosc = " << 3.14 * r * h;

//}
//-------------zadanie 2---------------

//bool LiczbaPierwsza(int n);
//
//
//int main() 
//{
//	int n = 1;
//	for (int i = 0; i < 15; i++)
//	{
//		cout << "Liczba = " << n << ", czy pierwsza 0/1= " << LiczbaPierwsza(n) << endl;
//		n++;
//	}
//}
//bool LiczbaPierwsza (int n) 
//{
//	if (n < 2) return false; 
//	
//		for (int i = 2; i * i <= n; i++)
//			if (n % i == 0)
//				return false;
//		return true;
//	
//}

//------------------Zadanie 3------------------------------

void DecToBin(int);
int main()
{
    int liczba;

    cout << "Podaj liczbe dziesietna:" << endl;
    cin >> liczba;
    cout << "Postac binarna liczby " << liczba << " , to  ";
    DecToBin(liczba);
    cout << " petla for: \n";
    for (int i = 0; i < 10; i++)
    {
        cout << i << " binarna: ";
        DecToBin(i); cout << endl;

    }



}
void DecToBin(int liczba)
{
    int i = 0, tab[31];
    while (liczba)
    {
        tab[i++] = liczba % 2;
        liczba /= 2;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << tab[j];
    }
}
