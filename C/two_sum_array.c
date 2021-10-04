#include <stdio.h>
 
// Function to find and print pair
int solve(int A[], int size, int x) {
    for (int i = 0; i < (size - 1); i++) {
        for (int j = (i + 1); j < size; j++) {
            if (A[i] + A[j] == x) {
                printf("Pair with a given sum %d is (%d, %d)\n", x, A[i], A[j]);
 
                return 1;
            }
        }
    }
 
    return 0;
}
 
int main(void) {
    int n,i;
    int A[] = {};
    int target;
    printf("Enter the size of the array ");
    scanf("%d",&n);
    
    printf("Enter the target value ");
    scanf("%d",&target);
    
    printf("Enter the array ");
    for (i=0;i<n;i++) 
        scanf("%d",&A[i]);
  
 
    if (solve(A, n, target)) {
        printf("Valid pair exists\n");
    }
    else {
        printf("No valid pair exists for %d\n", target);
    }
 
    return 0;
}