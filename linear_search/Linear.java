import java.io.*;
import java.util.*;
import java.util.Scanner;

public class Linear 
{ 
  static int search(int A[], int M) 
  { 
	for(int i=0; i<A.length; i++) 
	{ 
		if(A[i] == M) 
	          return i; 
	} 
	return -1; 
  } 

   public static void main(String args[]) { 
	Scanner sc = new Scanner(System.in); 
	int N = sc.nextInt();
        int M = sc.nextInt();
	int[] A =new int[N];
   
        for(int i =0;i<N;i++){
          A[i] = sc.nextInt();  
        }
	int result = search(A, M); 
         System.out.println(result); 
   } 
} 
