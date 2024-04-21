#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int data) {
    Node* node = new Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}

Node* insert(Node* node, int data) {
    if (node == NULL) {
        return(newNode(data));
    }
    else {
        if (data <= node->data) {
            node->left = insert(node->left, data);
        }
        else {
            node->right = insert(node->right, data);
        }
        return(node);
    }
}

int getMaxWidth(Node* root) {
    if (root == NULL)
        return 0;

    queue<Node*> q;
    q.push(root);

    int result = 0;

    while (!q.empty()) {
        int count = q.size();
        result = max(count, result);

        while (count--) {
            Node* temp = q.front();
            q.pop();

            if (temp->left != NULL)
                q.push(temp->left);

            if (temp->right != NULL)
                q.push(temp->right);
        }
    }

    return result;
}

int main() {
    Node* root = NULL;
    int data;
    cin >> data;
    while(data != -1) {
        root = insert(root, data);
        cin >> data;
    }
    
    int maxWidth = getMaxWidth(root);
    if(maxWidth == 0) {
        cout << "Empty tree.";
    } else {
        cout << maxWidth;
    }
    
    return 0;
}


