#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
int solve(BinaryTreeNode<int>* root,bool &ans)
{
    if(!root)   return 0;
    int l=solve(root->left,ans);
    int r=solve(root->right,ans);
    if(abs(l-r)>1){
        ans=false;
    }
    return 1+max(l,r);
}
bool isBalancedBT(BinaryTreeNode<int>* root) {
    bool ans=true;
    solve(root,ans);
    return ans;
}
