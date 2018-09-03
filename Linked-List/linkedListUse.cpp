#include <iostream>
using namespace std;
#include "Node.cpp"

// Node *takeInput(){
//   int data;
//   cin>>data;
//   Node *head = NULL;
//   while(data != -1){
//     Node *newNode = new Node(data);
//     if(head == NULL){
//       head = newNode;
//     } else {
//       Node *temp = head;
//       while( temp->next != NULL){
//         temp = temp -> next;
//       }
//       temp -> next = newNode;
//     }
//     cin>> data;
//   }
//
//   return head;
// }



Node* deleteNode(Node *head, int i) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
  Node *temp = head;
  int count = 0;

  if(i==0){
    Node* a = head->next;
    delete head;
    head = a;
    return head;
  }

  while(count<i-1 && temp != NULL){
    temp = temp->next;
    count++;
  }

  if(temp != NULL){
    Node* a = temp->next;
    if(a!=NULL){
      Node* b = a->next;
      temp->next = b;
      delete a;
    }
  }

  return head;

}

Node* insertNode(Node *head, int i, int data){
  Node *newNode = new Node(data);
  Node *temp = head;
  int count = 0;

  if(i==0){
    newNode->next = head;
    head = newNode;
    return head;
  }

  while(count<i-1 && temp != NULL){
    temp = temp->next;
    count++;
  }

  if(temp != NULL){
    Node *a = temp->next;
    temp->next = newNode;
    newNode->next = a;
  }

  return head;

}


Node *takeInput2(){
  int data;
  cin>>data;
  Node *head = NULL;
  Node *tail = NULL;
  while(data != -1){
    Node *newNode = new Node(data);
    if(head == NULL){
      head = newNode;
      tail = newNode;
    } else {
      tail->next = newNode;
      tail = tail -> next;
    }
    cin>> data;
  }

  return head;
}

void print(Node *head){
  //Node *temp = head;

  while(head != NULL) {
    cout<< head -> data<< " ";
    head = head -> next;
  }

  cout<<'\n';

  // temp = head;
  // while(temp != NULL) {
  //   cout<< temp -> data<< " "<<endl;
  //   temp = temp -> next;
  // }
}

int main(){

  //Statically
  // Node n1(1);
  //
  // Node *head = &n1;
  //
  // Node n2(2);
  // Node n3(3);
  // Node n4(5);
  // Node n5(7);
  //
  // n1.next = &n2;
  // n2.next = &n3;
  // n3.next = &n4;
  // n4.next = &n5;

  Node *head = takeInput2();

  print(head);
  int i,data;
  cin>>i>>data;
  head = insertNode(head,i,data);
  print(head);

  // n1.next = &n2;
  //
  // cout<< n1.data <<" "<<n2.data;
  //
  // //Dynamically
  // Node *n3 = new Node(10);
  //
  // Node *head = n3;
  // Node *n4 = new Node(20);
  //
  // n3->next = n4;
}
