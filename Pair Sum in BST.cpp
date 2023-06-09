#include <bits/stdc++.h> 
/**********************************************************

    Following is the Binary Tree Node structure:

    template <typename T>
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
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };
***********************************************************/
void inorder(BinaryTreeNode<int> *root,vector<int>&v)
{
    if(!root)   return;
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}
bool pairSumBst(BinaryTreeNode<int> *root, int k)
{
    // Write your code here
    vector<int>v;
    inorder(root,v);
    int low=0,high=v.size()-1;
    while(low<high)
    {
        int sum=v[low]+v[high];
        if(sum==k)  return true;
        if(sum>k)
        high--;
        else
        low++;
    }
    return false;
}
