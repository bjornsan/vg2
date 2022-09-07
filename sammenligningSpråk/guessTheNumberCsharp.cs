using System;

namespace guessTheNumber
{
    class Program
    {
        static void Main()
        {
            Random random = new Random();
            int randomTall = random.Next(1, 10);
            int numberOfGuesses = 1;

            bool isRunning = true;

            Console.WriteLine("Gjett på et tall mellom 1 og 10");
            string input = Console.ReadLine();
            int guess;
            int.TryParse(input, out guess);

            while (isRunning)
            {
                if (numberOfGuesses < 3)
                {
                    if (guess == randomTall)
                    {
                        Console.WriteLine("Du gjettet riktig");
                        isRunning = false;
                    }
                    else if (guess < randomTall)
                    {
                        numberOfGuesses++;
                        Console.WriteLine("Du gjettet for lavt");
                        Console.WriteLine("Gjett igjen: ");
                        input = Console.ReadLine();
                        int.TryParse(input, out guess);
                    }
                    else if (guess > randomTall)
                    {
                        numberOfGuesses++;
                        Console.WriteLine("Du gjettet for høyt");
                        Console.WriteLine("Gjett igjen: ");
                        input = Console.ReadLine();
                        int.TryParse(input, out guess);
                    }
                }
                else
                {
                    Console.WriteLine("Du har gjettet feil for mange ganger");
                    Console.WriteLine("GAME OVER");
                    isRunning = false;
				}
			}
		}
    }
}