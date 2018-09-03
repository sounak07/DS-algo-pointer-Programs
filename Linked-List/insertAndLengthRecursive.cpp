Node* insertNodeRec(Node *head, int i, int data) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */

  if(head == NULL){
    return head;
  }

   Node *newNode = new Node(data);

  if(i==0){
    newNode->next = head;
    head = newNode;
    return head;
  }


  Node *temp = insertNodeRec(head->next, i-1, data);

  head->next = temp;



  return head;
}


//length

int length(Node *head) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
  Node* temp = head;

  if(temp->next == NULL){
    return 1;
  }

  if(temp->data != -1){
    return 1+length(temp->next);
  }

}

//non-recursive

int length(Node *head) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
  Node *temp = head;
  int i=0;

  while(temp != NULL) {

    i++;
   temp = temp->next;
  }

  return i;
}
