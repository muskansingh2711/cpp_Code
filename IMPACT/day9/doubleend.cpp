// delete from both ends (double-ended queue)
#include <bits/stdc++.h>
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
void enqueue_front(int data){
    Node* nn = new Node();
    nn->data = data;
    nn->next = head;
    if(tail==nullptr){
        head = nn;
        tail = nn;
    } else{
        nn->next = head;
        head = nn;
    }
}
void dequeue_end(){
    if(tail==nullptr){
        cout<<"Queue is empty";
    } else if(tail == head){
        head=nullptr;
        tail=nullptr;
    } else{
        Node* temp = head;
        while(temp->next->!=tail)
        temp = temp->next;
        cout<<tail->data<<" deleted."<<endl;
        temp->next = nullptr;
        tail = temp;
    }
}
void dequeue(){
    if(tail==nullptr){
        cout<<"Queue is empty";
    }
    else if(tail == head){
        head=nullptr;
        tail=nullptr;
    } else{
        Node* temp = head;
        head = head->next;
        cout<<tail->data<<" deleted."<<endl;
        delete(temp);
    }
}
void display()
{
   if(tail==nullptr)
   cout<<"Queue is empty";
   else{
       Node* temp = head;
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
    enqueue_front(20);
    display();
    dequeue_end();
    display();
}