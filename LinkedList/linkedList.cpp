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

// Insert a node at the tail of the linked list
void insertAtTail(Node *&tail, int data)
{
  Node *newNode = new Node(data);
  tail->next = newNode;
  tail = newNode;
};

void delFirstNode(Node *&head)
{
  if (head == NULL)
  {
    return; // List is already empty
  }
  // We can use this method
  //  Node *newNode = head->next;
  //  head = newNode;

  Node *temp = head;
  head = head->next;
  delete temp;
};
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
  insertAtTail(tail, 2);
  insertAtTail(tail, 3);
  insertAtTail(tail, 4);
  print(head);
  delFirstNode(head);
  print(head);
}