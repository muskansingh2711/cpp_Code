#include<bits/stdc++.h>
using namespace std;

struct Node
{
int data;
struct Node* next;
};
struct Node* create(int d)
{
     struct Node* nn=new Node();
     nn->data=d;
     nn->next=nullptr;
     return nn;
}
struct Node* insert(int d,struct Node* head)
{
struct Node* nn=create(d);
if(head==nullptr)
head=nn;
else
{
nn->next=head;
head=nn;
return head;
}
}
void display(struct Node* head)
{
struct Node* temp=head;
if(head==nullptr)
cout<<"List is empty";
else
{
while(temp!=nullptr)
{
cout<<temp->data<<"->";
temp=temp->next;
}
cout<<endl;
}
}
struct Node* insertmid(int pos,int data,struct Node* head)
{
           struct Node* nn=create(data);
           if(head==nullptr)
	head=nn;
           else if(pos==1)
	head=insert(data,head);
           else
           {
	int count=0;
	struct Node* temp=head;
	while(temp!=nullptr)
	{
	      count++;
	      temp=temp->next;
	}
	if(pos>(count+1))
	       cout<<"Invalid Position";
	else
	{
	       temp=head;
	       for(int i=0;i<pos-2;i++)
		temp=temp->next;
	       nn->next=temp->next;
	       temp->next=nn;
	}
         }
return head;
}	
struct Node* deletemid(int pos,struct Node* head)
{
if(head==nullptr)
cout<<"List is empty"<<endl;
else if(pos==1)
head=head->next;
else
{
         int count=0;
         struct Node* temp=head;
         while(temp!=nullptr)
         {
	count++;
	temp=temp->next;
         }
         if(pos>count||pos<1)
	cout<<"Invalid Position";
         else
         {
	temp=head;
	struct Node* prev=nullptr;
	for(int i=0;i<pos-1;i++)
	{
	       prev=temp;
	       temp=temp->next;
	}
	prev->next=temp->next;
         }
}
return head;
}       
int main()
{
      struct Node* head=nullptr;
      int n,pos,data;
      cin>>n;
      for(int i=0;i<n;i++)
      {
	
	cin>>data;
	head=insert(data,head);
      }
      display(head);
      cin>>pos;
      cin>>data;
      head=insertmid(pos,data,head);
      display(head);
}


using namespace std;
struct Node
{
int data;
struct Node* next;
};
struct Node* create(int d)
{
     struct Node* nn=new Node();
     nn->data=d;
     nn->next=nullptr;
     return nn;
}
struct Node* insert(int d,struct Node* head)
{
struct Node* nn=create(d);
if(head==nullptr)
head=nn;
else
{
nn->next=head;
head=nn;
}
return head;
}
void display(struct Node* head)
{
struct Node* temp=head;
if(head==nullptr)
cout<<"List is empty";
else
{
while(temp!=nullptr)
{
cout<<temp->data<<"->";
temp=temp->next;
}
cout<<endl;
}
}
struct Node* insertmid(int pos,int data,struct Node* head)
{
           struct Node* nn=create(data);
           if(head==nullptr)
	head=nn;
           else if(pos==1)
	head=insert(data,head);
           else
           {
	int count=0;
	struct Node* temp=head;
	while(temp!=nullptr)
	{
	      count++;
	      temp=temp->next;
	}
	if(pos>(count+1))
	       cout<<"Invalid Position";
	else
	{
	       temp=head;
	       for(int i=0;i<pos-2;i++)
		temp=temp->next;
	       nn->next=temp->next;
	       temp->next=nn;
	}
         }
return head;
}	       
int main()
{
      struct Node* head=nullptr;
      int n,pos,data;
      cin>>n;
      for(int i=0;i<n;i++)
      {
	
	cin>>data;
	head=insert(data,head);
      }
      display(head);
      cin>>pos;
      cin>>data;
      head=insertmid(pos,data,head);
      display(head);
}


