#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

struct TNODE {
	int key;
	TNODE* pLeft;
	TNODE* pRight;
};
typedef TNODE* TREE;

TNODE* CreateNode(int x) {
	TNODE* p = new TNODE;
	if (p != NULL) {
		p->key = x;
		p->pLeft = p->pRight = NULL;
	}
	return p;
}

void AddNode(TREE& T, int x) {
	if (T == NULL) {
		TNODE* p = CreateNode(x);
		T = p;
	}
	else {
		if (T->key > x) {
			AddNode(T->pLeft, x);
		}
		else if (T->key < x) {
			AddNode(T->pRight, x);
		}
	}
}

void CreateTree(TREE& T) {
	int x;
	while (1) {
		cin >> x;
		if (x == -1) break;
		AddNode(T, x);
	}
}

int getMaximumWidth(TREE T) {
	if (T == NULL)
		return 0;

	queue<TNODE*> q;
	q.push(T);

	int result = 0;

	while (!q.empty()) {
		int count = q.size();
		result = max(count, result);

		while (count--) {
			TNODE* temp = q.front();
			q.pop();

			if (temp->pLeft != NULL)
				q.push(temp->pLeft);

			if (temp->pRight != NULL)
				q.push(temp->pRight);
		}
	}

	return result;
}

int main() {
	TREE T;
	T = NULL;
	CreateTree(T);

	if(T==NULL) cout << "Empty Tree.";
	else cout << getMaximumWidth(T);

	return 0;
}
