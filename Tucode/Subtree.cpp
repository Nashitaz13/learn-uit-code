#include <iostream>
#include <queue>
using namespace std;
/*
Đoạn mã trên sẽ tạo ra hai cây nhị phân tìm kiếm S và T từ dữ liệu đầu vào. 
Sau đó nó sẽ kiểm tra xem cây S có phải là cây con của cây T hay không bằng cách sử dụng hàm isSubtree.
Hàm isSubtree sẽ kiểm tra xem hai cây có giống nhau không bằng cách sử dụng hàm isIdentical.
Nếu hai cây giống nhau thì nó sẽ trả về true, nếu không thì nó sẽ tiếp tục kiểm tra với các cây con bên trái và bên phải của cây T.
Nếu tìm thấy một cây con giống với cây S thì nó sẽ trả về true, nếu không thì nó sẽ trả về false.
Hàm CreateTree được sử dụng để tạo ra cây từ dữ liệu đầu vào. Hàm InsertNode được sử dụng để chèn một nút vào cây theo thứ tự của
cây nhị phân tìm kiếm. Các số nguyên được nhập vào cho đến khi gặp -1, lúc đó việc tạo cây sẽ kết thúc.
Các số nguyên sau -1 sẽ được sử dụng để tạo cây tiếp theo. Kết quả cuối cùng sẽ được in ra màn hình.*/
struct TNODE {
	int key;
	TNODE* pLeft;
	TNODE* pRight;
};
typedef TNODE* TREE;

void InsertNode(TREE &tree, int x) {
	if (tree == NULL) {
		tree = new TNODE;
		tree->key = x;
		tree->pLeft = tree->pRight = NULL;
	}
	else if (tree->key > x) {
		InsertNode(tree->pLeft, x);
	}
	else if (tree->key < x) {
		InsertNode(tree->pRight, x);
	}
}

void CreateTree(TREE &tree) {
	int x;
	while (cin >> x && x != -1) {
		InsertNode(tree, x);
	}
}

bool isIdentical(TREE S, TREE T) {
	if (S == NULL && T == NULL)
		return true;
	if (S == NULL || T == NULL)
		return false;
	return (S->key == T->key && isIdentical(S->pLeft, T->pLeft) && isIdentical(S->pRight, T->pRight));
}

bool isSubtree(TREE S, TREE T) {
	if (S == NULL)
		return true;
	if (T == NULL)
		return false;
	if (isIdentical(S, T))
		return true;
	return isSubtree(S, T->pLeft) || isSubtree(S, T->pRight);
}

int main() {
	TREE S = NULL, T = NULL;

	CreateTree(S);
	CreateTree(T);

	cout << boolalpha << isSubtree(S, T);

	return 0;
}
