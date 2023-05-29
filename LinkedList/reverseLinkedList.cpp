#include <iostream>
using namespace std;

class Node
{
  // Data and next pointer
public:
  int data;
  Node *next;

  // Constructor will insert data and set next to NULL
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};
// Insert a node at the head of the linked list
void insertAtHead(Node *&head, int data)
{
  Node *newNode = new Node(data);
  newNode->next = head;
  head = newNode;
};

// reverseLinkedList function
Node *reverseLinkedList(Node *head)
{
  if (head == NULL || head->next == NULL)
  {
    return head;
  }
  Node *curr = head;
  Node *prev = NULL;
  Node *fwd = NULL;
  while (curr != NULL)
  {
    fwd = curr->next;
    curr->next = prev;
    prev = curr;
    curr = fwd;
  }
  return prev;
}

// Print the linked list
void print(Node *&head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
};
// Main function
int main()
{
  Node *node1 = new Node(1);
  Node *head = node1;
  Node *tail = node1;
  //  (*node1).print(node1);     We can use this method if our function within the class
  // print(head);
  // insertAtHead(head, 2);
  insertAtHead(head, 2);
  insertAtHead(head, 3);
  insertAtHead(head, 4);
  print(head);
  head = reverseLinkedList(head);
  print(head);
}

// Using recursion
/*Node* reverseLinkedListRecur(Node* curr,Node* prev,Node* fwd){
  if (curr == NULL) {
    return prev;
  }
  fwd = curr->next;
  curr->next = prev;
  prev = curr;
  curr = fwd;
return reverseLinkedListRecur(curr, prev, fwd);
}
Node* reverseLinkedList(Node *head)
{

  if(head==NULL || head->next == NULL){
    return head;
  }
   Node* curr = head;
   Node* prev = NULL;
   Node* fwd = NULL;

  return reverseLinkedListRecur(curr,prev,fwd);
} */