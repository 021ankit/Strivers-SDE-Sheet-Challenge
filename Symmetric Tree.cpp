/*****************************************************

    Following is the Binary Tree node structure:
    
    class BinaryTreeNode {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if(left) 
                delete left;
            if(right) 
                delete right;
        }
    };

******************************************************/

bool identicalTrees(BinaryTreeNode<int> *root1, BinaryTreeNode<int> *root2) {
  if (!root1 && !root2)
    return true;
  if (!root1 || !root2 || root1->data != root2->data)
    return false;
  return identicalTrees(root1->left, root2->right) &&
         identicalTrees(root1->right, root2->left);
}
bool isSymmetric(BinaryTreeNode<int>* root)
{
    if(!root)   return true;
    return identicalTrees(root->left,root->right);
       
}
