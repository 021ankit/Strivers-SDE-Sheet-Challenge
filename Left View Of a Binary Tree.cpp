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
void leftview(TreeNode<int>*root,int level,vector<int>&ans)
{
    if(!root)   return;
    if(ans.size()==level)   ans.push_back(root->data);
    leftview(root->left,level+1,ans);
    leftview(root->right,level+1,ans);
}
vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int>ans;
    leftview(root,0,ans);
    return ans;
}
