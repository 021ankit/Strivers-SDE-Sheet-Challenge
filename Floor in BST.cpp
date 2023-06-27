#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };
************************************************************/
void solve(TreeNode<int>* root,int x,int &ans)
{
    if(!root)   return;
    if(root->val<=x)
     ans=max(ans,root->val);
    if(root->val>x)
    solve(root->left,x,ans);
    else
    solve(root->right,x,ans);
}
int floorInBST(TreeNode<int>*root, int X)
{
    // Write your code here.
    int ans=INT_MIN;
    solve(root,X,ans);
    return ans;
}
