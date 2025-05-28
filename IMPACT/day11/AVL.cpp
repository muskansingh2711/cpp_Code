#include <bits/stdc++.h>
using namespace std;

class BinaryNode {
	public:
    int key;
    int height;
    BinaryNode *left, *right;
};
 
BinaryNode* newNode1(int data)
{
    BinaryNode* temp = new BinaryNode();
    temp->key = data;
    temp->left = NULL;
    temp->right = NULL;
    temp->height = 1;
    return temp;
}
  // PreOrder Traversal
 

 void levelOrder(BinaryNode* root) 
 {
   queue<BinaryNode*> queue;
   queue.push(root);
   cout<<"\nLevel";
   while (!queue.empty()) {
     BinaryNode* presentNode = queue.front();
     queue.pop();
     cout<<presentNode->key<< " ";    
     if (presentNode->left != NULL) 
     {
       queue.push(presentNode->left);
     }
     if (presentNode->right != NULL) 
     {
       queue.push(presentNode->right);
     }
   }
 }
BinaryNode* display(BinaryNode* root)
{
    if (root == NULL) {
        cout<<"Tree Empty";
    }
    queue<BinaryNode*> queue;
    queue.push(root);
    BinaryNode* front = NULL;
    while (!queue.empty())
    {
        front = queue.front();
        queue.pop();
 		cout<<front->key<<"->";
        if (front->left!=NULL) {
		queue.push(front->left);
        } 
        if (front->right!=NULL) {
			queue.push(front->right);
  }
    }
    cout<<endl;
 
    return root;
}
 // Search Method
 /*BinaryNode search(BinaryNode node, int value)
 {
   if (node == null ) 
   {
     System.out.println("Value: "+ value+ " not found in AVL");
     return null;
   } else if (node.value == value) {
     System.out.println("Value: "+ value+ " found in AVL");
     return node;
   } else if (value < node.value) {
     return search(node.left, value);
   } else {
     return search(node.right, value);
   }
 }*/

//  getHeight
int getHeight(BinaryNode* node) {
    if (node == NULL) {
      return 0;
    }
    return node->height;
  }

  // rotateRight
  BinaryNode* rotateRight(BinaryNode* disbalancedNode) {
    BinaryNode* newRoot = disbalancedNode->left;
    disbalancedNode->left = disbalancedNode->left->right;
    newRoot->right = disbalancedNode;
    disbalancedNode->height = 1 + max(getHeight(disbalancedNode->left), getHeight(disbalancedNode->right));
    newRoot->height = 1 + max(getHeight(newRoot->left), getHeight(newRoot->right));
    return newRoot;
  }

  // rotateLeft
  BinaryNode* rotateLeft(BinaryNode* disbalancedNode) {
    BinaryNode* newRoot = disbalancedNode->right;
    disbalancedNode->right = disbalancedNode->right->left;
    newRoot->left = disbalancedNode;
    disbalancedNode->height = 1 + max(getHeight(disbalancedNode->left), getHeight(disbalancedNode->right));
    newRoot->height = 1 + max(getHeight(newRoot->left), getHeight(newRoot->right));
    return newRoot;
  }

  // getBalance
  int getBalance(BinaryNode* node) {
    if (node == NULL) {
      return 0;
    }
    return getHeight(node->left) - getHeight(node->right);
  }

  // insertNode Method
  BinaryNode* insert(BinaryNode* node, int nodeValue) 
  {
    if (node == NULL)
    {
      BinaryNode* newNode = newNode1(nodeValue);
      //cout<<"INserted";
      return newNode;
    } 
    else if (nodeValue < node->key) 
    {
      node->left = insert(node->left, nodeValue);
    } 
    else 
    {
      node->right = insert(node->right, nodeValue);
    }
    node->height = 1 + max(getHeight(node->left), getHeight(node->right));
    int balance = getBalance(node);
    if (balance > 1 && nodeValue < node->left->key) {
      return rotateRight(node);
    }
    if (balance > 1 && nodeValue > node->left->key) {
      node->left = rotateLeft(node->left);
      return rotateRight(node);
    }
    if (balance < -1 && nodeValue > node->right->key) {
      //cout<<"Left Rotate"<<endl;
      return rotateLeft(node);
    }
    if (balance < - 1 && nodeValue < node->right->key) {
      node->right = rotateRight(node->right);
      return rotateLeft(node);
    }
    return node;
  }

  

  // // Minimum node
  BinaryNode* minimumNode(BinaryNode* root) {
    if (root->left == NULL) {
      return root;
    } else {
      return minimumNode(root->left);
    }
  }

  // Delete node
BinaryNode* deleteNode(BinaryNode* node, int value) {
   if (node == NULL) {
     cout<<"Value not found in AVL";
     return node;
   }
   if (value < node->key) {
     node->left = deleteNode(node->left, value);
   } else if (value > node->key) {
     node->right = deleteNode(node->right, value);
   } else {
     if (node->left != NULL && node->right != NULL)
     {
       BinaryNode* temp = node;
       BinaryNode* minNodeForRight = minimumNode(temp->right);
       node->key = minNodeForRight->key;
       node->right = deleteNode(node->right, minNodeForRight->key);
     } else if (node->left != NULL) {
       node = node->left;
     } else if (node->right != NULL) {
       node = node->right;
     } else {
       node = NULL;
     }
return node;
   }
   node->height = 1 + max(getHeight(node->left), getHeight(node->right));
   int balance = getBalance(node);

   if (balance > 1 && value < node->left->key) {
      return rotateRight(node);
    }
    if (balance > 1 && value > node->left->key) {
      node->left = rotateLeft(node->left);
      return rotateRight(node);
    }
    if (balance < -1 && value > node->right->key) {
      //cout<<"Left Rotate"<<endl;
      return rotateLeft(node);
    }
    if (balance < - 1 && value < node->right->key) {
      node->right = rotateRight(node->right);
      return rotateLeft(node);
    }

   return node;
 }


 /*public void deleteAVL() {
   root = null;
 }
}*/
int main()
    {
	BinaryNode* root=NULL;
	root=insert(root,5);
	root=insert(root,10);
	root=insert(root,15);
	root=insert(root,20);
	root=insert(root,25);
	root=insert(root,30);
	root=insert(root,35);
	root=display(root);
	root=deleteNode(root,20);
	root=display(root);
	//levelOrder(root);
	}
