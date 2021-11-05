#include <climits>
template<typename T>
class StackUsingArray{
      int *data ;
      int nextIndex;
      int capacity;

public:

StackUsingArray(){
    data = new T[4];
    nextIndex =0;
    capacity=4;
}
// return no. of element present in my stack 

int size(){
    return nextIndex;
}

bool isEmpty(){
    //  if(nextIndex==0){
    //     return true;
    // }
    // else {
    //     return false;
    // } 

    //    or
    
    return nextIndex ==0;
}

// insert element
 void push(T element){
     if(nextIndex == capacity){
         T *newData = new T[2*capacity];
         for(int i =0 ;i<capacity;i++){
             newData[i]=data[i];
         }
        capacity *= 2;
        delete [] data;
        data = newData ;
        //  cout << "Stack Full" << endl;
        //  return;
     }
     data[nextIndex]==element;
     nextIndex++;
 }
 // delete element

 T pop (){
     if (isEmpty())
     {
        cout <<"stack is empty"<< endl;
        return 0;
     }
     nextIndex--;
     return data[nextIndex];
 }

 // top element 

 T top (){
     if (isEmpty())
     {
       cout<<"Stack is Empty"<< endl;
       return 0 ;
     }
    return data[nextIndex-1]; 
 }

}; 