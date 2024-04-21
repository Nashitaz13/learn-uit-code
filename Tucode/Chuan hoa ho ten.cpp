#include <iostream>
#include <string>
#include <sstream>

std::string normalizeName(std::string name) {
    for (int i = 0; i < name.length(); i++) {
        if (i == 0 || name[i - 1] == ' ') {
            name[i] = toupper(name[i]);
        } else {
            name[i] = tolower(name[i]);
        }
    }
    return name;
}

int main() {
    std::string name;
    getline(std::cin, name);
    std::cout << normalizeName(name) << std::endl;
    return 0;
}