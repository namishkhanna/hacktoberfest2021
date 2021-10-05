//Reverse a singly linklist by recursive way...

#include<iostream>
using namespace std;

// Constructor...
class node{
  public:
  int data;
  node* next;
  node(int val){
  data=val;
  next=NULL;
  }
};

// Add element at tail...
void insertattail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

// Display function...
void display(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

// Recursive function...
node* reverselinklistbyrecursive(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead=reverselinklistbyrecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}

// main function...
int main(){
    node* head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    insertattail(head,6);
    display(head);
    node* newhead=reverselinklistbyrecursive(head);
    display(newhead);
    return 0;
}
