#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;  // 🛠️ Added missing semicolon
};

struct Node* create(int d) {
    struct Node* nn = new Node();
    nn->data = d;
    nn->next = nullptr;
    return nn;
}

struct Node* insert(int d, struct Node* head) {
    struct Node* nn = create(d);
    if (head == nullptr) {
        head = nn;
    } else {
        nn->next = head;
        head = nn;
    }
    return head;
}

// Renamed function from 'delete' to 'deleteNode'
struct Node* deleteNode(int d, struct Node* head) {
    if (head == nullptr) {
        cout << "List is empty\n";
        return head;
    }

    struct Node* temp = head;
    struct Node* prev = nullptr;

    if (head->data == d) {
        head = head->next;
        delete temp;
        return head;
    }

    while (temp != nullptr && temp->data != d) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Element not found\n";
        return head;
    }

    prev->next = temp->next;
    delete temp;
    return head;
}

void display(struct Node* head) {
    struct Node* temp = head;
    if (head == nullptr) {
        cout << "List is empty\n";
    } else {
        while (temp != nullptr) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
}

int main() {
    struct Node* head = nullptr;

    head = insert(10, head);
    head = insert(20, head);
    head = insert(30, head);

    cout << "Initial List: ";
    display(head);

    head = deleteNode(20, head);

    cout << "After deleting 20: ";
    display(head);

    return 0;
}
