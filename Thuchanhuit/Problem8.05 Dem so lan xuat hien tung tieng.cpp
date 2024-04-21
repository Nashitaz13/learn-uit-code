#include <iostream>
#include <map>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    if (s.empty()) {
        cout << "Chuoi rong." << endl;
        return 0;
    }

    map<string, int> wordCount;
    vector<string> words;
    stringstream ss(s);
    string word;

    while (ss >> word) {
        if (wordCount[word] == 0) {
            words.push_back(word);
        }
        wordCount[word]++;
    }

    for (const auto &word : words) {
        cout << word << ": " << wordCount[word] << endl;
    }

    return 0;
}

