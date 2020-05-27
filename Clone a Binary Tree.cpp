Node* cloneTree(Node* tree)
{
if(!tree)
return NULL;

Node* temp = new Node(tree->data);
temp->random = tree->random;
temp->left = cloneTree(tree->left);
temp->right = cloneTree(tree->right);
return temp;
}
