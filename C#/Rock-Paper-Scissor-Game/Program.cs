namespace RockPaperScisor
{
    class game
    {
        public readonly string[] listOfGames = { "Rock", "Paper", "Scissor" };
        //takes the int from inputInteger method and returns an array of 3 strings:1st is the random choice
        //2nd is the entered choice , the 3rd is Win Lose or Tie string tag.
        public string[] play(int a)
        {
            int rnd = new Random().Next(1, 4);
            string[] result = { listOfGames[rnd - 1], listOfGames[a - 1], "" };
            if (a == rnd)
            {
                result[2] = "Tie";
            }
            else
            {
                switch (rnd)
                {
                    case 1:
                        if (a == 2)
                        {
                            result[2] = "Win";

                        }
                        else
                        {
                            result[2] = "Lose";
                        }
                        break;
                    case 2:
                        if (a == 1)
                        {
                            result[2] = "Lose";

                        }
                        else
                        {
                            result[2] = "Win";
                        }
                        break;
                    case 3:
                        if (a == 1)
                        {
                            result[2] = "Win";

                        }
                        else
                        {
                            result[2] = "Lose";
                        }
                        break;
                }
            }
            return result;

        }
        //the input method,will only read 1 2 3 or q as input and return it as integer, as for q it returns 0.
        public int InputInteger()
        {
            string x;
            int y;
            while (true)
            {
                x = Console.ReadKey().KeyChar.ToString();


                if (int.TryParse(x, out y) & y > 0 & y < 4)
                {
                    break;
                }
                else if (x.ToUpper() == "Q")
                {
                    y = 0;
                    break;
                }
                else
                {
                    Console.WriteLine($" what is this {x}? please enter a valide number, 1 for Rock, 2 for paper and 3 for scissor !!");
                }
            }
            return y;
        }
        static void Main(string[] args)
        {
            Console.Write("\t\t### welcome to rock paper scisor game ###\n\nHow to play: Enter 1 for Rock, 2 for Paper and 3 for Scissor.\n\t\t***To quit the game and show the final score enter q***\n\nLet's play:");
            int numberOfGames = 1, numberOfWonGames = 0, numberOfLostGames = 0, inputNumber;
            string[] resultOfGame = { };
            var begin = new game();
            while (true)
            {
                inputNumber = begin.InputInteger();
                if (inputNumber == 0 & numberOfGames == 1)
                {
                    Console.Write("\n\t\t****Farewell****");
                    break;
                }
                else if (inputNumber == 0 & numberOfGames > 1)
                {
                    Console.WriteLine($"\n\t\t\t\t***** You:{numberOfWonGames} , Me:{numberOfLostGames} , Ties:{numberOfGames - 1 - numberOfWonGames - numberOfLostGames}*****");
                    if (numberOfWonGames > numberOfLostGames)
                    {
                        Console.Write($"\n\t\t********You won with score of {numberOfWonGames - numberOfLostGames}********\nI can't wait to play against you again and get my revenge !!");
                        Console.ReadLine();
                        break;
                    }
                    else if (numberOfWonGames < numberOfLostGames)
                    {
                        Console.Write($"\n\t\t********You lost with score of {numberOfLostGames - numberOfWonGames}********\nI can't wait to play against you again and beat you to a pulp !!");
                        Console.ReadLine();
                        break;
                    }
                    else
                    {
                        Console.Write($"\n\t\t********This is a Tie********\nI can't wait to play against you again and for sure it will be my win !!");
                        Console.ReadLine();
                        break;
                    }

                }
                resultOfGame = begin.play(inputNumber);
                if (resultOfGame[2] == "Win")
                {
                    Console.WriteLine($"\nYou chose {resultOfGame[1]} and i got {resultOfGame[0]}\n\t\tUgh You won.But u won't Next time.This is the game number {numberOfGames}let's go again");
                    numberOfGames++;
                    numberOfWonGames++;
                }
                else if (resultOfGame[2] == "Tie")
                {
                    Console.WriteLine($"\nYou chose {resultOfGame[1]} and i got {resultOfGame[0]}\n\t\tIt is a Tie but i am ready to beat you in the next one.This is the game number {numberOfGames}.let's go again");
                    numberOfGames++;
                }
                else if (resultOfGame[2] == "Lose")
                {
                    Console.WriteLine($"\nYou chose {resultOfGame[1]} and i got {resultOfGame[0]}\n\t\tHAHA you are no match for me and i am ready to beat you again.This is the game number {numberOfGames}.let's go again");
                    numberOfGames++;
                    numberOfLostGames++;
                }
            }
        }
    }
}