#include <iostream>
#define n 5
using namespace std;

int queue[n],front=-1,rear=-1;

bool isFull(){
	if (front == 0 && rear == n - 1) {
      return true;
  }
  else if(front == rear + 1){
  	return true;
  }
  return false;
}

bool isEmpty(){
	if (front == -1){
		return true;
	}
	return false;
}

void Insert(){
	int val;
	if (isFull()){
		cout<<"Queue Overflow"<<endl;
	}else{
		if(front==-1){
			front=0;
		}
		cout<<"Enter element value: "<<endl;
		cin>>val;
		rear= (rear+1)%n;
		queue[rear]=val;
	}
}
void Delete(){
	if(isEmpty()){
		cout<<"Queue Underflow"<<endl;
	}else{
		cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      	front= (front+1)%n;
	}
}
void Display() {
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i!= rear; i = (i + 1)%n)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
int main() {
   int ch;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter your choice : "<<endl;
      cin>>ch;
      switch (ch) {
         case 1: Insert();
         break;
         case 2: Delete();
         break;
         case 3: Display();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=4);
   return 0;
}
