#include <iostream>
using namespace std;

int main() {
    
    int dividend,divisor;    
	cin>>dividend>>divisor;
	
	int sign= (dividend<0) ^ (divisor<0) ? -1:1 ; /* in xor if both values same then 0 i.e false which will give answer 
	                                                 after question mark of true:false ,here it is -1 for tru and 1 for false 
	                                                since if both signs same (+/-) then false which will give +1 as answer after ? */
	  
	  dividend=abs(dividend);  /*we take only absolute value i.e without any sign */
	  divisor=abs(divisor);    
	int quotient=0;
	while(dividend>=divisor){
	    dividend-=divisor;
	    quotient++;
	}
	cout<<sign*quotient;
	return 0;
}