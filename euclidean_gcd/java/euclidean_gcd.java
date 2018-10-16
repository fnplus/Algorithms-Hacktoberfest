import java.util.Scanner; 
  
public class GCD { 
    public static int gcd(int a, int b) { 
        if (a == 0) return b; 
        return gcd(b%a, a); 
    }
    public static void main(String[] args) { 
        Scanner in=new Scanner(System.in);
        int a = in.nextInt();
        int b = in.nextInt(); 
        System.out.println("GCD(" + a +  " , " + b+ ") = " + gcd(a,b)); 
    } 
} 
