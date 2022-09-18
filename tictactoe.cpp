#include <iostream>
#include <stack>
#include <stdlib.h>
#include <Windows.h>

using namespace std;

const int playerOne = 1;
const int playerTwo = 2;
int currentPlayer;
char playerMarker = 's';
const int boardSize = 3;

int movePlayer = 0;

bool isRunning = true;
bool gameOver = true;
bool playerOneWon = false;
bool playerTwoWon = false;
bool isEmpty = false;

char gameBoard[boardSize][boardSize] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9' } };


void drawBoard()
{ 
	cout << "\t\t\t\t_________________________________________________\n";
	cout << "\t\t\t\t|\t\t|\t\t|\t\t|\n";
	cout << "\t\t\t\t|\t" << gameBoard[0][0] << "\t | \t" << gameBoard[0][1] << "\t | \t" << gameBoard[0][2] << "\t | \n";
	cout << "\t\t\t\t|\t\t|\t\t|\t\t|\n";
	cout << "\t\t\t\t_________________________________________________\n";
	cout << "\t\t\t\t|\t\t|\t\t|\t\t|\n";
	cout << "\t\t\t\t|\t" << gameBoard[1][0] << "\t | \t" << gameBoard[1][1] << "\t | \t" << gameBoard[1][2] << "\t | \n";
	cout << "\t\t\t\t|\t\t|\t\t|\t\t|\n";
	cout << "\t\t\t\t_________________________________________________\n";
	cout << "\t\t\t\t|\t\t|\t\t|\t\t|\n";
	cout << "\t\t\t\t|\t" << gameBoard[2][0] << "\t | \t" << gameBoard[2][1] << "\t | \t" << gameBoard[2][2] << "\t | \n";
	cout << "\t\t\t\t|\t\t|\t\t|\t\t|\n";
	cout << "\t\t\t\t_________________________________________________\n";
	cout << "\n\n\n";
}

void printRules()
{
	cout << "\n\t\t\t\t\t\tTIC TAC TOE\n";
	cout << "\n\t\t\t\t\t  Player 1 = X, Player 2 = O\n";
	cout << "\n\t\t\t\t   First player to get three in a row wins.\n";
	cout << "\n\n\n";
}


int startingPlayer()
{
	// Making sure that the seed for random numbers always are different (Synched to the system clock)
	srand(time(NULL));
	int startingPlayer = 1 + rand() % 2;
	return startingPlayer;
}

void startGame()
{
	cout << "Press space to flip a coin who shall start.";
	
	while (!(GetKeyState(0x20) & 0x8000));		// VK_SPACE

	currentPlayer = startingPlayer();

	if (currentPlayer == playerOne)
		playerMarker = 'X';
	else
		playerMarker = 'O';

	cout << "\n\nplayer:\t" << currentPlayer << " starts.";
}

void switchPlayer()
{
	if (currentPlayer == playerOne)
	{
		playerMarker = 'O';
		currentPlayer = playerTwo;
	}
	else if (currentPlayer == playerTwo)
	{
		currentPlayer = playerOne;
		playerMarker = 'X';
	}
}

bool isSquareEmpty(int move, int index)
{

	if (move > 0 && move < 4)
	{
		if ((gameBoard[0][index] != 'X') && (gameBoard[0][index] != 'O'))
		{
			return true;
		}
	}
	else if (move > 3 && move < 7)
	{
		if ((gameBoard[1][index] != 'X') && (gameBoard[1][index] != 'O'))
		{
			return true;
		}
	}
	else if (move > 6 && move < 10)
	{
		if ((gameBoard[2][index] != 'X') && (gameBoard[2][index] != 'O'))
		{
			return true;
		}
	}
	else if (move > 9 || move < 1)
	{
		cout << "Not a valid move, please choose a number betwen 1-9\n>>  ";
		int newMove;
		cin >> newMove;
		if (isSquareEmpty(newMove, index))
		{
			return true;
		}
	}
	return false;
}

void makeAMove(int move, int index, char playerMarker)
{
	if (move > 0 && move < 4)
	{
		gameBoard[0][index] = playerMarker;
	}
	else if (move > 3 && move < 7)
	{
		gameBoard[1][index] = playerMarker;
	}
	else if (move > 6 && move < 10)
	{
		gameBoard[2][index] = playerMarker;
	}
}

void isGameOver()
{
	// Specify winning conditions
	// Check wining conditions
	// if player won - do something

	/*
	if (player == playerOne)
	{
		printf("Player one won! Practice more noOb!");
		//checkHighScore();
		//returnToMainScreen();
	}
	*/
}

int main()
{
	printRules();
	drawBoard();
	startGame();
	

	while (isRunning)
	{
		cout << "\nPlayer " << currentPlayer << ": Please make a move";
		cin >> movePlayer;

		cout << "playerMarker = \t" << playerMarker;

		int index = movePlayer % 3;
		if (index == 0)
		{
			index = 2;
		}
		else 
		{
			index = index - 1;
		}

		// check if the square is not already occupied
		if (isSquareEmpty(movePlayer, index))
		{
			makeAMove(movePlayer, index, playerMarker);
			switchPlayer();
			printRules();
			drawBoard();
		}
		else
		{
			cout << "This square is already taken, please choose another.\n";
		}
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

		updateGameBoard();
		isGameOver();
		*/
		//}
		

		return 0;
	}


