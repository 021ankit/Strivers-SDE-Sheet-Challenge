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

vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    vector<int>ans;
    if(!root)   return ans;
    queue<BinaryTreeNode<int> *>q;
    q.push(root);
    bool f=1;
    while(!q.empty())
    {
        int t=q.size();
        vector<int>v;
        while(t--)
        {
            root=q.front();
            q.pop();
            v.push_back(root->data);
            if(root->left)  q.push(root->left);
            if(root->right) q.push(root->right);
        }
        if(!f)
         reverse(v.begin(),v.end());
        for(auto x:v)
        ans.push_back(x);
        f=!f;
    }
    return ans;
}
