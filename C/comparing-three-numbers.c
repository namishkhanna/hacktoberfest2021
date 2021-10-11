#include <stdio.h>

int main() {
   int a, b, c,flag;

   a = 11;
   b = 22;
   c = 33;
   while(a!=b!=c){
      if(a>b && a>c){
         flag=a;
      }
      if(b>c && b>c){
         flag=b;
      }
      else{
         flag=c;
      }
      printf("Largest number is %d",flag);
      break;
   }
   return 0;
}
