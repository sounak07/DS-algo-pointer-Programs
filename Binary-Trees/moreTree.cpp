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
#include <queue>


void printLevelATNewLine(BinaryTreeNode<int> *root) {
    // Write your code here

   queue<BinaryTreeNode<int>*> pendingNodes;
   pendingNodes.push(root);
   pendingNodes.push(NULL);


   while(pendingNodes.size() != 0){
     BinaryTreeNode<int>* current = pendingNodes.front();
     pendingNodes.pop();

     if(current != NULL){

       cout<<current->data;

       if(current->left != NULL){
         pendingNodes.push(current->left);
       }

       if(current->right != NULL){
         pendingNodes.push(current->right);
       }
     }

     if(current == NULL){
       cout<<"\n";

       if(pendingNodes.size() != 0){
         pendingNodes.push(NULL);
       }
     }
   }


}
