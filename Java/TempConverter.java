import java.util.Scanner;
public class TempConverter{

	public static float celcius(float a){
		float c = ((5 *(a- 32))/ 9);
		System.out.println("Celcius value is:" +c);
		return 0;
		
	} 
	
	public static float fahrenheit(float a){
		float d = ((a*9/5)+32);
		System.out.print("Fahrenheit value is:"  +d);
		return 0;
	}

	public static void main(String[]args){
		float x,y,z;
		char ch;
		Scanner s = new Scanner(System.in);
		System.out.print("Enter the temperature:");
		z = s.nextFloat();
		System.out.print("Celcius:'C'\n Fahrenheit:'F'\n Enter the temperature value:");
		ch = s.next().charAt(0);
			if(ch=='c'){
				x = celcius(z);
			}
				else if(ch=='f'){
					y = fahrenheit(z);
				}
					else{
						System.out.println("Invalid input.");
					}
	}
}
		

	
		
