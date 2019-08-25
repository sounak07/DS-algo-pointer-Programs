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
#include <stack>

void zigZagOrder(BinaryTreeNode<int> *root) {

  stack<BinaryTreeNode<int>*> currentLevel, nextLevel;
  bool leftToRight = true;
  currentLevel.push(root);
  while (!currentLevel.empty()) {
    BinaryTreeNode<int>* currNode = currentLevel.top();
    currentLevel.pop();
    if (currNode) {
      cout << currNode->data << " ";
      if (leftToRight) {
        nextLevel.push(currNode->left);
        nextLevel.push(currNode->right);
      } else {
        nextLevel.push(currNode->right);
        nextLevel.push(currNode->left);
      }
    }
    if (currentLevel.empty()) {
      cout << endl;
      leftToRight = !leftToRight;
      swap(currentLevel, nextLevel);
    }
  }

}
