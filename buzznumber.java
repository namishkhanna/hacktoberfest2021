import java.util.*;
public class buzznumber
{
    public static void main(String args[])
    {
        Scanner ob=new Scanner(System.in);
        System.out.println("Enter the number to be checked.");
        int num=ob.nextInt();
        if(num%10==7 || num%7==0)
        {
            System.out.println(num+" is a Buzz Number.");
        }
        else
        {
            System.out.println(num+" is not a Buzz Number.");
        }
    }
}