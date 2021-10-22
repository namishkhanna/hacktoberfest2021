#include <iostream>

using namespace std;

struct node
{
    int data ;
    node *next;
};

class sll
{
    node *head , *temp , *temp1 ,*p ;
    public:
        void create();
        void display();
        void insert_head();
        void insert_last();
        void insert_after();
        void del_first();
	    void search();
	    void count();
	    void sort_asc();
	    void concat(sll);
	    void reverse();
        void merge(sll , sll);
};

void sll :: create()
{
    head=NULL;
     char ch ;
    
    do
    {
    temp = new node;
    temp->next = NULL;
    cout<<"Enter The Data";
    cin>>temp->data;
    
    if (head == NULL)
    {
        head=temp;
        temp1=head;
    }
    else 
    {  
        while(temp1->next!=NULL)
        
         temp1=temp1->next;
          temp1->next = temp;
    }
    
cout<<"DO you want to enter more nodes(y/n)";
cin>>ch;
    }
     while(ch=='y');
}
void sll :: display()
{
    for(temp=head; temp!=NULL; temp=temp->next)
        cout<< temp-> data<<"->";
}

void sll :: insert_head()
{
   temp = new node;
    temp->next = NULL;
    cout<<"\n"<<"Enter The Data you want to insert at head : ";
    cin>>temp->data;
    temp->next=head;
    head=temp;
    cout<<"Node inserted at head"<<"\n";
}

void sll ::insert_last()
{
  temp = new node;
  temp->next = NULL;
  cout<<"\n"<<"Enter The Data you want to insert at last : ";
  cin>>temp->data;
  temp1=head;
  while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next=temp;
    cout<<"Node inserted at last"<<"\n";
}

void sll :: insert_after()
{
    int value;
    temp = new node;
    temp->next = NULL;
    cout<<"\n"<<"Enter The Data you want to insert at random : ";
    cin>>temp->data;
    cout<<"\n"<<"After which you want to insert ";
    cin>>value;
    temp1=head;
    while(temp1!=NULL)
    {
      if(temp1->data==value)
      {
          temp->next=temp1->next;
          temp1->next=temp;
          break;
      }
      else
    
      temp1=temp1->next;
    }
    cout <<"\n"<<"Node inserted after suggested node"<<"\n";
}  

void sll :: del_first()
{
    cout<<"\n"<<"Result after deleting first node :"<<"\n";
    temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
}

void sll :: search()
{
    int value, flag=0;
    cout<<"\n"<<"Enter the value u want to search : ";
    cin>>value;
    
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data==value)
        {
           flag=1;
            break;
        }
        else
            temp=temp->next;
    }
    if(flag==1)
    
        cout<<"Data is present"<<"\n";
    else
        cout<<"Data is not present"<<"\n";
        
    
}

void sll :: count()
{
    int count1=0;
    temp=head;
    while(temp!=NULL)
    {
        count1++;
        temp=temp->next;
    }
    cout<<"\n"<<"Total Number of nodes in the list :"<<count1 <<"\n";
}

void sll :: sort_asc()
{
    int value;
    for(temp=head ; temp!=NULL ; temp=temp->next)
    {
        for (temp1=temp->next ; temp1!=NULL ; temp1=temp1->next)
        {
            if(temp->data > temp1->data)
            {
                value=temp->data;
                temp->data=temp1->data;
                temp1->data=value;
            }
        }
    }
    cout<<"\n"<<"Result after swapping the list is :"<<"\n";
}

void sll :: concat(sll s2)
{
  temp=head;
  while(temp->next!=NULL)
  {
      temp=temp->next;
  }
  temp->next=s2.head;
  cout<<"\n"<<"Result after merging two lists is :"<<"\n";
    
}

void sll :: reverse()
{
    node  *p1,*p2 ,*p3;
    p1=head;
     p2=p1->next;
     p3=p2->next;
     p1->next=NULL;
     p2->next=p1;
     while(p3!=NULL)
     {
         p1=p2;
         p2=p3;
         p3=p3->next;
         p2->next=p1;
        
     }
     head=p2;
     cout<<"\n"<<"Reversed list is :"<<"\n";
}

void sll :: merge(sll s1 , sll s2)
{
    
    if(s1.head->data < s2.head->data)
    {
        head=s1.head;
        p=head;
        s1.head=s1.head->next;
    }
    else
    {
        head=s2.head;
        p=head;
        s2.head=s2.head->next;
    }
    
    while(s1.head!=NULL & s2.head!=NULL)
    {
        if(s1.head->data < s2.head->data)
        {
            p->next=s1.head;
            p=p->next;
            s1.head=s1.head->next;
        }
        else
        {
            p->next=s2.head;
            p=p->next;
            s2.head=s2.head->next;
        }
    }
        
        
    while(s1.head!=NULL)
    {
        p->next=s1.head;
        p=p->next;
        s1.head=s1.head->next;

    }
        
    while(s2.head!=NULL)
    {
            
        p->next=s2.head;
        p = p->next;
        s2.head=s2.head->next;
    }
    
    
}





int main()
{
   sll s1 ,s2 , s3;
   s1.create();
    s1.display();
 cout<<"\n";
    s2.create();
    s2.display();
   /* cout<<"\n";
 s1.concat(s2);
    cout<<"\n";
    s1.display();
    s1.insert_head();
    s1.display();
    s1.insert_last();
    s1.display();
    s1.insert_after();
    s1.display();
    s1.del_first();
    s1.display();
    s1.search();
    s1.display();
    s1.count();
    s1.display();
    s1.sort_asc();
    s1.display();
    s1.reverse();
    s1.display();*/
    s3.merge(s1,s2);
    s3.display();
    cout<<"\n";
    s1.display();
    cout<<"\n";
    s2.display();
    
  /*cout<< "*************Main Menu************"<<"\n";
    cout<<"1. Create a List"<<"\n";
    cout<<"2. Display a List "<<"\n";
    cout<<"3. Insert node at head"<<"\n";
    cout<<"4. Insert node at last"<<"\n";
    cout<<"5. Insert node at random"<<"\n";
    cout<<"6. Delete a node"<<"\n";
    cout<<"7. To search any node"<<"\n";
    cout<<"8. To count the nodes"<<"\n";
    cout<<"9. To sort the list in ascending order"<<"\n";
    cout<<"10. To sort the list in descending order"<<"\n";
    cout<<"11. To merge the two lists"<<"\n";
    cout<<"Enter your choice : ";*/
    
        
    
    return 0;
}



















