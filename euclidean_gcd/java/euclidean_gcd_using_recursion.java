import java.util.*;
public class gcd {

	static int gcd(int x,int y)
    {
       if(x==0||y==0)
       {
           return 0;
       }
       else if(y == x)
       {
           return x;
       }
       else if(x>y)
           return gcd(x-y,y);
       else 
           return gcd(x,y-x);
    
    }
	
	 
	
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		System.out.println("enter two nos");
		int a = in.nextInt();
		int b = in.nextInt();
		 int ans = gcd(a,b);
		 System.out.println(ans);
		
	}
	

}