#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,k,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
	    for(j=1;j<=n-i;j++){
		        printf(" ");
		}
		if(i%2==1){
	        for(k=1;k<=2*i-1;k++){
		        printf("*");
		    }
        }else{
            for(k=1;k<=2*i-1;k++){
		        printf("-");
		    }
        }
		printf("\n");
    }
    for(i=n;i>=1;i--)
    {
	    for(j=n;j>=i;j--){
	    	printf(" ");
	    }
	    if(i%2==1){
	        for(k=2*i-2;k>1;k--){
		        printf("-");
	        }
	    }else{
	        for(k=2*i-2;k>1;k--){
		        printf("*");
	        }
	    }
	    printf("\n");
    }
    getch();
}	
