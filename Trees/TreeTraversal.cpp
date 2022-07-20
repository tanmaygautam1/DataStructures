#include <bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  struct Node *left, *right;
  Node(int data){
    this->data=data;
    left=right=NULL;
  }
};

void PreOrder(struct Node* Node){
  if(Node==NULL){
    return;
  }
  cout<<Node->data<<"->";
  PreOrder(Node->left);
  PreOrder(Node->right);
}

void Inorder(struct Node* Node){
  if(Node==NULL){
    return;
  }
  Inorder(Node->left);
  cout<<Node->data<<"->";
  Inorder(Node->right);
}

void PostOrder(struct Node* Node){
  if(Node==NULL){
    return;
  }
  PostOrder(Node->left);
  PostOrder(Node->right);
  cout<<Node->data<<"->";
}
int main(){
  struct Node* root=new Node(1);
  root->left = new Node(12);
  root->right = new Node(9);
  root->left->left = new Node(5);
  root->left->right = new Node(6);
cout << "Inorder traversal ";
  Inorder(root);

  cout << "\nPreorder traversal ";
  PreOrder(root);

  cout << "\nPostorder traversal ";
  PostOrder(root);

}
