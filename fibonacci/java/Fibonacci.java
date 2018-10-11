package fibonacci;

import java.util.Scanner;

public class Fibonacci {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		int fibonacciNumber;
		System.out.print("Enter which Fibonacci number you want to know from the Fibonacci series: ");
		fibonacciNumber = input.nextInt();
		if (fibonacciNumber > 0) {
			System.out.println("The Fibonacci number which is on the given position (" + fibonacciNumber + ") is: " + fibonacci(fibonacciNumber));
		}
		
		input.close();
	}
	
	private static long fibonacci(int n) {
		if (n == 0) {
			return 0;
		} else if (n == 1) {
			return 1;
		} else {
			return fibonacci(n - 1) + fibonacci(n - 2);
		}
	}
}
