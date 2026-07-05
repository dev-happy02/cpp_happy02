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

// Delete the first node that matches the given value
Node* deleteByValue(Node* head, int value) {
    if (head == nullptr) return nullptr;

    // case 1: head itself holds the value
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    // case 2: search the rest of the list
    Node* curr = head;
    while (curr->next != nullptr && curr->next->data != value) {
        curr = curr->next;
    }

    if (curr->next != nullptr) {  // node found
        Node* temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
    }

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
    head->next->next = createNode(30);

    cout << "Before deletion: ";
    printList(head);

    head = deleteByValue(head, 20);

    cout << "After deletion:  ";
    printList(head);

    return 0;
}