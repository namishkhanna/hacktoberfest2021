import java.util.Scanner;
public class BinarySearch {
    public static void main(String[] args) {
        int arr [] = {-3,-2,0,1,3,6,16,18,45,89,101,108};
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter an integer to search it in the array :");
        int target = sc.nextInt();
        int indexNumber = binarySearch(arr,target);
        printMessage(target, indexNumber);
    }

    static int binarySearch(int [] arr , int key){
        int start = 0;
        int end = arr.length-1;
        while(start <=end){

            int mid = start + (end - start)/2;

            if(key>arr[mid]){
                start = mid+1;
            }
            else if(key<arr[mid]){
                end = mid-1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
    static void printMessage(int target, int indexnumber){ // This method prints the index of target when called.
        if(indexnumber == -1){
            System.out.println(target + " is not found in the array.");
        }
        else{
            System.out.println(target + " is found in the array at index " + indexnumber);
        }
    }
}
