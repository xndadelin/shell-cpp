#include <iostream>

int main() {
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;


  std::string input;
  std::getline(std::cin, input);
}
