/*
@param a represents first of fibonacci number
@param b represents second of fibonacci number
@param c represents third of fibonacci number
@param n represents which fibonacci number we would like to get
*/
int Fibo( int n ){
 int a = 0;
 int b = 1;
 int c = 1;
  for(int i =0 ; i< n; i++){
    a = b;
    b = c;
    c = a + b;
  }
  return c;
}
