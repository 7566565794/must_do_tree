int height(Node* node)
{
   // Your code here
   if(!node)
        return 0;
    return 1+max(height(node->left),height(node->right));
}
