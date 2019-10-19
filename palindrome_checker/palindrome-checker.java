import java.util.Scanner;

public class Palindrome-checker
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
	    System.out.println("Enter the string you want to check: ");
	    String input = sc.next();
	    
	    StringBuffer str = new StringBuffer(input);
	    str.reverse();
	    System.out.println(str);
	    
	    if(input.equals(str.toString()))
	        System.out.println("The word is palindrome.");
	    else
	        System.out.println("The string is not palindrome.");
    }
}
