/*You have been given a singly linked list of integers. Write a function to print the list in a reverse order.

To explain it further, you need to start printing the data from the tail
 and move towards the head of the list, printing the head data at the end.*/

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
void printReverse(Node *head)
{
  if(head==NULL)
      return;
   printReverse(head->next);
       cout<<head->data<<" ";
    return;//Write your code here
}