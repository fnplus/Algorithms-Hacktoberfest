// There are N stones, numbered 1,2,…,N. For each i (1≤i≤N), the height of Stone i is
// h[i]
// There is a frog who is initially on Stone 1. He will repeat the following action some number of times to reach Stone N:
// If the frog is currently on Stone i, jump to Stone i+1 or Stone i+2. Here, a cost of  
// ∣h(i) −h(j) ∣ is incurred, where j is the stone to land on.
// Find the minimum possible total cost incurred before the frog reaches Stone N.

#include<bits/stdc++.h>
using namespace std;

int jump(int n , vector<int>& height , vector<int>& dp)
{
  if (n <= 0)
    return 0;
  if (dp[n] != -1)
    return dp[n];

  int op1 = abs(height[n] - height[n - 1]) + jump(n - 1 , height , dp);//jump form i-1 stone ;
  int op2 = INT_MAX;
  if (n - 2 >= 0)
    op2 = abs(height[n] - height[n - 2]) + jump(n - 2 , height , dp);//jump form i-2 stone;
  return dp[n] = min(op1 , op2);
}

int main()
{
  int n;
  cin >> n ;
  vector<int> height(n);
  for (int i = 0 ; i < n ; i++) {
    cin >> height[i];
  }
  vector<int>dp(n , -1);
  int ans = jump(n - 1 , height , dp);
  cout << ans << endl;
  return 0;
}