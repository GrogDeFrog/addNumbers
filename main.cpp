#include "add.h"
#include "getIntFromUser.h"

#include <iostream>

int main() {
  int a = getIntFromUser("a");
  int b = getIntFromUser("b");
  std::cout << "The sum of " << a << " and " << b << " is: " << add(a, b) << '\n';
}
