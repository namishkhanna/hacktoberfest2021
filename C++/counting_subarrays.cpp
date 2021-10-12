/* Given an array A of N non-negative numbers and you are also given non-negative number B.

You need to find the number of subarrays in A having sum less than B. We may assume that there is no overflow.

*/

#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Number of elements in array ";
	cin>>n;
	int a[n];
	cout<<"enter elements in array ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"value of b ";
	int b;
	cin>>b;
	int i=0,j=0,prej=-1,sum=0,ans=0;
	while(i<n && j<n){
		if(j!=prej){
			sum+=a[j];
		}
		if(sum<b){
			ans+=j-i+1;
			prej=j;
			j++;
		}
		else{
			sum-=a[i];
			prej=j;
			i++;
		}
	}
	cout<<ans;
}
