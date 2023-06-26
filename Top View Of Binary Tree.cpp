#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

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

vector<int> getTopView(TreeNode<int> *root) {
         if(!root)  return {};
         queue<pair<TreeNode<int>*,int>>q;
         map<int,int>mp;
         q.push({root,0});
         vector<int>ans;
         while(!q.empty())
         {
             root=q.front().first;
             int l=q.front().second;
             q.pop();
             if(mp.find(l)==mp.end())
             mp[l]=root->val;
             if(root->left)
              q.push({root->left,l-1});
             if(root->right)
              q.push({root->right,l+1});
         }
         for(auto x:mp)
          ans.push_back(x.second);
         return ans;
}
