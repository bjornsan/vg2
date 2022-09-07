import random


randomTall = random.randint(1, 10)
numberOfGuesses = 1
isRunning = True
guess = int( input("Gjett på et tall mellom 1 og 10\n>> ") )

while(isRunning):
    if numberOfGuesses < 3:
        if guess == randomTall:
            print("Du gjettet riktig")
            isRunning = False
        elif guess < randomTall:
            numberOfGuesses += 1
            print("Du gjettet for lavt")
            print("Gjett igjen: ")
            guess = int( input() )
        elif guess > randomTall:
            numberOfGuesses += 1
            print("Du gjettet for høyt")
            print("Gjett igjen: ")
            guess = int( input() )
    else:
        print("Du har gjettet feil for mange ganger")
        print("GAME OVER")
        isRunning = False