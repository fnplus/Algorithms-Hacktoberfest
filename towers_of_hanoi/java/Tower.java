import java.util.*;
class Tower
{
    void tower_Of_Hanoi(int n, char first, char second, char third)
    {
        if (n==1)
        {
           System.out.println("Disk 1: from rod "+first+" to rod "+second);
           return;
        }
        tower_Of_Hanoi(n-1, first, third, second);
       System.out.println("Disk "+n+": from rod "+first+" to rod "+second);
        tower_Of_Hanoi(n-1, third, second, first);
    }
    void main()
    {
        int n=3;
        tower_Of_Hanoi(n, 'A', 'B', 'C');
    }
}
