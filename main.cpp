#include <iostream>

int getIntFromUser(std::string);
int add(int, int);

int main() {
  int a = getIntFromUser("a");
  int b = getIntFromUser("b");
  std::cout << "The sum of " << a << " and " << b << " is: " << add(a, b) << '\n';
}
