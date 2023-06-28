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

class BSTiterator
{
    public :
    stack<int>st;
    
    BSTiterator(TreeNode<int> *root)
    {
        // write your code here
        inorder(root,st);
    }
    void inorder(TreeNode<int>* root,stack<int>&st)
    {
        if(!root) return;
        inorder(root->right,st);
        st.push(root->data);
        inorder(root->left,st);
    }
    int next()
    {
        // write your code here
        if(st.empty())  return -1;
        int t=st.top();
        st.pop();
        return t;
    }

    bool hasNext()
    {
        // write your code here
        return st.empty()==false;
    }
};


/*
    Your BSTIterator object will be instantiated and called as such:
    BSTIterator iterator(root);
    while(iterator.hasNext())
    {
       print(iterator.next());
    }
*/
