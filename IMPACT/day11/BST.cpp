
Node* minimumNode(Node* root)
{
if(root->left==NULL)
return root;
else
return minimumNode(root->left);
}
Node* deleteNode(Node* root, int value) {
    if (root == NULL) {
      cout<<"Value not found in BST";
      return NULL;
    }
    if (value < root->key) {
      root->left = deleteNode(root->left, value);
    } else if (value > root->key) {
      root->right = deleteNode(root->right, value);
    } else {
      if (root->left != NULL && root->right != NULL) {
        Node* temp = root;
        Node* minNodeForRight = minimumNode(temp->right);
        root->key = minNodeForRight->key;
        root->right = deleteNode(root->right, minNodeForRight->key);
      } else if (root->left != NULL) {
        root = root->left;
      } else if (root->right != NULL) {
        root = root->right;
      } else {
        root = NULL;
      }    
     }
    return root;
  }