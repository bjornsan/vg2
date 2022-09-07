function guessTheNumber()
{
    let randomTall = Math.floor(Math.random() * 11);
    let numberOfGuesses = 1;
    let isRunning = true;

    let input = prompt("Gjett på et tall mellom 1 og 10");

    while (isRunning)
    {
        if (numberOfGuesses < 3)
        {
            if (input == randomTall)
            {
                console.log("Du gjettet riktig");
                isRunning = false;
            }
            else if (input < randomTall)
            {
                numberOfGuesses++;
                console.log("Du gjettet for lavt");
                input = prompt("Gjett igjen: ");
            }
            else if (input > randomTall)
            {
                numberOfGuesses++;
                console.log("Du gjettet for høyt");
                input = prompt("Gjett igjen: ");
            }
        }
        else
        {
            console.log("Du har gjettet feil for mange ganger");
            console.log("GAME OVER");
            isRunning = false;
        }
    }
}