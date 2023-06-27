#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        
        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

************************************************************/
void solve(BinaryTreeNode<int>* root,int x,int &ans)
{
    if(!root)   return;
    if(root->data>=x)
     ans=min(ans,root->data);
    if(root->data>x)
    solve(root->left,x,ans);
    else
    solve(root->right,x,ans);
}
int findCeil(BinaryTreeNode<int> *node, int x){
    int ans=INT_MAX;
    solve(node,x,ans);
    if(ans==INT_MAX)    return -1;
    return ans;
}
