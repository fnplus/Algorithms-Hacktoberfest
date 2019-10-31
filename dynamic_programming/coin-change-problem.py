'''
Recurrence Relation : solution[i][j] = solution[i-1][j] + solution[i][j-Sv]
where Sv is the coin of value v being considered 
'''

def getWays(n, c):
    cache=[1]+[0]*(n)
    for coin in c:
        for i in range(coin,n+1):
            cache[i]+=cache[i-coin]
        #Enable below line to see how the cache changes
        #print(cache) 
    return(cache[n])


coin_denominations=[2, 5, 3, 6]
total=10

print("No of Ways to give change for "+str(total)+" units:",getWays(total,coin_denominations))