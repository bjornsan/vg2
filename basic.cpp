/*
* Her laster vi inn n�dvendige source filer for at vi ska 
* kunne bruke innebyggde funksjoner i spr�ket c++.
* 
* iostream er den delen av c++ som h�ndterer input / output.
* 
*  namesapce kan ses p� som en kategori av kode, der std er en del av standrad biblioteket.
*	Ved � skrive "using namespace std;" kan vi skrive noen funksjoner enklere.
* 
*  Den klassiske funksjonene for � printe til terminalen i c++ er "cout". Uten a bruke namespce std,
*  m� vi skrive "std::cout". Likverdig
*/
#include <iostream>
using namespace std;

// Funksjoner skrives p� formen:
/*
*	returnType funksjonsnavn(parametere)
* {
*		Funksjonskropp
* }
* 
* 
*  returnType bestemmer hvilken datatype som m� returneres fra denne funksjon.
*  Alle funksjoner i C++ m� ha en returnType.
*  Funksjonsnavnet kan bestemmes selv, godt � bruke et passende navn for hva funksjonen utf�rer.
* 
*  En funksjon kan ha uendelig mange parametere, dette er opp til programmereren. 
*  Men n�r funksjonen er skrevet, s� m� den benyttes med samme antall parametere som
*  den blev definert ved.
*  
*  Alt som er skrevet innenfor {} er det vi kaller for funksjonskroppen. 
*  Det er her som all kode for hva funksjonen ska utf�re skrives.
* 
*  Det siste som skjer i funksjonen er � returnere en verdi av den bestemte datatypen
*/


/*
*  Her har vi defineret en funksjon med funksjonsnavn "pluss", og returnType "int".
* 
*	Den har to parametere, int a og int b. Dette er to variabler som blir brukt lokalt
*   av denne funksjonen. 
* 
*   I funksjonskroppen s�
*/
int pluss(int a, int b)
{
	return a + b;
}

int Minus(int a, int b)
{
 	return a - b;
}



int main()
{
	
	//int x = pluss(2, 3);
	//int y = Minus(8, 5);
	//cout << "2 + 3 = " << x << "\n";
	//cout << "8 - 5 = " << y << "\n";

	int x = 0;
	int y = 0;
	char operand = 'a';
	int resultat = 0;
	bool isRunning = true;


	while (isRunning)
	{
		cout << "TalL nr.1: ";
		cin >> x;

		cout << "\nTall nr.2: ";
		cin >> y;

		cout << "Velg + eller minus: ";
		cin >> operand;



		if (operand == '+')
		{
			resultat = pluss(x, y);
		}
		else if (operand == '-')
		{
			resultat = Minus(x, y);
		}
		else if (operand == 'q')
		{
			isRunning = false;
		}

		cout << "\nResultat = " << resultat;
	}


}