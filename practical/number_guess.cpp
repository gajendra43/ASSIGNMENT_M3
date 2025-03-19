#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  srand(time(0)); 
  int randomnumber = rand() % 100 + 1; 
  int guess;
  int attempts = 0;

  cout << "Welcome to the Number Guessing Game!" << endl;
  cout << "I've chosen a secret number between 1 and 100." << endl;

  while (true) {
    cout << "Enter your guess: ";
    cin >> guess;
    attempts++;

    if (guess == randomnumber) {
      cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
    } else if (guess < randomnumber) {
      cout << "Too low! Try again." << endl;
    } else {
      cout << "Too high! Try again." << endl;
    }
  }

  return 0;
}
