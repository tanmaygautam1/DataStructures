#include <bits/stdc++.h>
  using namespace std;
struct node{
  int data;
  struct node *next;
};
 void push(struct node** head, int node_data){ 
  struct node *Node= new node;
  Node->data=node_data;
  Node->next=(*head);
  (*head) = Node;
  }
  void insertafter(struct node* prev, int node_data){
      if (prev == NULL)
{
   cout<<"the given previous node is required,cannot be NULL"; return; } 
    struct node *Node= new node;
    Node->data=node_data;
    Node->next=prev->next;
    prev->next=Node;
  }
  void append(struct node** head, int node_data){
    struct node *Node=new node;
    struct node *last=*head;
    Node->data=node_data;
    Node->next=NULL;
    if(*head==NULL){
      *head=Node;
      return;
    }
    while(last->next !=NULL){
      last=last->next;}
      last->next=Node;
      return;
    
  }


 void sort(struct node**head)
 {
   struct node* current= *head, *index=NULL;
  int temp;
  if(head=NULL){
    return;
  }
  else{
    while(current!=NULL){
      index=current->next;
      while(index!=NULL){
        if(current->data > index->data){
          temp=current->data;
          current->data=index->data;
          index->data=temp;
        }
        index=index->next;
      }
      current=current->next;
    }
  }
 }


  void displayList(struct node *Node)
{
   while (Node != NULL)
   {
      cout<<Node->data<<"-->";
      Node = Node->next;
   }}
  int main(){
    struct node* head = NULL;
    append(&head, 10); 
 
push(&head, 20); 
 push(&head, 30); 
 

append(&head, 40); // 
 
 
insertafter(head, 50);
sort(&head);
    displayList(head);
  }
