#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

typedef struct node
{
    int value;
    struct node* next;
} node;//node
void push(node * head, int value);
void push_start(node ** head, int value);
void printList(node * head);
bool search (node* head, int value);
int main(void){
    node* head = NULL;
    head = (node*)malloc(sizeof(node));
    if (head == NULL) {
        return 1;
    }
    head->value=1;
    // head->next = NULL;
    head->next = (node*)malloc(sizeof(node));
    head->next->value = 2;
    head->next->next = NULL;
    printList(head);
    cout << "----------------" << endl;
    push(head,3);
    printList(head);
    cout << "----------------" << endl;
    push_start(&head,0);
    printList(head);
    cout << "----------------" << endl;
    int x = 3;
    cout << "search of element " << x << " int list gives " << search(head, x) << endl;

    return 0;
}

void push_start(node ** head, int value){
    node* new_node;
    new_node = (node*)malloc(sizeof(node));

    new_node->value = value;
    new_node->next = *head;
    *head = new_node;
}

void push(node * head, int value){
    node* current = head;
    while (current->next != NULL){
        current = current->next;
    }
    current->next = (node*)malloc(sizeof(node));
    current->next->value = value;
    current->next->next = NULL;
}

void printList(node* head) {
    node* current = head;
    while (current != NULL) {
        cout << "Value:   " << current->value << endl;
        cout << "Address: " << (void*)current->next << endl;
        current = current->next;

    }
}

bool search (node* head, int value)
{
  node* ptr = head;
  while (ptr != NULL)
  {
    if(ptr -> value == value)
    {
      return true;
    }
    ptr = ptr -> next;
  }
  return false;

}