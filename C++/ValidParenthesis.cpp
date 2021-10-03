#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <climits>
#include <vector>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define ll             long long int
#define ld             long double
#define mod            1000000007
#define endl           "\n"
#define vi             vector<ll>
#define vs             vector<string>
#define pii            pair<ll, ll>
#define ump            unordered_map
#define mp             map
#define pq_max         priority_queue<ll>
#define pq_min         priority_queue<ll,vi,greater<ll>
#define ff             first
#define ss             second
#define mid(l,r)       (l+(r-l)/2)
#define loop(i,a,b)    for(int i=(a); i <=(b);i++)
#define looprev(i,a,b) for(int i=(a); i >=(b);i--)
#define clr(val)       memset(val,0,sizeof(val))
#define what_is(x)     cerr << #x << " is " << x << endl; 
#define OJ             \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
bool Balanced(string exp){          

    stack <char> st;
    char p;

    for(int i = 0; i < exp.length(); i++){

        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{'){
            st.push(exp[i]);
            continue;
        }
        if (st.empty()){
            return false;
        }

        switch (exp[i])
        {
        case ')':
            p = st.top();
            st.pop();
            if (p == '{' || p == '['){
                return false;
            }
            break;
        case ']':
            p = st.top();
            st.pop();
            if (p == '{' || p == '('){
                return false;
            }
            break;
        case '}':
            p = st.top();
            st.pop();
            if (p == '[' || p == '('){
                return false;
            }
            break;
        }
    }
    return (st.empty());
} 

int main() 
{
    string s;       //()[]{}    ()[}
    cin>>s;
 
    if (Balanced(s)){
        cout<<"Balanced";
    }
    else{
        cout<<"Not Balanced";
    }
 
return 0;
   
}
