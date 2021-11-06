#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
    long long N,V,max{},min{},mini{};
    cin>>N>>V;
    
   max=(N*(N-1))/2;
    if(V==1){
        min=max;
    }
    else if(N-1==V){
        min=N-1;
    }
    else if(V>N){
        min=N-1;
    }
    else{
        min+=1*V;
       min+=(N-V-1)*(4+(N-V-2))/2;
    }
    cout<<max<<" "<<min<<endl;
    }
    return 0;
}