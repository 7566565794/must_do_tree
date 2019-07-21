struct qobj{
  Node *node;
  int hd;
};
void bottomView(Node *root)
{
   // Your Code Here
   queue<qobj *>q;
   map<int,Node*>m;
   int hd = 0;
   if(!root)
        return;
   qobj *temp = new qobj;
   temp->node = root;
   temp->hd = hd;
   q.push(temp);
   
   while(!q.empty()){
       temp = q.front();
       q.pop();
       hd = temp->hd;
       m[hd] = temp->node;
       
       if(temp->node->left){
            qobj *t = new qobj;
            t->node = temp->node->left;
            t->hd = hd - 1;
            q.push(t);
       }
       if(temp->node->right){
            qobj *t = new qobj;
            t->node = temp->node->right;
            t->hd = hd + 1;
            q.push(t);
       }
   }
   for(auto i=m.begin(); i!=m.end(); i++)
        cout<<i->second->data<<" ";
        
}
