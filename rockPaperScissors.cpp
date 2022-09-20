#include <iostream>
using namespace std;

int main()
{
    //  random action
    // 1 = rock, 
    // 2 = paper,
    // 3 = scissors

    bool isRunning = true;
    int computerWins = 0;

    int playerWins = 0;

    // Best of of three
    while (isRunning)
    {
        if (computerWins == 3)
        {
            cout << "GAME OVER! Computer is the champ!" << "\n";
            isRunning = false;
            break;
        }

        if (playerWins == 3)
        {
            cout << "GLORIOUS VICTORY! Player wins!" << "\n";
            isRunning = false;
            break;
        }

        srand(time(NULL));
        int computerMove = 1 + rand() % 3;

       

        cout << "---------------------------------------" << "\n\n";
        cout << "ROCK, PAPER, SCISSORS" << "\n\n";
        cout << "---------------------------------------" << "\n\n";
        cout << "Score: Player " << playerWins << "\tComputer: " << computerWins << "\n";
        cout << "---------------------------------------" << "\n\n\n";

        cout << "Make your choice: \n";
        cout << "1. Rock\n";
        cout << "2. Paper\n";
        cout << "3. Scissors\n\n\n>> ";

        int playerMove;
        cin >> playerMove;

         system("CLS");

        // Rock beats scissors
        // Paper beats rock
        // Scissors beats paper


        if (computerMove == playerMove)
        {
            cout << "Draw, you made the same move. Try again." << "\n";
        }
        else if (computerMove == 1 && playerMove == 2)
        {
            cout << "Player wins, paper beats rock!" << "\n";
            playerWins++;
        }
        else if (computerMove == 1 && playerMove == 3)
        {
            cout << "Computer wins, rock beats scissors!" << "\n";
            computerWins++;
        }
        else if (computerMove == 2 && playerMove == 1)
        {
            cout << "Computer wins, paper beats rock!" << "\n";
            computerWins++;
        }
        else if (computerMove == 2 && playerMove == 3)
        {
            cout << "Player wins, scissors beats paper" << "\n";
            playerWins++;
        }
        else if (computerMove == 3 && playerMove == 1)
        {
            cout << "Player wins, rock beats scissors" << "\n";
            playerWins++;
        }
        else if (computerMove == 3 && playerMove == 2)
        {
            cout << "Computer wins, scissors beats paper" << "\n";
            computerWins++;
        }

    }

}


