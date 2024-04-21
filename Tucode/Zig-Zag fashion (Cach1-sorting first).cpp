#include <iostream>
using namespace std;

// C?u trúc c?a m?t node
struct NODE {
	int info;
	NODE* pNext;
};
// C?u trúc c?a m?t DSLK
struct LIST {
	NODE* pHead;
	NODE* pTail;
};

void CreateEmptyList(LIST& L) {
	L.pHead = L.pTail = NULL;
}

NODE* GetNode(int x) {
	NODE* p = new NODE;
	if (p == NULL)
		exit(1);
	p->info = x;
	p->pNext = NULL;
	return p;
}

void AddTail(LIST& L, NODE* p) {
	if (L.pHead == NULL)
		L.pHead = L.pTail = p;
	else {
		L.pTail->pNext = p;
		L.pTail = p;
	}
}

void CreateList(LIST& L) {
	int x;
	while (cin >> x && x != -1) {
		NODE* p = GetNode(x);
		AddTail(L, p);
	}
}

void ZigZagList(LIST& L) {
	if (L.pHead == NULL || L.pHead->pNext == NULL)
		return;

	NODE* p = L.pHead;
	bool flag = true;

	while (p->pNext != NULL) {
		if (flag && p->info > p->pNext->info || !flag && p->info < p->pNext->info)
			swap(p->info, p->pNext->info);
		flag = !flag;
		p = p->pNext;
	}
}

void PrintList(NODE* p) {
	if (p == NULL) {
		cout << "Empty List." << endl;
	} else {
		while (p != NULL) {
			cout << p->info << " ";
			p = p->pNext;
		}
		cout << endl;
	}
}

int main() {
	LIST L;
	CreateEmptyList(L);

	CreateList(L);

	ZigZagList(L);

	PrintList(L.pHead);

	return 0;
}

