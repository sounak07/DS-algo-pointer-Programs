//head is head of your linked list, i and j are indexes to be swapped
// Following is the node structure
/**************
class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
***************/
node* swap_nodes(node *head,int i,int j)
{
    //write your code here
  node* prev1 = NULL;
  node* curr1 = NULL;
  node* prev2 = NULL;
  node* curr2 = NULL;
  node* prev = NULL;


  node* temp = head;
  int c = 0;

  while(temp !=NULL){
    if(c == i){
      prev1 = prev;
      curr1 = temp;
    }

    if(c == j){
      prev2 = prev;
      curr2 = temp;
    }

    prev = temp;
    temp = temp->next;
    c++;
  }

  if(prev1 != NULL){
  prev1->next = curr2;

  }else {
    head = curr2;
  }

  if(prev2 != NULL){

  prev2->next = curr1;

  } else {
    head = curr1;
  }

  node* temp2 = curr2->next;
  curr2->next = curr1->next;
  curr1->next = temp2;

  return head;


}
