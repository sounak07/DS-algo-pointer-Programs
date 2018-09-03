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
node* mergeTwoLLs(node *head1, node *head2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
  node* result = NULL;

  if(head1 == NULL){
    return head2;
  } else if(head2 == NULL){
    return head1;
  }

  if(head1->data <= head2->data){
    result = head1;
    result->next = mergeTwoLLs(head1->next, head2);
  } else {
    result = head2;
    result->next = mergeTwoLLs(head1, head2->next);
  }

  return result;

}


node* mergeSort(node *head) {
    //write your code here
  if(head->next == NULL){
    return head;
  }

  node* fast = head->next;
  node* slow = head;
  node* head2 = NULL;


  if(head!=NULL){
    while(fast != NULL && fast->next !=NULL){

    fast = fast->next->next;
    slow = slow->next;

   }

    head2 = slow->next;
    slow->next = NULL;

 }

  node* first = mergeSort(head);
  node* second = mergeSort(head2);


  return mergeTwoLLs(first,second);

}
