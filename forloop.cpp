/*
*	Her importerer vi n�dvendige header filer
*/
#include <iostream>
using namespace std;

// Dette er v�r ingangspunkt til programmet.
// N�r vi trykker p� "Local Windows Debugger" s� er det koden innenfor main som blir kj�rt.
int main()
{
	// Dette er en for l�kke
	// Formatet p� denne l�kken er (tellere, betingelse, �ke telleren med 1).
	// I dette navngir vi v�r tellere til i og initialiserer den til verdien 0.
	// Betingelsen er her satt til at i ska v�re mindre enn 10. 
	// L�kken vil her printe verdien av telleren fra 0 til 9.
	for (int i = 0; i < 10; i++)
	{
		cout << i << "\n";
	}
		

}