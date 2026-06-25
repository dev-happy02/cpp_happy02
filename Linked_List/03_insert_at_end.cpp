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

// Insert a new node at the end of the list
Node* insertAtEnd(Node* head, int value) {
    Node* newNode = createNode(value);

    if (head == nullptr) return newNode;  // empty list case

    Node* temp = head;
    while (temp->next != nullptr) {  // walk to the last node
        temp = temp->next;
    }
    temp->next = newNode;  // link last node to new node
    return head;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = createNode(10);
    head->next = createNode(20);

    cout << "Before insertion: ";
    printList(head);

    head = insertAtEnd(head, 30);

    cout << "After insertion:  ";
    printList(head);

    return 0;
}