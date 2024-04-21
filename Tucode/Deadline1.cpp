#include <bits/stdc++.h>

using namespace std;

struct Node {
	int value;
	Node* link;
};

int main(){
	Node A,B,C;
	A.value = 1; B.value = 2; C.value = 3;
	A.link = &B;
	B.link = &C;
	C.link = NULL;
	cout << "value of B: " << (A.link)->value << endl;
	cout << "value of C: " << (B.link)->value << endl;
	cout << "value of A: " << (A.value) << endl;
	cout << endl;
	cout << A.link->link->value << endl;
	//cho A.link tro vao link, tuc la tro vao B thi luc nay gia su A co dia chi
	// la d00, B.link co dia tri la f00 thi luc nay A.link->link no co nghia la d00
	// sau do d00->value thi value cua A no = C
	
	return 0;
}


