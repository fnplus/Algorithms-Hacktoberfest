 int gcd(int a, int b) {
   int c;
   while (b) {
      c = a % b;
      a = b;
      b = c;        
   }
   return abs(a);
 }
