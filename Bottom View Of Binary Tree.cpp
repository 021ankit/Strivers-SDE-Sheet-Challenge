#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure.

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

vector<int> bottomView(BinaryTreeNode<int> * root){
 
        map<int,int>mp;
        queue<pair<BinaryTreeNode<int>*,int>>q;
        q.push({root,0});
        while(!q.empty())
        {
            root=q.front().first;
            int l=q.front().second;
            q.pop();
            mp[l]=root->data;
            if(root->left)
             q.push({root->left,l-1});
            if(root->right)
             q.push({root->right,l+1});
        }
        vector<int>ans;
        for(auto x:mp)
         ans.push_back(x.second);
        return ans;
    
}
