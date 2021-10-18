#include<stdio.h>

int main(){
  int a,temp,r,sum=0;
  printf("Enter number: ");
  scanf("%d",&a);
  temp=a;
  while(a>0){
    r=a%10;
    sum=(sum*10)+r;
    a=a/10;
  }
  (sum==temp)?printf("Palindrome Number"):printf("Not a Palindrome Number");
  return 0;
}
