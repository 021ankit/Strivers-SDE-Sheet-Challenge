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
int heigh(TreeNode<int> *root)
{
    if(!root)   return 0;
    return 1+max(heigh(root->left),heigh(root->right));
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
    if(!root)   return 0;
    int l= heigh(root->left),r=heigh(root->right);
    int ans1= l+r;
    int ans2=diameterOfBinaryTree(root->left);
    int ans3=diameterOfBinaryTree(root->right);
    return max({ans1,ans2,ans3});
}
