#include <bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        int guessNumber, randomNumber;
    cout << "Guess a number between 1 to 5 :";
    cin >> guessNumber;

    while (guessNumber < 1 || guessNumber > 5)
    {
        cout << "Invalid! Guess a number between 1 to 5: ";
        cin >> guessNumber;
    }

    randomNumber = (rand() % 5) + 1;
    if (guessNumber == randomNumber)
    {
        cout << "You have won.";
    }
    else
    {
        cout << "You have lost!";
        cout << randomNumber<<endl;
    }
    }
    return 0;
}