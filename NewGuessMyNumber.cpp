#include <iostream>
#include<cstdlib> //Trabaja con números random
using namespace std;

int Guess(int low, int high);

int main()
{

    srand(static_cast<unsigned int>(time(0)));
    //srand(time(NULL));
    int randomNumber = rand();
    int guess;
    int secretNumber = (randomNumber % 100) + 1;
    int tries = 0;

    cout << "GUESS MY NUMBER" << endl;
    cout << "Adivina el número en el menor número de intentos posible." << endl;

    //Depurar
    cout << secretNumber;
    do
    {
        guess = Guess(1, 100);

        tries++;

        if (guess > secretNumber) {
            cout << "Muy Alto\n\n";
        }
        else if (guess < secretNumber) {
            cout << "Muy Bajo\n\n";
        }
        else {
            cout << "Excelente lo hiciste en -- " << tries << "-- intentos";

        }
    } while (guess != secretNumber);
}

int Guess(int low, int high)
{
    int guess;

    do {
        cout << "\nEnter a guess (1-100):" << endl;
        cin >> guess;
    } while (guess < low || guess > high);

    return guess;
}