/************************************************************
   
   Following is the TreeNode class structure
   
   class TreeNode<T>
   { 
   public:
        T data; 
        TreeNode<T> *left;
        TreeNode<T> *right;
   
        TreeNode(T data) 
  		{ 
            this -> data = data; 
            left = NULL; 
            right = NULL; 
        }
   };
   
   
 ************************************************************/
TreeNode<int>* create(int &i,int st,int end,vector<int>&postOrder,vector<int>&inOrder)
{
     if(st>end)     return NULL;
     TreeNode<int>* root= new TreeNode<int>(postOrder[i]);
     for(int k=st; k<=end; k++)
     {
          if(inOrder[k]==postOrder[i])
          {
               i--;
               root->right=create(i,k+1,end,postOrder,inOrder);
               root->left=create(i,st,k-1,postOrder,inOrder);
               break;
          }
     }
     return root;
}
TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postOrder, vector<int>& inOrder) 
{
	int i=postOrder.size()-1;
     return create(i,0,inOrder.size()-1,postOrder,inOrder);
}
