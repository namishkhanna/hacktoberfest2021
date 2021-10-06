public class Main
{
   static void bubbleSort(int arr[], int n)
   {
       for (int i = 0; i < n-1; i++)
       {  
           // last i elements are already at the correct position
           for (int j = 0; j < n-i-1; j++)
           {
               if (arr[j] > arr[j+1])
               {  
                   // swap arr[j], arr[j+1]
                   int temp = arr[j];
                   arr[j] = arr[j+1];
                   arr[j+1] = temp;
               }
           }
       }
   }
  
   static void printArray(int arr[], int n)
   {
       for (int i = 0; i < n; i++)
           System.out.print(arr[i] + " ");
       System.out.println();
   }
  
   public static void main(String args[])
   {
       int arr[] = {6, 3, 8, 9, 5};
       int n = arr.length;
      
       System.out.print("Given Array: ");
       printArray(arr, n);
      
       bubbleSort(arr, n);
      
       System.out.print("Sorted Array: ");
       printArray(arr, n);
   }
}
