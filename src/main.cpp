#include <iostream>
#include <cstring>
#include <string>
#include <unordered_set>

std::unordered_set<std::string> commands = {
  "echo",
  "exit",
  "type"
};

// test comment

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
      
      if(commands.find(token) != commands.end()) {
        std::cout << token << " is a shell builtin" << std::endl;
      } else {
        std::cout << token << ": not found" << std::endl;
      }

    } else {
      std::cout << input << ": command not found" << std::endl;
    }
  }
}
