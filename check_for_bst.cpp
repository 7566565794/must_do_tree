//note this program has some issue not running please check.
bool isBST(Node* root) {
    // Your code here
   if(!root || (!root->left && !root->right))
        return true;
    if(root->left && root->data<root->left->data){
        return false;
    }
    if(root->right && root->data>root->right->data)
        return false;
   if(!isBST(root->left)|| !isBST(root->right))
        return false;
    return true;
}
