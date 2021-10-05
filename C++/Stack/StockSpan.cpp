/*
The stock span problem is a financial problem where we have a series of n daily price quotes for a stock and we need to calculate the span of stock’s price for all n days. 
The span Si of the stock’s price on a given day i is defined as the maximum number of consecutive days just before the given day, for which the price of the stock on the current day is less than or equal to its price on the given day.
For example, if an array of 7 days prices is given as {100, 80, 60, 70, 60, 75, 85}, then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6}.

Example 1:

Input: 
N = 7, price[] = [100 80 60 70 60 75 85]
Output:
1 1 1 2 1 4 6
Explanation:
Traversing the given input span for 100 
will be 1, 80 is smaller than 100 so the 
span is 1, 60 is smaller than 80 so the 
span is 1, 70 is greater than 60 so the 
span is 2 and so on. Hence the output will 
be 1 1 1 2 1 4 6.
Example 2:

Input: 
N = 6, price[] = [10 4 5 90 120 80]
Output:
1 1 2 4 5 1
Explanation:
Traversing the given input span for 10 
will be 1, 4 is smaller than 10 so the 
span will be 1, 5 is greater than 4 so 
the span will be 2 and so on. Hence, the 
output will be 1 1 2 4 5 1.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1 ≤ N ≤ 105
1 ≤ C[i] ≤ 105
 ****************************************************************/
//Contributed By Vivek Singh
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
      /* stack<int>s;
       vector<int>span(n,0);
       span[0]=1;
       s.push(0);
       for(int i=0;i<n;i++)
       {
           while(!s.empty()&&price[s.top()]<=price[i])
           {
               s.pop();
           }
           span[i]=(s.empty())?(i+1):(i-s.top());
           s.push(i);
       }
       return span;*/
       //another approach to solve the problem is by considering it to be the question of Nearest greatest
       //to left problem and by mofifying few condtion we can solve the ques.
       /*code of this approach  is below*/
        vector<int>v(n,0);
       stack<pair<int,int>>s;
       for(int i=0;i<n;i++)
       {
           while(!s.empty()&&s.top().first<=price[i])
           {
               s.pop();
           }
           v[i]=s.empty()?-1:s.top().second;
           s.push({price[i],i});
       }
       for(int i=0;i<n;i++)
       {
           v[i]=i-v[i];
       }
       return v;
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}