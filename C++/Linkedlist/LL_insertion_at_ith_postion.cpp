/*Insterting a Node at ith Position*/
//Contributed by Vivek Singh
#include<iostream>
using namespace std;
#include"linkedlist_node.cpp"
node*insertati(node*head,int i, int data)
{
    node* n=new node(data);
    //when i=0, if check will not be there then the new node will be placed at 1st postion rather than 0th
    if(i==0)
    {
        n->next=head;
        head=n;
        return head;
    }
    node*temp=head;
    int count=0;
    while(temp!=NULL&&count<i-1)//temp!=NULL ,check is there for the case when i>length of LL 
    {
        temp=temp->next;
        count++;
    }
    if(temp!=NULL)
    {
        n->next=temp->next;
        temp->next=n;
    }
    return head;
}
node* takeinput()
{ int data;
cin>>data;
node* head=NULL;
node* tail=NULL;
while(data!=-1)
{
    node* n=new node(data);
    if(head==NULL)
    {
        head=n;
        tail=n;
    }
    else
    {
        tail->next=n;
        tail=n;
    }
    cin>>data;
}
return head;

}
void print(node*head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    node*head=NULL;
    int data, i;
    head=takeinput();
    print(head);
    cout<<"enter the data, position resp: \n";
    cin>>data>>i;
    head=insertati(head,i,data);
    print(head);

    return 0;
}