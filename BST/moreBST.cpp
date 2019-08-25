// Following is the Binary Tree node structure
/**************
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
};
***************/

#include<bits/stdc++.h>

void helper(BinaryTreeNode<int> *root, int k, string s){
  if(root==NULL){
    return;
  }

   int sum = k - root->data;
   s = s+to_string(root->data)+" ";

  if(root->left == NULL && root->right == NULL){
    if(sum == 0 || sum == root->data )
    cout<<s<<endl;
  }

  helper(root->left, sum, s),
  helper(root->right, sum, s);
}

void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k) {
    // Write your code here

 string s="";
 helper(root,k, s);

}
