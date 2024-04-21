#include <iostream>
using namespace std;

struct NODE {
	int info;
	NODE* pNext;
};

struct LIST {
	NODE* pHead;
	NODE* pTail;
};

void CreateEmptyList(LIST &L) {
	L.pHead = L.pTail = NULL;
}

NODE* CreateNode(int x) {
	NODE* p = new NODE;
	if (p == NULL) exit(1);
	p->info = x;
	p->pNext = NULL;
	return p;
}

void AddTail(LIST &L, NODE* p) {
	if (L.pHead == NULL) {
		L.pHead = L.pTail = p;
	}
	else {
		L.pTail->pNext = p;
		L.pTail = p;
	}
}

void CreateList(LIST &L) {
	int x;
	while (true) {
		cin >> x;
		if (x == -1) break;
		NODE* p = CreateNode(x);
		AddTail(L, p);
	}
}

void Function(LIST &L) {
	if (L.pHead == NULL || L.pHead->pNext == NULL) return;

	NODE* slow = L.pHead;
	NODE* fast = L.pHead;

	while (fast != NULL && fast->pNext != NULL && fast->pNext->pNext != NULL) {
		slow = slow->pNext;
		fast = fast->pNext->pNext;
	}

	NODE* mid = slow->pNext;
	slow->pNext = NULL;

	NODE* curr = mid;

	while (curr->pNext != NULL) {
		curr = curr->pNext;
	}

	curr->pNext = L.pHead;

	L.pHead = mid;
}

void PrintList(NODE* p) {
	if (p != NULL) {
		cout << p->info << " ";
		PrintList(p->pNext);
	}
}

int main() {
	LIST L;

	CreateEmptyList(L);
	CreateList(L);

	Function(L);

	PrintList(L.pHead);

	return 0;
}
