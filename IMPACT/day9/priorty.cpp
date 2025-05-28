// queue for priority 

#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
    int priority;
};
Node* head = nullptr;
Node* tail = nullptr;
void enqueue(int data, int priority){
    Node* nn = new Node();
    nn->data = data;
    nn->next = nullptr;
    nn->priority = priority;
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
        cout<<"Queue is empty";
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
    enqueue(10, 1);
    enqueue(20, 2);
    enqueue(30, 3);
    display();
    dequeue();
    display();
}
