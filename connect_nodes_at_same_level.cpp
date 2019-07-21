void connect(Node *p)
{
   // Your Code Here

    if(!p)
        return;
    if(p->left){
        p->left->nextRight = p->right;
    }
    if(p->right && p->nextRight)
        p->right->nextRight = p->nextRight->left?p->nextRight->left:p->nextRight->right;
    else if(p->right)
        p->right->nextRight = NULL;
    connect(p->left);
    connect(p->right);
    
}
