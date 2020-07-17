#include <iostream>
#include <string>

int getRawInt(std::string variableName);
int pow(int, int);
bool charIsNumber(char);

int getIntFromUser(std::string variableName) {
  int i {};
  bool b {};
  while(!b) {
    b = true;
    try {
      i = getRawInt(variableName);
    } catch(std::exception*) {
      i = 0;
      std::cout << "Hey! That's not an integer!\n";
      b = false;
    }
  }

  return i;
}

int getRawInt(std::string variableName) {
  std::string userInput = "";
  int out{};

  std::cout << "Enter an int value for " << variableName << ": ";
  std::cin >> userInput;  
  for(int i = 1; i < userInput.size(); ++i) {
    if(!charIsNumber(userInput.at(i))) throw new std::exception;
    out += pow(10, userInput.size() - i - 1) * (userInput.at(i) - 48);
  }
  if(charIsNumber(userInput.at(0))) {
    out += pow(10, userInput.size() - 1) * (userInput.at(0) - 48);
  } else if(userInput.at(0) == 45) {
    out *= -1;
  } else {
    throw new std::exception;
  }
  
  return out;
}

int pow(int a, int b) {
  if(b > 1) return a * pow(a, b - 1);
  if(b == 1 || b == 0) {
    return a * b + 1 - b;
  } else {
    return -1;
  }
}

bool charIsNumber(char c) {
  int val {(int) c};
  return !(val < 48 || val > 58);
}
