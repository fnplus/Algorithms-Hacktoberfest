def knapSack(W , wt , val , n): 

	if n == 0 or W == 0 : 
		return 0

	if (wt[n-1] > W): 
		return knapSack(W , wt , val , n-1) 

	else: 
		return max(val[n-1] + knapSack(W-wt[n-1] , wt , val , n-1), 
				knapSack(W , wt , val , n-1)) 

val = [60, 100, 120] 
wt = [10, 20, 30] 
W = 50
n = len(val) 
print knapSack(W , wt , val , n) 
