int height(Node *root)
{
    if(!root)
        return 0;
    return 1 + max(height(root->left), height(root->right));
}
int diameter(Node* node)
{
   // Your code here
   if(!node)
    return 0;
   int lh = height(node->left);
   int rh = height(node->right);
   int ld = diameter(node->left);
   int rd = diameter(node->right);
   return max(max(ld,rd),lh+rh+1);
   
}
