def LIS(arr):
	dp=[1]*len(arr)

	for i in range(1,len(arr)):
		for j in range(0,i):
			if(arr[i]>arr[j] and dp[i]<dp[j]+1):
				dp[i]=dp[j]+1
		#print(dp)
	return(max(dp))

arr=[3,4,-1,0,6,2,3]
print(LIS(arr))