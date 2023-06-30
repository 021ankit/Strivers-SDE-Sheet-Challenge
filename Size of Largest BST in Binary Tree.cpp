#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
vector<int> solve(TreeNode<int>* root){
        if(root==NULL){
            return {INT_MIN,INT_MAX,0};
        }
        
        auto l = solve(root->left);
        auto r = solve(root->right);
        
        int leftMax = l[0];
        int rightMin = r[1];
        
        if(leftMax < root->data && root->data < rightMin){
            return {max(l[0],max(r[0],root->data)),
                    min(l[1],min(r[1],root->data)),
                    l[2] + r[2] + 1};
        }
        
        // no BST
        return {INT_MAX,INT_MIN,max(l[2],r[2])};
    }
int largestBST(TreeNode<int>* root) 
{
    // Write your code here.
    vector<int>ans=solve(root);
    return ans[2];
}
