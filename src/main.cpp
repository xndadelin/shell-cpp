#include <iostream>
#include <cstring>
#include <string>
int main() {
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;


  std::string input;
  while(true) {
    std::cout << "$ ";  
    std::getline(std::cin, input);

    if(input.find("echo") != std::string::npos) {
      std::string token = input.substr(5);
      std::cout << token << std::endl;
    } else if(input.find("exit") != std::string::npos) {
      return input.substr(5).empty() ? 0 : std::stoi(input.substr(5));
    } else {
      std::cout << input << ": command not found" << std::endl;
    }
  }
}
