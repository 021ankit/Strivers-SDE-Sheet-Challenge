#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure.

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

TreeNode<int> *flattenBinaryTree(TreeNode<int> *root)
{
    // Write your code here.
    stack<TreeNode<int>*>st;
    st.push(root);
    TreeNode<int>* r=root;
    while(!st.empty())
    {
        root=st.top();  st.pop();
        if(root->right)
         st.push(root->right);
        if(root->left)
         st.push(root->left);
        root->left=NULL;
        if(!st.empty())
        root->right=st.top();
    }
    return r;
}
