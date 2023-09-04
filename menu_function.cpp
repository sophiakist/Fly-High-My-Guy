#include "function.h"

int userScore;
string userName;

void menu() {
  int menuChoice;
  int mathChoice;
  char diffChoice;
  string type;
  cout << "---------" << endl;
  cout << "FLY HIGH, MY GUY!" << endl;
  cout << "---------" << endl;
  cout << "Enter your initials: ";                          //enter username
  getline(cin,userName);
  while (menuChoice != 4) {
    cout << "" << endl;
    cout << "    ______________/ |" << endl;
    cout << "  /_]  ooooooooooo  |" << endl;
    cout << " |______---------___|" << endl;
    cout << "" << endl;
    cout << "MAIN MENU" << endl;
    cout << "1. PLAY GAME" << endl;                     //select desired option
    cout << "2. VIEW SCORES" << endl;
    cout << "3. HOW TO PLAY" << endl;
    cout << "4. CLOSE PROGRAM" << endl;
    cin >> menuChoice;

    if (menuChoice == 1) {
      cout << "" << endl;
      cout << "SELECT ARITHMETIC" << endl;              //select type of math problems
      cout << "---------" << endl;
      cout << "" << endl;
      cout << "1. ADDITION" << endl;
      cout << "2. SUBTRACTION" << endl;
      cout << "3. MULTIPLICATION" << endl;
      cin >> mathChoice;
      cout << "" << endl;
      cout << "SELECT DIFFICULTY" << endl;              //select difficulty
      cout << "---------" << endl;
      cout << "(E)ASY" << endl;
      cout << "(M)EDIUM" << endl;
      cout << "(H)ARD" << endl;
      cin >> diffChoice;
      if (mathChoice == 1) {  
          type = "ADDITION";                      //depending on chosen math, the function will run
          userScore = addition(diffChoice);
          cout << "YOU FLEW " << userScore << " MILES!" << endl;
          save_score(userName, userScore, type, diffChoice);
          if (userScore == 0){
              cout << "WHAT A NICE VIEW. FROM THE GROUND.";
          }
          else if (userScore <= 5){
              cout << "CONGRATS. YOU WENT TO ELEMENTARY SCHOOL." << endl;
          }
          else if (userScore <= 10){
              cout << "CONGRATS! YOU KNOW HOW TO FLY A PLANE!" << endl;
          }
          else if (userScore <= 15){
              cout << "CONGRATS. YOU'RE REALLY GETTING THE HANG OF THIS." << endl;
          }
          else if (userScore <= 20){
              cout << "CONGRATS! YOU EARNED YOUR PILOTS LICENSE!" << endl;
          }

      } else if (mathChoice == 2) {
          userScore = subtraction(diffChoice);
          type = "SUBTRACTION";
          cout << "YOU FLEW " << userScore << " MILES!" << endl;
          save_score(userName, userScore, type, diffChoice);
          if (userScore == 0){
              cout << "WHAT A NICE VIEW. FROM THE GROUND.";
          }
          else if (userScore <= 5){
              cout << "CONGRATS. YOU WENT TO ELEMENTARY SCHOOL." << endl;
          }
          else if (userScore <= 10){
              cout << "CONGRATS! YOU KNOW HOW TO FLY A PLANE!" << endl;
          }
          else if (userScore <= 15){
              cout << "CONGRATS. YOU'RE REALLY GETTING THE HANG OF THIS." << endl;
          }
          else if (userScore <= 20){
              cout << "CONGRATS! YOU EARNED YOUR PILOTS LICENSE!" << endl;
          }
      } else if (mathChoice == 3) {
          userScore = multiplication(diffChoice);
          type = "MULTIPLICATION";
          cout << "YOU FLEW " << userScore << " MILES!" << endl;
          save_score(userName, userScore, type, diffChoice);
          if (userScore == 0){
              cout << "WHAT A NICE VIEW. FROM THE GROUND.";
          }
          else if (userScore <= 5){
              cout << "CONGRATS. YOU WENT TO ELEMENTARY SCHOOL." << endl;
          }
          else if (userScore <= 10){
              cout << "CONGRATS! YOU KNOW HOW TO FLY A PLANE!" << endl;
          }
          else if (userScore <= 15){
              cout << "CONGRATS. YOU'RE REALLY GETTING THE HANG OF THIS." << endl;
          }
          else if (userScore <= 20){
              cout << "CONGRATS! YOU EARNED YOUR PILOTS LICENSE!" << endl;
          }
      }

    }

    if (menuChoice == 2) {                  //displays scores
      cout << "" << endl;
      cout << "SCORES" << endl;
      string line;
      ifstream myfile("Scores.txt");
    if (myfile.is_open()) {
    while ( getline (myfile, line) ) {
      cout << line << '\n';
    }
    myfile.close();
  }
    else cout << "Unable to open file"; 
    }

    if (menuChoice == 3) {                          //game instructions
      cout << "" << endl;
      cout << "HOW FAR CAN YOU FLY?" << endl;
      cout << "---------" << endl;
      cout << "Solve Math Problems to fuel your plane" << endl;
      cout << "Plane stops flying when you get a MISS on a problem" << endl;
      cout << "EASY - Math Problems with digits from 0-10 (except multiplication: 0-5)" << endl;
      cout << "MEDIUM - Math Problems with digits from 0-25 (except multiplication: 0-10)" << endl;
      cout << "HARD - Math Problems with digits from 0-50 (except multiplication: 0-15)" << endl;
    }
  }
  cout << "---------" << endl;                              //ending of gmae
  cout << "THANK YOU FOR PLAYING OUR GAME!" << endl;
  cout << "---------" << endl;
}
