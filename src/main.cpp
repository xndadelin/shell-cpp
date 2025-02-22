#include <iostream>

int main() {
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;


  std::string input;
  std::cout << "$ ";
  while(true) {
    std::getline(std::cin, input);
    std::cout << input << ": command not found" << std::endl;
    std::cout << "$ ";
  }
}
