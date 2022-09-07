
// Jeg er en kommentar

/*
Jeg er en kommentar
p�
flere
linjer
*/

// Header imports
#include <iostream>
// Bruk av en spesifik pakke
using namespace std;



// Hovedfunksjon
int main()
{
	// lage et ranndom tall
	// srand forsikrer at tallet er tilfeldig, og ikke blir likt hver gang.
	srand(time(NULL));
	// Her genererer vi et tall mellom 1 og 10.
	int randomTall = 1 + rand() % 10;

	// Debug hvis vi f�r tilfeldige tall
	// cout << randomTall;

	// Variabel som holder telling p� hvor mange gjettinger vi gjort.
	int numberOfGuesses = 1;

	// Variabel som holder styr p� hvis loopen ska kj�re eller ikke.
	bool isRunning = true;

	// Sp�r brukeren til � gjette p� et tall.
	cout << "Gjett p� et tall mellom 1 og 10\n>> ";
	// Ta bruker input. 
	// F�rst lagrer vi en variabel ved navn guess,
	// f�r � s� benytte cin til � lagre input fra tastaturen til den 
	// samme variabelen. 
	int guess;
	cin >> guess;

	// En while loop som kj�rer s� lenge spillet er i gang. 
	while (isRunning)
	{
		// Sjekker hvis vi har noen gjettinger igjen
		if (numberOfGuesses < 3) 
		{
			// Sjekke hvis brukerern har gjettet riktig tall
			if (guess == randomTall)
			{
				// Printer til konsollen
				cout << "Du gjettet riktig";
				// Bryter loopen ved at sette isRunning til false.
				isRunning = false;
			}
			// Sjekker hvis brukeren gjettet for lavt
			else if(guess < randomTall)
			{
				// Plusser p� hvor mange gjettinger vi gjort
				numberOfGuesses++;
				// Gir hint om at brukeren gjettet for lavt og ber om en ny gjetting.
				cout << "Du gjettet for lavt\n";
				cout << "Gjett igjen: ";
				cin >> guess;	
			}
			// Sjekker hvis brukeren gjettet for h�yt.
			else if (guess > randomTall)
			{
				// Plusser p� hvor mange gjettinger vi gjort.
				numberOfGuesses++;
				// Gir hint om at brukeren gjettet for h�yt og ber om en ny gjetting.
				cout << "Du gjettet for h�yt\n";
				cout << "Gjett igjen: ";
				cin >> guess;
			}				
		}
		// Hvis vi ikke har noen mere gjettinger igjen s� printer vi ut GAME OVER
		// og bryter loopen ved � sette isRunning til false.
		else
		{
			cout << "DU har gjettet feil for mange ganger\n\n";
			cout << "GAME OVER\n\n";
			isRunning = false;
		}
	}


}


