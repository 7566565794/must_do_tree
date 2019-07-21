/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

int height(Node *root){
    if(!root)
        return 0;
    if(!root->left && !root->right)
        return 1;
    return 1+ max(height(root->left),height(root->right));
}
void printLevel(Node *root, int level,bool flag){
     if(level==1)
        cout<<root->data<<" ";

    else if(level>1){
        
         if(flag){
             printLevel(root->left,level-1,flag);
             printLevel(root->right,level-1,flag);
             flag = !flag;
         }
         else{
             printLevel(root->right,level-1,flag);
             printLevel(root->left,level-1,flag);
             flag = !flag;
         }
            
     
    }
}
void printSpiral(Node *root){
     //Your code here
     
     /*
              1
            2   3
           7 6 5 4
     */
     int h = height(root);
     if(!root)
        return;
     cout<<root->data<<" ";
     bool flag = false;
     for(int i=1; i<=h; i++){
         if(flag){
             printLevel(root->left,i-1,flag);
             printLevel(root->right,i-1,flag);
             flag = !flag;
         }
         else{
             printLevel(root->right,i-1,flag);
             printLevel(root->left,i-1,flag);
             flag = !flag;
         }
            
     }
    
}
