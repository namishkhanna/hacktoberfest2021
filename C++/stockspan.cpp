  #include <iostream>
using namespace std;
#include<stack>
int* stockSpan(int *price, int size)  {
    //creating a new array dynamically
   int *a=new int[size];
    int i=0;
    stack<int>s;
    s.push(0);
    a[0]=1;
    for(i=1;i<size;i++) 
    {
        // what we do in this is we will pop from stack till the top of stack is less than the current price if by pop operation stack is empty then ppush i+1 otherwise i-s.top();
     while (!s.empty() && price[s.top()] <price[i]) {
            s.pop(); 
     }
        a[i] = (s.empty()) ? (i + 1) : (i - s.top()); 
  
        s.push(i); 
    }// returning the array 
        return a;
    
}

int main() {
    int size;
    cin >> size;

    int *input = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> input[i];
    }

    int *output = stockSpan(input, size);
    for (int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }

    cout << "\n";

    delete[] input;
    delete[] output;
}
