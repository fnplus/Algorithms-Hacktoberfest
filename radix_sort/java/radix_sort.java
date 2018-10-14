// add your code here :
import java.util.Scanner; 
import java.util.Arrays;

public class RadixSort { 
  
    static int getMax(int arr[], int n) { 
        int max=arr[0]; 
        for(int i=1;i<n;i++) 
            if (arr[i]>max) 
                max=arr[i]; 
        return max; 
    } 
  
    static void countSort(int arr[], int n, int exp){ 
        int output[]=new int[n];
        int count[]=new int[10]; 
        Arrays.fill(count,0); 
  
        for(int i=0;i<n;i++) 
            count[(arr[i]/exp)%10]++; 
  
        for(int i=1;i<10;i++) 
            count[i]+=count[i-1]; 
  
        for(int i=n-1;i>= 0;i--) { 
            output[count[(arr[i]/exp)%10]-1]=arr[i]; 
            count[(arr[i]/exp)%10]--; 
        } 
  
        for(int i=0;i<n;i++) 
            arr[i]=output[i]; 
    } 
  
    static void radix_sort(int arr[], int n) { 
        int max=getMax(arr,n); 
        for(int exp=1;max/exp>0;exp*= 10) 
            countSort(arr,n,exp); 
    } 
    
    public static void main (String[] args) { 
        Scanner in=new Scanner(System.in);
        int size=in.nextInt();
        int arr[]=new int[size];
        for(int i=0;i<size;i++)
            arr[i]=in.nextInt();
            
        //perform sorting    
        radix_sort(arr,size); 
        
        //printing array
        for(int i=0;i<size;i++)
            System.out.print(arr[i]+" ");
         
    } 
} 
