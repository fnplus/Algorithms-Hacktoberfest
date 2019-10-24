using System;
 
namespace forgetCode
{
    class Program
    {
        public static void Main()
        {
            int[] a = new int[100];
            Console.WriteLine("Enter number of elements you want to hold in the array ?");
            string s = Console.ReadLine();
            int x = Int32.Parse(s);
            Console.WriteLine("-------------------------");
            Console.WriteLine("\n Enter array elements \n");
            for (int i = 0; i < x; i++)
            {
                string s1 = Console.ReadLine();
                a[i] = Int32.Parse(s1);
            }
            Console.WriteLine("-------------------------");
            Console.WriteLine("Enter Search element\n");
            string s3 = Console.ReadLine();
            int x2 = Int32.Parse(s3);
            for (int i = 0; i < x; i++)
            {
                if (a[i] == x2)
                {
                    Console.WriteLine("-------------------------");
                    Console.WriteLine("Search successful");
                    Console.WriteLine("Element {0} found at location {1}\n", x2, i + 1);
                    return;
                }
            }
            Console.WriteLine("Search unsuccessful");
        }
    }
 
}
