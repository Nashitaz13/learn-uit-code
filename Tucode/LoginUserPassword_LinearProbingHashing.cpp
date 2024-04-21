#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

#define MAXTABLESIZE 10000
const int TableSize = 10000;

struct NODE {
	string username;
	string password;
};
typedef NODE* HASHTABLE[MAXTABLESIZE];

int Hash(string username) {
	int sum = 0;
	for (int i = 0; i < username.length(); i++) {
		sum += (int)username[i];
	}
	return sum % TableSize;
}

void CreateHash(HASHTABLE &H, int &CurrentSize, int n) {
	CurrentSize = 0;
	for (int i = 0; i < TableSize; i++) {
		H[i] = NULL;
	}
	for (int i = 0; i < n; i++) {
		NODE* p = new NODE;
		cin >> p->username >> p->password;
		int pos = Hash(p->username);
		H[pos] = p;
		CurrentSize++;
	}
}

void OutPassword(HASHTABLE H, int CurrentSize, int m) {
	for (int i = 0; i < m; i++) {
		string str;
		cin >> str;
		int pos = Hash(str);
		if (H[pos] != NULL && H[pos]->username == str) {
			cout << H[pos]->password << endl;
		} else {
			cout << "Unregistered User." << endl;
		}
	}
}

int main() {
	HASHTABLE H;
	int CurrentSize;
	int n, m;
	cin >> n >> m;

	CreateHash(H, CurrentSize, n);
	OutPassword(H, CurrentSize, m);

	return 0;
}
