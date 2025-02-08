#include <iostream>
#include <string>

void handle_command(const std::string& command) {
  std::cout << command << ": command not found" << std::endl;
}

int main() {
  // Flush after every std::cout / std:cerr
  std::cout << std::unitbuf;
  std::cerr << std::unitbuf;

  std::cout << "$ ";

  std::string input;
  std::getline(std::cin, input);

  handle_command(input);
}
