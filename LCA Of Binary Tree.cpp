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

int lowestCommonAncestor(TreeNode<int> *root, int x, int y)
{
	 if(!root)  return -1;
     if(root->data==x || root->data==y) return root->data;
     int l1=-1,l2=-1;
     l1=lowestCommonAncestor(root->left,x,y);
     l2=lowestCommonAncestor(root->right,x,y);
     if(l1!=-1 && l2!=-1)   return root->data;
     return max(l1,l2);
}
