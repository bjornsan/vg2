/*
*	Her importerer vi nødvendige header filer
*/
#include <iostream>
using namespace std;

// Dette er vår ingangspunkt til programmet.
// Når vi trykker på "Local Windows Debugger" så er det koden innenfor main som blir kjørt.
int main()
{
	// Dette er en for løkke
	// Formatet på denne løkken er (tellere, betingelse, øke telleren med 1).
	// I dette navngir vi vår tellere til i og initialiserer den til verdien 0.
	// Betingelsen er her satt til at i ska være mindre enn 10. 
	// Løkken vil her printe verdien av telleren fra 0 til 9.
	for (int i = 0; i < 10; i++)
	{
		cout << i << "\n";
	}
		

}