import java.util.Scanner;

class selection_sort
{
    public static void main(String args[])
    {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the number of elements: ");
        int n = scan.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter the elements: ");
        for(int i=0;i<n;i++)
        {
            arr[i] = scan.nextInt();
        }
        System.out.println("The elements are: ");
        for(int i=0;i<n;i++)
        {
            System.out.print(arr[i] + " ");
        }

        for(int i=0;i<n-1;i++)
        {
            int minimum_index = i;
            for(int j=i;j<n;j++)
            {
                if(arr[j] < arr[minimum_index])
                {
                    minimum_index = j;
                }
            }
            int temp = arr[minimum_index];
            arr[minimum_index] = arr[i];
            arr[i] = temp;
        }
        System.out.println();
        System.out.println("Sorted array: ");
        for(int i=0;i<n;i++)
        {
            System.out.print(arr[i] + " ");
        }
        scan.close();
    }
}