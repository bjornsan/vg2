#include <iostream>
using namespace std;


int main()
{
	srand(time(NULL));
	int randomTall = 1 + rand() % 10;
	int numberOfGuesses = 1;

	bool isRunning = true;

	cout << "Gjett på et tall mellom 1 og 10\n>> ";
	int guess;
	cin >> guess;

	while (isRunning)
	{
		if (numberOfGuesses < 3) 
		{
			if (guess == randomTall)
			{
				cout << "Du gjettet riktig";
				isRunning = false;
			}
			else if(guess < randomTall)
			{
				numberOfGuesses++;
				cout << "Du gjettet for lavt\n";
				cout << "Gjett igjen: ";
				cin >> guess;	
			}
			else if (guess > randomTall)
			{
				numberOfGuesses++;
				cout << "Du gjettet for høyt\n";
				cout << "Gjett igjen: ";
				cin >> guess;
			}				
		}
		else
		{
			cout << "DU har gjettet feil for mange ganger\n\n";
			cout << "GAME OVER\n\n";
			isRunning = false;
		}
	}
}