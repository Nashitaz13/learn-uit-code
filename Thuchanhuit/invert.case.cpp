#include <iostream>
#include <cctype> // for tolower and toupper
using namespace std;
string toggleCase(const string& text) {
    string toggledText;
    for (char c : text) {
        if (isupper(c)) {
            toggledText += tolower(c);
        } else if (islower(c)) {
            toggledText += toupper(c);
        } else {
            toggledText += c;
        }
    }
    return toggledText;
}

int main() {
    string text;
    getline(std::cin, text);
    cout << toggleCase(text) << endl;
    return 0;
}
