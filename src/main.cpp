#include <iostream>
#include <cstring>
#include <string>
#include <unordered_map>

std::unordered_map<std::string, std::string> types = {
  {"echo", "echo is a shell builtin"}, 
  {"exit", "exit is a shell builtin"},
  {"type", "type is a shell builtin"}
};

int main() {
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  std::string input;
  while(true) {
    std::cout << "$ ";  
    std::getline(std::cin, input);

    if(input.find("echo") == 0) {
      std::string token = input.substr(5);
      std::cout << token << std::endl;
    } else if(input.find("exit") == 0) {
      return input.substr(5).empty() ? 0 : std::stoi(input.substr(5));
    } else if(input.find("type") == 0) {
      std::string token = input.substr(5);

      if(types.find(token) != types.end()) {
        std::cout << types[token] << std::endl;
      } else {
        std::cout << token << ": not found" << std::endl;
      }
    } else {
      std::cout << input << ": command not found" << std::endl;
    }
  }
}
