int height(Node *root){
    if(!root)
        return 0;
    return root->data + max(height(root->left), height(root->right));
}
int maxPathSum(struct Node *root)
{
//add code here.
    if(!root)
        return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    int ld = maxPathSum(root->left);
    int rd = maxPathSum(root->right);
    return max(max(ld,rd),lh+rh+root->data);
}
