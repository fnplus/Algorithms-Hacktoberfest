import java.util.Scanner;
 
 
public class Palindrome {
	
	
	public static void main(String[] args){
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Please enter the String");
		
		String str = sc.nextLine();
		
		sc.close();
		
		boolean status = isPalindrome(str);
		
		if(status == true){
		System.out.println("Given String is Palindrome");
		}
		else{
	    System.out.println("String is not Palindrome");
		}
		
		
	}
 
	private static boolean isPalindrome(String word) {
	 if(word.length() < 2) { 
	  return true;  
		}
		char first  = word.charAt(0);
		char last   = word.charAt(word.length()-1);
	    if(  first != last  ) { 
	    	return false; 
	    }
		else { 
		return isPalindrome(word.substring(1,word.length()-1)); 
		}
	}
}	
