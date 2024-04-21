#include<bits/stdc++.h>
using namespace std;
int f(const char *s1, const char *s2){
	int i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if(s1[i] == '\0' && s2[i] == '\0')
		return 0;
	if(s1[i] == '\0' || s1[i] < s2[i])
		return -1;
	return 1;
}

int main() {
    char *s1 = "UIT";
    char *s2 = "uit";
    cout << f(s1,s2);
    return 0;
}

