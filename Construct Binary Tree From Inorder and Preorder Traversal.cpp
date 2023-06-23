#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
TreeNode<int> *create(int &i,int st,int end,vector<int>&inorder,vector<int>&preorder)
{
    if(st>end)  return NULL;
    TreeNode<int>* root=new TreeNode<int>(preorder[i]);
    for(int k=st; k<=end; k++)
    {
        if(inorder[k]==preorder[i])
        {
            i++;
            root->left=create(i,st,k-1,inorder,preorder);
            root->right=create(i,k+1,end,inorder,preorder);
            return root;
        }
    }
}
TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{
       int i=0;
	   return create(i,0,inorder.size()-1,inorder,preorder);
}
