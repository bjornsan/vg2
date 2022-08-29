#include <iostream>
#include <stack>
#include <stdlib.h>
using namespace std;

const int playerOne = 1;
const int playerTwo = 2;
int currentPlayer;

const int boardSize = 9;

int movePlayer = 0;

bool isRunning = true;
bool gameOver = true;
bool playerOneWon = false;
bool playerTwoWon = false;
bool isEmpty = false;

int gameBoard[boardSize];

void initGame()
{
	for (int i = 0; i < boardSize; i++)
	{
		gameBoard[i] = 0;
	}
	for (int j = 0; j < boardSize; j++)
	{
		cout << gameBoard[j] << "\t";
	}
	cout << "\n";
}

void drawBoard()
{ 
	printf("_________________________________________________\n");
	printf("|\t\t|\t\t|\t\t|\n");
	printf("_________________________________________________\n");
	printf("|\t\t|\t\t|\t\t|\n");
	printf("_________________________________________________\n");
	printf("|\t\t|\t\t|\t\t|\n");
	printf("_________________________________________________\n");
}

void printRules()
{
	// TODO: print the rules of the game to console
}


int startingPlayer()
{
	// Making sure that the seed for random numbers always are different (Synched to the system clock)
	srand(time(NULL));
	int startingPlayer = 1 + rand() % 2;


	if (!startingPlayer == 0)
	{
		return startingPlayer;
	}
	else
	{
		startingPlayer = rand() % 2 + 1;
	}
}

void startGame()
{
	// TODO: Start the game
	//		 Flip coin who starts, player one or player two.
	//		 Implement this with random number generator. 
	//		set winner to currently playing.
	currentPlayer = startingPlayer();
	cout << "player:\t" << currentPlayer << " is first to go.";
}

void isGameOver()
{
	/*
	if (player == playerOne)
	{
		printf("Player one won! Practice more noOb!");
		//checkHighScore();
		//returnToMainScreen();
	}
	*/
}

void switchPlayer()
{
	if (currentPlayer == playerOne)
	{
		currentPlayer = playerTwo;
	}
	else if (currentPlayer == playerTwo)
	{
		currentPlayer = playerOne;
	}
}

bool isSquareEmpty(int move)
{
	if (gameBoard[move - 1] > 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

void makeAMove(int movePlayer)
{
	gameBoard[movePlayer-1] = currentPlayer;

	for (int j = 0; j < boardSize; j++)
	{
		cout << gameBoard[j] << "\t";
	}
	cout << "\n";
}

int main()
{
	initGame();
	drawBoard();
	printRules();
	startGame();

	while (isRunning)
	{
		cout << "Player " << currentPlayer << ": Please make a move";
		cin >> movePlayer;

		// check if the square is not already occupied
		isEmpty = isSquareEmpty(movePlayer);

		if (isEmpty)
		{
			makeAMove(movePlayer);
		}
		else 
		{
			cout << "This square is already taken, please choose another.\n";
			cin >> movePlayer;
		}
		/*
		if (playerOneWon)
		{
			gameOver(playerOne);
			isRunning = false;
		}
		else if (playerTwoOne)
		{
			gameOver(playerTwo);
			isRunning = false;
		}

		makeAMove();
		updateGameBoard();
		isGameOver();
		switchPlayer();
		*/
	}

	return 0;
}


