/*
Given elements of a stack, clone the stack without using extra space.


Example 1:

Input:
N = 10
st[] = {1, 1, 2, 2, 3, 4, 5, 5, 6, 7}
Output:
1 



Expected Time Complexity: O(N*N)
Expected Auxiliary Space: O(1)
*/
/************************************************************************************************/
//Contirbuted  by Vivek Singh
#include<bits/stdc++.h> 
using namespace std;
class Solution{
    public:
    void clonestack(stack<int> st, stack<int>& cloned)
    {
        //code here
        if(st.size()==1)
        {
            cloned.push(st.top());
            return;
        }
        int a=st.top();
        st.pop();
        clonestack(st,cloned);
        cloned.push(a);
    }
}; 
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int arr[N];
        stack<int> st;
        vector<int> copy;
        for(int i = 0; i < N; i++){
            cin >> arr[i];
            st.push(arr[i]);
            copy.push_back(arr[i]);
        }
        
        reverse(copy.begin(), copy.end());
        
        Solution ob;
        stack<int> cloned;
        ob.clonestack(st,cloned);
        vector<int> check;
        while(cloned.size())
        {
            check.push_back(cloned.top());
            cloned.pop();
        }
        
        int flag = 0;
        if(check!=copy)
            flag = 1;
        
        cout<<1-flag<<endl;
    }
    return 0; 
} 