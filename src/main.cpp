#include <iostream>
#include <cstring>
int main() {
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;


  std::string input;
  while(true) {
    std::cout << "$ ";
    std::getline(std::cin, input);
    if(strstr(input.c_str(), "exit") != nullptr) {
      return 0;
    }
    std::cout << input << ": command not found" << std::endl;
  }
}
