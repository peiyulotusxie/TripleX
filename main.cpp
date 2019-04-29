#include <iostream>

bool PlayGame(int Difficulty)
{
    // Print welcome messages to the terminal
    std::cout << "\nYou are a secret agent breaking into a level " << Difficulty;
    std::cout <<  " secure server room... \n";
    std::cout << "Enter the code to continue...\n";

    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;
    
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << "\n+ There are 3 numbers in the code\n";
    std::cout << "+ The codes add-up to: " << CodeSum << std::endl;
    std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\n*** Well done agent! You have extracted a file! ***\n";
        return true;
    }
    else
    {
        std::cout << "\n*** You entered the wrong code! Careful agent...try again! ***\n";
        return false;
    }
}

int main()
{
    std::system("cls"); // clear terminal

    int LevelDifficulty = 3;
    int MaxDifficulty = 5;

    while (LevelDifficulty <= MaxDifficulty)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);

        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }

    std::cout << "\n*** You got all the files! Now get out of there!*** \n";
    return 0;
}