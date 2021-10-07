#include <iostream>
#include<vector>


using namespace std;

template<typename T>
class Stack{

    vector<T>arr;

public:
    void push(T data)
    {
        arr.push_back(data);
    }
    void pop()
    {
        arr.pop_back();
    }
    T top()
    {
        int lastIdx= arr.size()-1;
        return arr[lastIdx];
    }
    bool empty()
    {
        return arr.size()==0;
    }


};
int main()
{
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);


    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
