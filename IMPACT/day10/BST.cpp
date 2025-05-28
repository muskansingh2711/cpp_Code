#include<bits/stdc++.h>
using namespace std;
struct Node{
struct Node* left;
int data;
struct Node* right;
};
sturct Node*create(int d)
{
  struct Node*nn = new Node()
 nn->left=nullptr;
  nn->data=d;
 nn->right=nullptr;

return nn;
}
Node* root=nullptr;
void insert(int data)
{
Node* nn=create(data);
if(root==nullptr)
root=nn;
else
{
queue<Node*> que;
que.push(root);
Node* temp=nullptr;
while(!que.empty())
{
temp=que.front();
que.pop();
if(data<temp->data)
{
if(temp->left==nullptr)
{
temp->left=nn;
break;
}
else
que.push(temp->left);
}
else
{
if(temp->right==nullptr)
{
temp->right=nn;
break;
}
else
que.push(temp->right);
}
}
}
}

void inorder(Node* temp)
{
  if(temp==nullptr)
  return;
  inorder(temp->left);
  cout<<temp->data<<" ";
  inorder(temp->right);
}

void preorder(Node* temp)
{
  if(temp==nullptr)
  return;
  cout<<temp->data<<" ";
  preorder(temp->left);
  preorder(temp->right);
}


void postorder(Node* temp)
{
  if(temp==nullptr)
  return;
  postorder(temp->left);
  postorder(temp->right);
  cout<<temp->data<<" ";
}