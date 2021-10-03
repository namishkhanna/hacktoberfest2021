#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int s;
int binarySearch(int arr[],int i, int j)
{
    int a=1,b=0;
    int mid=(i+j)/2;
    while(i<j)
    {
        if(arr[mid]==s)
        {
            return a;
        }
        if(s>arr[mid])
        {
            return binarySearch(arr,mid+1,j);
        }
        if(s<arr[mid])
        {
            return binarySearch(arr,i,mid);
        }
    }
    return b;
}
int main()
{
    int n,result;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter array elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"enter element to search: ";
    cin>>s;
    result=binarySearch(arr,0,n-1);
    if(result==1)
        cout<<"element is present";
    else
        cout<<"element is not present";
}
