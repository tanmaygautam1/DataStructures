#include <bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  struct Node *left, *right;
  };
   Node*NewNode(int data){
         Node *newNode = new Node();

    newNode->data=data;
    newNode->left=newNode->right=NULL;
    return newNode;
  }

void Inorder(struct Node* node){
  if(node==NULL){
    return;
  }
  Inorder(node->left);
  cout<<node->data<<"->";
  Inorder(node->right);
}

struct Node* search(struct Node* root,int data){
if(root==NULL || root->data==data){
  return root;
}
else if(root->data<data){
  return search(root->right,data) ;
}
 return search(root->left,data);
}

struct Node* Insert(struct Node* root, int data){
  if(root==NULL){
 return NewNode(data);
  }
  if(data<root->data){
    root->right= Insert(root->right,data);
  }
  else if(data>root->data){
    root->left=Insert(root->left,data);
  }

  return root;
}

int main(){
  struct Node* root=NULL;
  root=Insert(root,10);
  root=Insert(root,20);
  root=Insert(root,5);
  Inorder(root);

}
