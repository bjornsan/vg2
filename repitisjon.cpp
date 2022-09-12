
#include <iostream>
using namespace std;


int main()
{
    // Printer st�relsen i bytes p� de forskjellige datatypene
    cout << sizeof(int) << "\n";
    cout << sizeof(float) << "\n";
    cout << sizeof(double) << "\n";
    cout << sizeof(char) << "\n";

    // Demonstrasjon av overflow
    int x = 40000;
    short y = x;
    cout << "overflow: " << y << "\n";
    

    // Hvordan en for loop virker
    // (teller; condition; legge til p� telleren)
    // Hvis vi ikke legger til p� telleren s� blir l�kken en evighetsl�kke. 
    for (int i = 0; i < 10; i++) 
    {
        cout << i << "\n";
    }

    // Hvordan en while loop virker.
    // Denne typen loop kj�rer s� lenge som betingelsen er sann.
    // while (betingelse). 
    // I dette eksemplet er while loopen sann s� lenge som x er mindre enn 20. 
    int x = 0;
    while (x < 20) 
    {
        cout << x << "\n";
        x++;
    }

    // Lager en liste, i programmering ofte kallt array, av type int med lengde 10.
    int liste[10] = { 1, 2, 3, 4 ,55, 6, 7, 8, 9, 10 };


    // Finner lengden av listen. 
    // sizeof() funksjonen finner st�relsen i bytes p� hele listen. Deler vi dette med st�relsen p� en int f�r vi da
    // hvor mange element en liste innholder.
    int listeLengde = sizeof(liste) / sizeof(int);
    cout << "er dette lengden? " << listeLengde << "\n";


    // Benytter en for loop for � loope igjenom listen og printe ut hvert element.
    // En array begynner p� 0 fordi det er slikt den er lagret fysisk i minnet. 
    // En array har adressen til det f�rste elementet. 
    for (int i = 0; i < listeLengde; i++)
    {
        cout << liste[i] << "\n";
    }
    
    // Litt om if else.
    // || betyr eller.
    // x > 300 || y > 500 betyr at hvis x er st�rre enn 300 eller hvis y er st�rre er 500
    // s� er betingelsen sann.
    //
    // && Betyr og.
    // x > 300 && y > 500 betyr at hvis x er st�rre enn 300 og y er st�rre enn 500 s� er betingelsen sann.
    int x = 250;
    int y = 400;

    if (x > 300 || y > 500)
    {
        cout << "if setningen er sann" << "\n";
    }
    else
    {
        cout << "if setningen er ikke sann" << "\n";
    }


}


    

