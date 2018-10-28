import java.io.UnsupportedEncodingException;
import java.util.Scanner;

/** 
 * Support extended ASCII character
 */
public class counting_sort { 
	
	void sort(char arr[]) { 
		int n = arr.length; 
		  
        // output will contain sorted arr
        char output[] = new char[n];
        
        // store count of each character 
        int count[] = new int[65536];
        for (int i = 0; i < n; i++) {
            count[arr[i]]++; 
        }
  
        // Change count[i] so that count[i] now contains actual 
        // position of this character in output array 
        for (int i = 1; i <= 65535; i++) {
            count[i] += count[i - 1]; 
        }
  
        // save into output
        for (int i = n-1; i >= 0; i--) { 
            output[count[arr[i]]-1] = arr[i]; 
            count[arr[i]]--; 
        } 
  
        // Copy the output array to arr, so that arr now 
        // contains sorted characters 
        for (int i = 0; i < n; ++i) {
            arr[i] = output[i]; 
        }
        
	} 

	public static void main(String args[]) throws UnsupportedEncodingException { 
		counting_sort ob = new counting_sort();
		
		Scanner scanner = new Scanner(System.in);
		
		String input = scanner.next();
		char[] arr = input.toCharArray();

		ob.sort(arr); 

		System.out.print("Sorted character array is "); 
		for (int i = 0; i < arr.length; i++) {
			System.out.print(arr[i]); 
		}
		
		scanner.close();
	} 
}
