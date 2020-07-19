#include "charIsNumber.h"
#include "pow.h"

#include <iostream> 
#include <string>

int getIntFromUser(std::string variableName) {
  int out {};
  bool enteredInt {};
  
  while(!enteredInt) {
    enteredInt = true;
    std::string userInput = "";
  
    std::cout << "Enter an int value for " << variableName << ": ";
    std::cin >> userInput;  
    
    // Check characters to make sure they're numbers
    for(int i = 1; i < userInput.size(); ++i) {
      if(!charIsNumber(userInput.at(i))) {	// If not a number
        out = 0;				// Reset output
        enteredInt = false;				// Restart the loop
        break;
      }
      out += pow(10, userInput.size() - i - 1) * (userInput.at(i) - 48);
    }
    
    if(enteredInt) {
      // Checks the first character last because it was easier to implement
      if(charIsNumber(userInput.at(0))) {
        out += pow(10, userInput.size() - 1) * (userInput.at(0) - 48);
      } else if(userInput.at(0) == 45) {
        out *= -1;	// Sets input to negative if first character is a '-'
      } else {
        out = 0;
        enteredInt = false;
      }
    }
    
    if(!enteredInt) {
      std::cout << "Hey! That's not an integer!\n";
    }
  }

  return out;
}


