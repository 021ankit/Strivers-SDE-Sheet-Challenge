#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

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

int getMaxWidth(TreeNode<int> *root)
{
    if(!root)   return 0;
    int ans=1;
    queue<TreeNode<int>*>q;
    q.push(root);
    while(!q.empty())
    {
        int t=q.size();
        ans=max(ans,t);
        while (t--) {
          root = q.front();
          q.pop();
          if (root->left)
            q.push(root->left);
          if (root->right)
            q.push(root->right);
        }
    }
    return ans;
}
