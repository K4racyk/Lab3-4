#include <iostream>
#include <time.h>
using namespace std;

#include <iostream>

int main()
{
    //--------------------Zadanie 1---------------------
    // 1. Czym różni się tablica zadeklarowana w sposób:
   // char zdanie[] = { "lot" };
   // od tablicy :
   //char zdanie[] = { 'l', 'o', 't' };
    // 
    // Odp : Tablice te różnią się sposobem inicjalizacji. Do tablicy zostaną dodane te same elementy.
    //--------------------Zadanie 3 ------------------------
   /*{
        char tab[] = "wiosna";
        int a = size(tab);
        a--;
        cout << a;
    }*/
    
    //-------------------Zadanie 6----------------------
    string tekst;
    cout << "Wprowadz tekst: ",cin>>tekst;  
    
    string getline(tekst);

    string spolgloski = "bcdfghjklmnpqrstwxzBCDFGHJKLMNPRQSTWXZ";
    int  lspolgloski = 0;
    int lsamogloski = 0;
    for (int i = 0; i < tekst.length(); i++) 
    {

            for (int j = 0; j < spolgloski.length(); j++) 
            {
                if (tekst[i] == spolgloski[j]) lspolgloski++; 
                
            }
     }

     cout << "Dlugosc tekstu : " << tekst.length() << endl;

      cout << "Liczba spolglosek : " << lspolgloski << endl;
      cout << "Liczba samoglosek : " << tekst.length() - lspolgloski << endl;
}

