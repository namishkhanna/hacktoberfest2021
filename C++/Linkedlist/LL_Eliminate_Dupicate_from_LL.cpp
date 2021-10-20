/*You have been given a singly linked list of integers where the elements are sorted in ascending order.
 Write a function that removes the consecutive duplicate values such that the given list only contains 
 unique elements and returns the head to the updated list.*/

 /****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
                
		        this->next = NULL;
	        }
        };

*****************************************************************/
//Contributed by Vivek Singh
Node *removeDuplicates(Node *head)
{if(head==NULL)
    return head;
    //using recursion
   /* if(head->next==NULL)
        return head;
    Node*x=removeDuplicates(head->next);
    if(x->data==head->data)
        return x;
    else
    {
        head->next=x;
        return head;
    }*/
 //using iteration
 Node*t1=head;
 Node*t2=head->next;
 while(t2!=NULL)
 {
     if(t1->data==t2->data)
         t2=t2->next;
     else
     {
         t1->next=t2;
         t1=t1->next;
         t2=t2->next;
         
     }
 }
 t1->next=NULL;
 delete t1;
 delete t2; 
 return head;
}