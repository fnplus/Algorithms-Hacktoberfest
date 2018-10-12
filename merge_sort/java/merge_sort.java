import java.util.Scanner;

public class MergeSort  { 
    
    static void merge(int A[ ] , int start, int mid, int end) {
        int p = start ,q = mid+1;
        int Arr[]=new int[end-start+1]; 
        int k=0;
        for(int i = start ;i <= end ;i++) {
            if(p>mid)
               Arr[k++]=A[q++];
            else if (q>end)
               Arr[k++]=A[p++];
            else if(A[p]<A[q])     
              Arr[k++]=A[p++];
            else
              Arr[k++]=A[q++];
         }
         for (int l=0 ; l< k ;l++) {
            A[start++]=Arr[l];                          
         }
    }
    static void merge_sort (int A[ ] , int start , int end ){
               if( start < end ) {
               int mid = (start + end ) / 2;           
               merge_sort (A, start , mid );           
               merge_sort (A,mid+1 , end );            
               merge(A,start , mid , end );   
       }
    }
    public static void main(String args[]) { 
        Scanner in=new Scanner(System.in);         
        //enter size of array
        int size=in.nextInt();
        int arr[]=new int[size];
        for(int i=0;i<size;i++)
          arr[i]=in.nextInt();
      
        //sorting the array  
        merge_sort(arr,0,arr.length-1);
      
        //printing the array
        for(int i=0;i<arr.length;i++)
            System.out.print(arr[i]+" ");
    } 
}
