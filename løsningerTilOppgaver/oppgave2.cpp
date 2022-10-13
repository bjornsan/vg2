#include <iostream>
using namespace std;


/*
* 1.
Lag en funksjon med to parametere av type int. 
Funksjonen ska så gange sammen disse og returnere resultatet
*/

// Ganger sammen x med y
int multiplikasjon(int x, int y)
{
	return x * y;
}

/*
2. Lag en funksjon som returnerer et desimaltall.Funksjonen ska ha 
en parameter av type double, temperatur i Farhenheit.

Funksjonen ska så konvertere dette til Celsius og returne dette.

For å konvertere fra Farhenheit til Celsius kan følgende formel brukes :

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
Denne funksjonen ska kalle på funksjonen lagd i oppgave 1, 
to ganger med forskjellige verdier på parmeterne. 

Resultatet av hver av funksjonskallen ska lagres i hver sin variabel.
For hver funksjonskall ska så veriden på parameterne printes ut til 
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

	// en måte å løse det på
	int x2 = 45;
	int y2 = 3;
	int resultat2 = multiplikasjon(x2, y2);
	cout << "x: " << x2 << " y: " << y2 << "Resultat: " << resultat2 << "\n";

}

/*
I main funksjonen, gjør et funksjonskall av funksjonen lagd i oppgave 3.

Gjør deretter et funksjonskall til funksjonen lagd i oppgave 2 
og lagre den i en variabel. Printe så til konsollen verdien i
farhenheit og motsvarende veriden i cecius lagret i variablen.
*/

int main()
{
	printRes();

	double far = 120;
	double celsius = tilCelsius(far);

	cout << "Farhenheit: " << far << " Celsius: " << celsius;
}