#include <iostream>
using namespace std;


/*
* 1.
Lag en funksjon med to parametere av type int. 
Funksjonen ska s� gange sammen disse og returnere resultatet
*/

// Ganger sammen x med y
int multiplikasjon(int x, int y)
{
	return x * y;
}

/*
2. Lag en funksjon som returnerer et desimaltall.Funksjonen ska ha 
en parameter av type double, temperatur i Farhenheit.

Funksjonen ska s� konvertere dette til Celsius og returne dette.

For � konvertere fra Farhenheit til Celsius kan f�lgende formel brukes :

???????????? ?????????????? = (???????????? ???????????????????32)?5/9

*/

// Konverterer farenheit til celsius
double tilCelsius(double far)
{
	return (far - 32) * 5 / 9;
}

/*
3.
Lag en funksjon som ikke returnerer noe. 
Denne funksjonen ska kalle p� funksjonen lagd i oppgave 1, 
to ganger med forskjellige verdier p� parmeterne. 

Resultatet av hver av funksjonskallen ska lagres i hver sin variabel.
For hver funksjonskall ska s� veriden p� parameterne printes ut til 
konsollen sammen med resultatet.
*/

//  Printer resultatet av funksjonen multiplikasjon til konsollen
//  to ganger.
void printRes()
{
	int x = 2;
	int y = 4;
	int resultat = multiplikasjon(x, y);

	cout << "x: " << x << " y: " << y << "Resultat: " << resultat << "\n";

	// en m�te � l�se det p�
	int x2 = 45;
	int y2 = 3;
	int resultat2 = multiplikasjon(x2, y2);
	cout << "x: " << x2 << " y: " << y2 << "Resultat: " << resultat2 << "\n";

}

/*
I main funksjonen, gj�r et funksjonskall av funksjonen lagd i oppgave 3.

Gj�r deretter et funksjonskall til funksjonen lagd i oppgave 2 
og lagre den i en variabel. Printe s� til konsollen verdien i
farhenheit og motsvarende veriden i cecius lagret i variablen.
*/

int main()
{
	printRes();

	double far = 120;
	double celsius = tilCelsius(far);

	cout << "Farhenheit: " << far << " Celsius: " << celsius;
}