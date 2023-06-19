#include <bits/stdc++.h> 
/*   
    template <typename T = int>
	class TreeNode
	{
		public:
		T data;
		TreeNode<T> *left;
		TreeNode<T> *right;

		TreeNode(T data)
		{
			this->data = data;
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
*/
vector<int>res;
void solve(TreeNode<int> *root,vector<int>&ans,int x)
{
	if(!root)
	return;
	if(x==root->data)
	{
		ans.push_back(x);
		res=ans;
		return;
	}
	ans.push_back(root->data);
	solve(root->left,ans,x);
	solve(root->right,ans,x);
	ans.pop_back();
}
vector<int> pathInATree(TreeNode<int> *root, int x)
{
    vector<int>ans;
	solve(root,ans,x);
	return res;
}
