#include <bits/stdc++.h>

using namespace std;

void ch(char *s){
	int len = strlen(s);
	for (int i = 0; i < len; i++)
		if (i == 0 || s[i - 1] == ' ')
			s[i] = toupper(s[i]);
		else 
			s[i] = tolower(s[i]);
}
int main() {
	char s[300] = "gooD LUcK.";
	ch(s);
	cout << s << endl;
    return 0;
}

