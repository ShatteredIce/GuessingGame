#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
  srand(time(NULL));
  bool running = true;
  bool gameover = false;
  int randomnumber = rand() % 101;
  int input = 0;
  int guesses = 0;
  char endresult;
  cout << "You have found the RNG Guessing Game" << endl << endl;
  while (running == true and gameover == false) {
      cout << "Please input your guess." << endl;
      guesses += 1;
      cin >> input;
      if(randomnumber < input){
	cout << "Your number is too high." << endl;
      }
      else if(randomnumber > input){
	cout << "Your number is too low." << endl;
      }
      else{
	cout << "You win!" << endl;
	cout << "Number of guesses:" << guesses << endl;
	cout << "Do you want to quit? (y/n)" << endl;
	cin >> endresult;
	if(endresult == 'y') {
	  gameover = true;
	}
	else{
	  cout << "-----RESTART-----" << endl << endl;
	}
      }
  }
  return 0;
}
