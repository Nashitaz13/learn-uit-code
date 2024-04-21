#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string output;
    for (char c : input) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            output += c;
        }
    }

    std::cout << output << std::endl;

    return 0;
}

