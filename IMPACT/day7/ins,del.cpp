// Stack in C++
#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

using namespace std;

struct Node {
    int data;
    Node* next;
};

// Global pointers
Node* head = nullptr;
Node* tail = nullptr;

// Function declarations
Node* createNew(int data);
void insert(int data);
Node* insertAtFirst(int data);
Node* insertAtRandom(Node* head, int data, int pos);
Node* delAtEnd(Node* head);
Node* delAtFirst(Node* head);
Node* delAtRandom(Node* head, int pos);
void display();
int countNodes(Node* head);

Node* createNew(int data) {
    Node* node = new Node();
    node->data = data;
    node->next = nullptr;
    return node;
}

void insert(int data) {
    Node* node = createNew(data);
    if (head == nullptr) {
        head = tail = node;
    } else {
        tail->next = node;
        tail = node;
    }
}

Node* insertAtFirst(int data) {
    Node* node = createNew(data);
    if (head == nullptr) {
        head = tail = node;
    } else {
        node->next = head;
        head = node;
    }
    return head;
}

Node* insertAtRandom(Node* head, int data, int pos) {
    if (pos <= 1) {
        return insertAtFirst(data);
    }

    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Position out of bounds.\n";
        return head;
    }

    Node* node = createNew(data);
    node->next = temp->next;
    temp->next = node;

    if (node->next == nullptr) {
        tail = node;
    }

    return head;
}

Node* delAtEnd(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        delete head;
        return nullptr;
    }

    Node* temp = head;
    while (temp->next != tail) {
        temp = temp->next;
    }

    delete tail;
    tail = temp;
    tail->next = nullptr;
    return head;
}

Node* delAtFirst(Node* head) {
    if (head == nullptr) return nullptr;

    Node* temp = head;
    head = head->next;
    delete temp;

    if (head == nullptr) {
        tail = nullptr;
    }

    return head;
}

Node* delAtRandom(Node* head, int pos) {
    if (pos <= 1) {
        return delAtFirst(head);
    }

    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp == nullptr || temp->next == nullptr) {
        cout << "Position out of bounds.\n";
        return head;
    }

    Node* delNode = temp->next;
    temp->next = delNode->next;
    if (temp->next == nullptr) {
        tail = temp;
    }
    delete delNode;

    return head;
}

int countNodes(Node* head) {
    int count = 0;
    while (head) {
        count++;
        head = head->next;
    }
    return count;
}

void display() {
    Node* temp = head;
    cout << "Linked List: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

// Main Menu
int main() {
    srand(time(0)); // Seed for randomness
    int choice, value, position, n;

    do {
        cout << "\nMENU:\n";
        cout << "1. Insert at End\n";
        cout << "2. Insert at Beginning\n";
        cout << "3. Insert at Random Position\n";
        cout << "4. Delete at End\n";
        cout << "5. Delete at Beginning\n";
        cout << "6. Delete at Random Position\n";
        cout << "7. Delete Random Node\n";
        cout << "8. Display List\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                insert(value);
                break;
            case 2:
                cout << "Enter value to insert: ";
                cin >> value;
                head = insertAtFirst(value);
                break;
            case 3:
                cout << "Enter value and position: ";
                cin >> value >> position;
                head = insertAtRandom(head, value, position);
                break;
            case 4:
                head = delAtEnd(head);
                break;
            case 5:
                head = delAtFirst(head);
                break;
            case 6:
                cout << "Enter position to delete: ";
                cin >> position;
                head = delAtRandom(head, position);
                break;
            case 7:
                if (head == nullptr) {
                    cout << "List is empty.\n";
                    break;
                }
                position = rand() % countNodes(head) + 1;
                cout << "Deleting node at random position: " << position << "\n";
                head = delAtRandom(head, position);
                break;
            case 8:
                display();
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 0);

    return 0;
}
