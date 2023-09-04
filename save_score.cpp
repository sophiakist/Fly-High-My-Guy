#include "function.h"

void save_score (string userName, int userScore, string type, char diffChoice) {
  ofstream myfile ("Scores.txt", ios::app);
  string message;
  message = type + " - " + diffChoice + " - " + userName + " - ";
  if (myfile.is_open ()) {
    myfile << message << userScore << endl;
  }
  myfile.close();
}
