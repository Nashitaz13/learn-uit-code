#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct LIST {
    Node* pHead;
};

void CreateEmptyList(LIST& L) {
    L.pHead = NULL;
}

void AddNode(LIST& L, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (L.pHead == NULL) {
        L.pHead = newNode;
    } else {
        Node* temp = L.pHead;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void CreateList(LIST& L) {
    int value;
    cin >> value;
    while (value != -1) {
        AddNode(L, value);
        cin >> value;
    }
}

void Function(Node* head) {
    if (head == NULL) {
        cout << "Empty List." << endl;
        return;
    }

    Node* temp = head;
    while (temp != NULL) {
        Node* nextNode = temp->next;
        while (nextNode != NULL && nextNode->data >= temp->data) {
            nextNode = nextNode->next;
        }

        if (nextNode == NULL) {
            cout << temp->data << " -1" << endl;
        } else {
            cout << temp->data << " " << nextNode->data << endl;
        }

        temp = temp->next;
    }
}

int main() {
    LIST L;

	CreateEmptyList(L);

	CreateList(L);

	Function(L.pHead);

    return 0;
}
