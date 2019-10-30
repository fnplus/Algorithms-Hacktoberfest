def countWays(n, k) : 

	total = k 
	mod = 1000000007
	same, diff = 0, k 

	for i in range(2, n + 1) : 
		
		same = diff 

		diff = total * (k - 1) 
		diff = diff % mod 

		total = (same + diff) % mod 
	
	return total 

n, k = 10, 2
print(countWays(n, k)) 
