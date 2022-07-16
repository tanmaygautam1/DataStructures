#include <bits/stdc++.h>
using namespace std;

struct node{
  int data;
  struct node*next;
  struct node*prev;
};
void push(struct node**head, int data){
  struct node* Node = new node;
  Node->data=data;
  Node->prev=NULL;
  Node->next=*head;
  if(*head!=NULL)
    (*head)->prev=Node;
    
  *head=Node;
}
void append(struct node**head, int data){
  struct node* Node =new node;
  struct node*last=*head;
  Node->data=data;
  Node->next=NULL;
  if(*head==NULL){
    Node->prev=NULL;
    *head=Node;
    return;
  }
  while(last->next!=NULL){
   last = last->next;
  }
  last->next=Node;
  Node->prev=last;
  return;
}
void insertafter(struct node*prev, int data){
  struct node*Node = new node;
  Node->data=data;
  if(prev==NULL){
return;
  }
  Node->next=prev->next;
  Node->prev=prev;
  prev->next=Node;
  if(Node->next!=NULL){
    Node->next->prev=Node;
  }
}
void display(struct node* Node){
  while(Node!=NULL){
    cout<<Node->data<<"-->";
    Node=Node->next;
  }
}
int main(){
  struct node*head=NULL;
  push(&head,100);
  append(&head,200);
  insertafter(head,50);
  display(head);
}