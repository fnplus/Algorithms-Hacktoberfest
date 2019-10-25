import java.util.Scanner;

public class No_of_Divisors
{
	public static void main(String[] args) 
	{
	    Scanner sc = new Scanner(System.in);
	    System.out.println("Enter the number: ");
		int num = sc.nextInt();
		int i, count=2;
		
		for(i=2; i<=num/2; i++)
		{
		    if(num%i==0)
		        count++;
		}
		
		System.out.println("No. of divisors of "+num+" are: "+count);
	}
}
