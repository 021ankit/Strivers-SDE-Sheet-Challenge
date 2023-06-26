#include <bits/stdc++.h> 
/************************************************************

Following is the Binary Tree node class
    
template <typename T = int>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left != NULL)
        {
            delete left;
        }
        if (right != NULL)
        {
            delete right;
        }
    }
};

************************************************************/

vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
      queue<pair<TreeNode<int>*,int>> q;
      if(!root) return {};
      q.push({root,0});
      map<int,vector<int>>mp;
      while(!q.empty())
      {
          auto it=q.front();
          q.pop();
          root=it.first;
          int l=it.second;
          mp[l].push_back(root->data);
          if(root->left)
            q.push({root->left,l-1});
          if(root->right)
            q.push({root->right,l+1});
      }
      vector<int>ans;
      for(auto x:mp)
      {
          for(auto y:x.second)
           ans.push_back(y);
      }
      return ans;
}
