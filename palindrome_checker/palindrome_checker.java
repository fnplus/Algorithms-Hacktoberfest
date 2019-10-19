import java.util.Scanner;

public class palindrome {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.println("enter String");
		String str = scanner.next();
		StringBuffer s = new StringBuffer(str);
		
		String str2 =s.reverse().toString();
		 if(str.equals(str2))
		 {
			 System.out.println("it is palindrome");
			
		 }
		 else
			 System.out.println("it is not a  palindrome");

		
		}


}