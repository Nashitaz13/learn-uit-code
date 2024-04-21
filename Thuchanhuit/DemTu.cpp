#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int countWords(string str) {
    stringstream s(str);
    string word;
    int count = 0;
    while (s >> word) count++;
    return count;
}

int main() {
    string str;
    getline(cin, str);
    cout << countWords(str) << endl;
    return 0;
}

