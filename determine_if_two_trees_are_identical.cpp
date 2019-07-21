Node *temp = NULL;
void BToDLL1(Node *root, Node **head_ref)
{
    if(!root)
        return;
    BToDLL1(root->left, head_ref);
    if(!temp){
        *head_ref = root;
    }
    else{
        root->left = temp;
        temp->right = root;
    }
    temp = root;
    BToDLL1(root->right,head_ref);
}

void BToDLL(Node *root, Node **head_ref){
    BToDLL1(root,head_ref);
    temp = NULL;
}
