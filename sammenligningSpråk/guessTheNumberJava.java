import java.util.Random;
import java.util.Scanner;

public class guessTheNumber
{
    public static void main(String[] args)
    {
        Random random = new Random(); //instance of random class
        int randomTall = random.nextInt(11);

        int numberOfGuesses = 1;

        boolean isRunning = true;

        System.out.println("Gjett på et tall mellom 1 og 10");
        Scanner scanner = new Scanner(System.in);
        int guess = scanner.nextInt();

        while (isRunning) 
        {
            if (numberOfGuesses < 3) 
            {
                if (guess == randomTall) 
                {
                    System.out.println("Du gjettet riktig");
                    isRunning = false;
                } 
                else if (guess < randomTall) 
                {
                    numberOfGuesses++;
                    System.out.println("Du gjettet for lavt");
                    System.out.println("Gjett igjen: ");
                    guess = scanner.nextInt();
                } 
                else if (guess > randomTall) 
                {
                    numberOfGuesses++;
                    System.out.println("Du gjettet for høyt");
                    System.out.println("Gjett igjen: ");
                    guess = scanner.nextInt();
                }
            } 
            else
            {
                System.out.println("Du har gjettet feil for mange ganger");
                System.out.println("GAME OVER");
                isRunning = false;
            }
        }
    }
}