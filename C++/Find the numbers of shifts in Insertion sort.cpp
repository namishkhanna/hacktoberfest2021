# include<bits/stdc++.h>
using namespace std;
int InsertionSort(int *A,int n){
    int cnt = 0;
    int key,j;
    for (int i = 1; i <= n-1; i++)
    {
        key = A[i];
        j = i-1;
        int in = 0;
        while (j>=0 && A[j]>key)
        {
            A[j+1] = A[j];
            j--;
            cnt++;
            in = 1;
        }
        if(in == 1){
            cnt++;
            in = 0;
        }
        A[j+1] = key;
    }
    return cnt;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        cout<<InsertionSort(arr,n)<<endl;
    }
}
