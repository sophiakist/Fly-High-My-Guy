#pragma once

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int addition(char diffchoice);
int subtraction(char diffchoice);
int multiplication(char diffchoice);
void menu();
int highscore ();
void save_score (string userName, int userScore, string type, char diffChoice);