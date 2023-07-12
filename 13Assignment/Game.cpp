#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{

    while (1)
    {
        int guessNumber, randomNumber;

        cout << "Enter your guess bewteen 1 to 5 : ";
        cin >> guessNumber;

        randomNumber = rand() % 5 + 1;
        if (guessNumber == randomNumber)
        {
            cout << "You have won.." << endl;
        }

        else
            {
                cout << "You have lost .Better luck next time." <<endl 
                      << "Random Number is : " << randomNumber <<endl;
            }
    }

    return 0;
}
