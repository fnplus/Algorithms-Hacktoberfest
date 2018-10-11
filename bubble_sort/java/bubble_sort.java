import java.io.*;
public class Test
{
  public static void main(String args[])throws IOException
  {
    BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    int temp;
    System.out.println("Enter the length of the array:");
    int n = Integer.parseInt(in.readLine());
    int arr[] = new int[n];
    System.out.println("Enter the "+n+" elements in the array:");
    for(int i=0;i<n;i++)
    {
      arr[i] = Integer.parseInt(in.readLine());
    }
    System.out.println("Array after sorting: ");
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n-i-1;j++)
      {
        if(arr[j]>arr[j+1])
        {
          temp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = temp;
        }
      }
    }
    for(int i=0;i<n;i++)
    {
      System.out.print(arr[i]+"\t");
    }
  }
}
