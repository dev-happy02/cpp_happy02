#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}

// Insert a new node at the beginning of the list
Node* insertAtBeginning(Node* head, int value) {
    Node* newNode = createNode(value);
    newNode->next = head;  // new node points to old head
    return newNode;        // new node becomes the head
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = createNode(20);
    head->next = createNode(30);

    cout << "Before insertion: ";
    printList(head);

    head = insertAtBeginning(head, 10);

    cout << "After insertion:  ";
    printList(head);

    return 0;
}