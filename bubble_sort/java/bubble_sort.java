// add your code here :
public class BubbleSort {
  public static void main(String args[]) {
    int arr[]={9,1,0,2,3,12};
    
    //perform sorting 
    for(int i=0;i<arr.length;i++) {
      for(int j=0;j<arr.length-i-1;j++) {
        if(arr[j]>arr[j+1]) {
          int temp=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;
        }
      }    
    }
    
    //print array
    for(int i=0;i<arr.length;i++)
      System.out.print(arr[i]+" ");
  }  
}
