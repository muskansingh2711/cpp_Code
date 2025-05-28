// insetion and deletion of queue using linked list

#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node* head = nullptr;
Node* tail = nullptr;

void enqueue(int data){
    Node* nn = new Node();
    nn->data = data;
    nn->next = nullptr;
    if(tail==nullptr){
        head =nn;
        tail = nn;
    } else{
        tail->next = nn;
        tail = nn;
    }
}

void dequeue(){
    if(tail==nullptr)
        cou<<"Queue is empty";
    else if(tail == head){
        head=nullptr;
        tail=nullptr;
    } else{
        Node* temp = head;
        head = head->next;
        cout<<temp->data<<" deleted."<<endl;
        delete(temp);
    }
}
void display()
{
    Node* temp = head;
    if(head==nullptr)
    {
        cout<<"Queue is empty";
    }
    else{
        while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
    }
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
}