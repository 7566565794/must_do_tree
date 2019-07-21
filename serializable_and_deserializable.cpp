void serialize(Node *root,vector<int> &A)
{
    //Your code here
    if(!root){
        A.push_back(-1);
        return;
    }
    A.push_back(root->data);
    serialize(root->left,A);
    serialize(root->right,A);

    
}

Node *des(deque<int>&q){
  Node *root;
  if(!q.empty()){
    int val = q.front();
    q.pop_front();
    if(val==-1){
      return NULL;
    }
    root = newNode(val);
    root->left = des(q);
    root->right = des(q);
  }
  return root;

}
Node * deSerialize(vector<int> &A)
{
    deque<int>q;
    for(int i=0; i<A.size(); i++)
      q.push_back(A[i]);
    return des(q);
    
}
