#include "bits/stdc++.h"
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    vector< vector<int> > adj(n)  ;
    vector<int> id(n,0);
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        id[y]++;
    }
    queue<int> pq;
    for(int i=0;i<n;i++){
        if(id[i]==0)
           { pq.push(i);}

    }
    int cnt=0;
    while (!pq.empty()){
        cnt++;
        int k=pq.front();
        pq.pop();
        cout<<k<<" ";
        
        for(auto it : adj[k]){
            id[it]--;
            if(id[it]==0)
                pq.push(it);
        }


    }
    return 0;    
}
