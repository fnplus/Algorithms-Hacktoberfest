# Python program to find n'th Ugly number 

# Function to get the nth ugly number 
def getNthUglyNo(n): 

	ugly = [0] * n # To store ugly numbers 

	# 1 is the first ugly number 
	ugly[0] = 1

	# i2, i3, i5 will indicate indices for 2,3,5 respectively 
	i2 = i3 =i5 = 0

	# set initial multiple value 
	next_multiple_of_2 = 2
	next_multiple_of_3 = 3
	next_multiple_of_5 = 5

	# start loop to find value from ugly[1] to ugly[n] 
	for l in range(1, n): 

		# choose the min value of all available multiples 
		ugly[l] = min(next_multiple_of_2, next_multiple_of_3, next_multiple_of_5) 

		# increment the value of index accordingly 
		if ugly[l] == next_multiple_of_2: 
			i2 += 1
			next_multiple_of_2 = ugly[i2] * 2

		if ugly[l] == next_multiple_of_3: 
			i3 += 1
			next_multiple_of_3 = ugly[i3] * 3

		if ugly[l] == next_multiple_of_5: 
			i5 += 1
			next_multiple_of_5 = ugly[i5] * 5

	# return ugly[n] value 
	return ugly[-1] 

def main(): 

	n = 150

	print getNthUglyNo(n) 


if __name__ == '__main__': 
	main() 



