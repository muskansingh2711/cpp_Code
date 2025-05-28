//Stack using linked list

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next; 
};

struct Node* create(int d) {
    struct Node* nn = new Node();
    nn->data = d;
    nn->next = nullptr;
    return nn;
}

// PUSH: Insert at beginning
struct Node* push(int d, struct Node* top) {
    struct Node* nn = create(d);
    nn->next = top;
    top = nn;
    cout << d << " pushed to stack.\n";
    return top;
}

// POP: Remove from beginning
struct Node* pop(struct Node* top) {
    if (top == nullptr) {
        cout << "Stack Underflow\n";
        return top;
    }
    struct Node* temp = top;
    cout << "Popped: " << top->data << "\n";
    top = top->next;
    delete temp;
    return top;
}

// PEEK: View top element
void peek(struct Node* top) {
    if (top == nullptr) {
        cout << "Stack is empty\n";
    } else {
        cout << "Top element: " << top->data << "\n";
    }
}

// DISPLAY: Print stack
void display(struct Node* top) {
    struct Node* temp = top;
    if (top == nullptr) {
        cout << "Stack is empty\n";
    } else {
        cout << "Stack (Top to Bottom): ";
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
}

int main() {
    struct Node* top = nullptr;

    top = push(10, top);
    top = push(20, top);
    top = push(30, top);

    display(top);
    peek(top);

    top = pop(top);
    display(top);
    peek(top);

    return 0;
}
