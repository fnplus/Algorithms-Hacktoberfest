import java.util.Scanner;

public class euclidean_gcd {
	
	private static int gcd = 0;
	private static int count = 0;
	
	private static int euclideanGcd(int a, int b) {
		if(a > b) {
			count = b;
		} else {
			count = a;
		}
		
		for(int j = 1; j < count + 1; j++) {
			if(a % j == 0 && b % j == 0) {
				gcd = j;
			}
		}
		
		return gcd;
	}
	
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		int a = scanner.nextInt();
		int b = scanner.nextInt();
		
		System.out.println(euclideanGcd(a, b));
		
		scanner.close();
	}
}