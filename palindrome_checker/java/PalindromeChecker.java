import java.util.Scanner;

public class PalindromeChecker {
	
	public static void main(String...strings) {
		// Input
		Scanner scanner = new Scanner(System.in);
		
		// Print output
		if (isPalindrome(scanner.next())) {
			System.out.println("This is a palindrome.");
		} else {
			System.out.println("This is not a palindrome.");
		}
		
		scanner.close();
	}

	static boolean isPalindrome(String s) {
        char[] arr = s.toCharArray();
        for (int i = 0; i < arr.length / 2; i++) {
        	String left = Character.toString(arr[i]);
        	String right = Character.toString(arr[arr.length - 1 - i]);
        	if (!left.equalsIgnoreCase(right)) {
        		return false;
        	}
        }
        
        return true;
    }

}
