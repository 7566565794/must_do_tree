void leftView(Node *root)
{
   // Your code here
   queue<Node *>q;
   if(!root)
        return;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i=0; i<n; ++i){
            Node *temp = q.front();
            q.pop();
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
            if(i==0)
                cout<<temp->data<<" ";
        }
        
        
        
    }
}
