#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long int n,i;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    long long int cs,ms;
    cs=a[0];
    ms=a[0];
    for(i=1;i<n;i++)
    {
        cs=max(a[i],cs+a[i]);
        ms=max(cs,ms);
    }
    cout<<ms;
    return(0);
}