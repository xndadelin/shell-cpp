#include <iostream>

int main() {
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;


  std::cout << "$ ";

  std::string input;
  std::getline(std::cin, input);
  std::cout << input << ": command not found";
}
