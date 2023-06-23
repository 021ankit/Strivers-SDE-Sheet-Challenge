#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

    class TreeNode{
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        ~TreeNode() {
            if (left){
                delete left;
            }
            if (right){
                delete right;
            }
        }
    };

*************************************************************/
TreeNode<int>* create(vector<int>&v,int low,int high)
{
    if(low>high)    return NULL;
    TreeNode<int>* root=new TreeNode<int>(v[low]);
    int i=low+1;
    for( i=low+1;i<=high; i++)
    {
        if(v[i]>v[low])
        break;
    }
    root->left=create(v,low+1,i-1);
    root->right=create(v,i,high);
    return root;
}
TreeNode<int>* preOrderTree(vector<int> &preOrder){
    // Write your code here.
    return create(preOrder,0,preOrder.size()-1);
}
