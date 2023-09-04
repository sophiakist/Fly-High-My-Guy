#include "function.h"

int addition(char diffchoice) {
  srand(time(NULL));
  int numOne;
  int numTwo;
  int answer;
  int userAnswer;
  int points = 0;
  bool incorrect = false;
  switch (diffchoice) {
  case 'E':                                       //If E is chosen then only numbers (1-3) will be given
    do {
      numOne = rand() % 10 + 1;
      numTwo = rand() % 10 + 1;
      answer = numOne + numTwo;

      cout << " " << numOne << endl;
      cout << "+" << numTwo << endl;
      cout << "----" << endl;
      cin >> userAnswer;                           //Prints out the promblem and gets answer

      if (answer == userAnswer) {                  //If user answer is equal to answer than one point is earned
        points += 1;
        cout << "You got it right!!" << endl;
      } else {
        incorrect = true;                          //If user answer is incorrect than the game ends and breaks
        cout << "That's incorrect!" << endl;
      }
    } while (incorrect != true);
    break;
  case 'M':                                       //If M is chosen then only numbers (1-25) will be given
    do {
      numOne = rand() % 25 + 1;
      numTwo = rand() % 25 + 1;
      answer = numOne + numTwo;

      cout << " " << numOne << endl;
      cout << "+" << numTwo << endl;
      cout << "----" << endl;
      cin >> userAnswer;                           //Prints out the promblem and gets answer

      if (answer == userAnswer) {                  //If user answer is equal to answer than one point is earned
        points += 1;
        cout << "You got it right!!" << endl;
      } else {
        incorrect = true;                          //If user answer is incorrect than the game ends and breaks
        cout << "That's incorrect!" << endl;
      }
    } while (incorrect != true);
    break;
  case 'H':                                       //If H is chosen then only numbers (1-50) will be given
    do {
      numOne = rand() % 50 + 1;
      numTwo = rand() % 50 + 1;
      answer = numOne + numTwo;

      cout << " " << numOne << endl;
      cout << "+" << numTwo << endl;
      cout << "----" << endl;
      cin >> userAnswer;                           //Prints out the promblem and gets answer

      if (answer == userAnswer) {                  //If user answer is equal to answer than one point is earned
        points += 1;
        cout << "You got it right!!" << endl;
      } else {
        incorrect = true;                          //If user answer is incorrect than the game ends and breaks
        cout << "That's incorrect!" << endl;
      }
    } while (incorrect != true);
    break;
  }
  return points;
}