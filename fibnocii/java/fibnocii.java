import java.util.Scanner; 
  
public class fibocii { 
    public static int fib(int n) { 
        if(n<=1) return n;
        return fib(n-1)+fib(n-2);
    }
    public static void main(String[] args) { 
        Scanner in=new Scanner(System.in);
        int a = in.nextInt();
        System.out.println("fib(" + a +  ") = " + fib(a)); 
    } 
}
