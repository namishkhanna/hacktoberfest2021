/*
Given a binary matrix M of size n X m. Find the maximum area of a rectangle formed only
 of 1s in the given matrix.

Example 1:

Input:
n = 4, m = 4
M[][] = {{0 1 1 0},
         {1 1 1 1},
         {1 1 1 1},
         {1 1 0 0}}
Output: 8
Explanation: For the above test case the
matrix will look like
0 1 1 0
1 1 1 1
1 1 1 1
1 1 0 0
the max size rectangle is 
1 1 1 1
1 1 1 1
and area is 4 *2 = 8.
 
Expected Time Complexity : O(n*m)
Expected Auixiliary Space : O(m)

Constraints:
1<=n,m<=1000
0<=M[][]<=1

Note:The Input/Ouput format and Example given are used for system's internal purpose, and s
hould be used by a user for Expected Output only. As it is a function problem, hence a user 
should not read any input from stdin/console. The task is to complete the function specified, 
and not to write the full code
*/
/**********************************************************************************************/
//Contributed By Vivek Singh
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

/*the approach of the question is to break the question into maximum area of histogram question*/

class Solution{
  public:
  vector<int> NSR(vector<int>v, int n)
  {
      vector<int>right(n,0);
      stack<pair<int,int>>s;
      for(int i=n-1;i>=0;i--)
      {
         while(!s.empty()&&s.top().first>=v[i]) 
         {
             s.pop();
         }
         right[i]=s.empty()?n:s.top().second;
         s.push({v[i],i});
      }
     return right; 
  }
  vector<int> NSL(vector<int>v, int n)
  {
      vector<int>left(n,0);
      stack<pair<int,int>>s;
      for(int i=0;i<n;i++)
      {
         while(!s.empty()&&s.top().first>=v[i]) 
         {
             s.pop();
         }
         left[i]=s.empty()?-1:s.top().second;
         s.push({v[i],i});
      }
     return left; 
  }  
  int MAH(vector<int>v,int n)
  {
     vector<int>right=NSR(v,n);
     vector<int>left=NSL(v,n);
     vector<int>width(n,0);
     vector<int>area(n,0);
     for(int i=0;i<n;i++)
     {
         width[i]=right[i]-left[i]-1;
         area[i]=width[i]*v[i];
     }
     int mx=area[0];
     for(int i=1;i<n;i++)
     {
         if(area[i]>mx)
         {
             mx=area[i];
         }
     }
     return mx;
  }
    int maxArea(int M[MAX][MAX], int n, int m)
    {
       vector<int>v(m,0);
       for(int j=0;j<m;j++)
       {
           v[j]=M[0][j];
       }
      int mx=MAH(v,m);
       for(int i=1;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               if(M[i][j]==0)
               v[j]=0;
               else
               v[j]=v[j]+M[i][j];
           }
           mx=max(mx,MAH(v,m));
       }
       return mx;
       
    }
};


int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}