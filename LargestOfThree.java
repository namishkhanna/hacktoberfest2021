import java.util.Scanner;
public class LargestOfThree {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Input 1st number");
		int a = sc.nextInt();
		System.out.println("Input 2nd number");
		int b = sc.nextInt();
		System.out.println("Input 3rd number");
		int c = sc.nextInt();
		//Q. Find the largest of the three numbers?
//		int max = a;
//		if(b > max) {
//			 max = b;
//			 
//		}if(c>max) {
//			max = c;
//		}
		int max = Math.max(c, Math.max(a, b));
		System.out.println(max);

	}

}
