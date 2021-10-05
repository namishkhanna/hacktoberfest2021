/*a program that reads an unsorted array of integers and two numbers n and m. The program checks if n and m occur next to each other in the array (in any order).

Input data format

The first line contains the size of an array.
The second line contains elements of the array.
The third line contains two integer numbers n and m.
All numbers in the same line are separated by the space character.

Output data format

Only a single value: true or false.
Sample Input 1:

3
1 3 2
2 3
Sample Output 1:

true
Sample Input 2:

3
2 1 2
2 3
Sample Output 2:

false
*/
//this basically  is an example of traversal in arrays and comparing to values

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int s = scanner.nextInt();
        
        int[] arr = new int[s];
        for (int i = 0; i < s; i++) {
            arr[i] = scanner.nextInt();
        }
       
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        boolean result = false;
        for ( int i = 0; i < s-1; i++) {
            if( ((arr[i]==m) && (arr[i+1]==n))) {
                result = true;
                }
            else if( ((arr[i]==n) && (arr[i+1]==m)) ){
                result = true;
                }
            }
        System.out.print(result);
    }
}
