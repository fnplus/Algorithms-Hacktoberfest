# Prg of WAVE SORT in Python

def sortInWave(arr, n):

	# Sorting the array
	arr.sort()

	# Swapping adjacent elements
	for i in range(0, n-1, 2):
		arr[i], arr[i+1] = arr[i+1], arr[i]


# MAIN
arr = [10, 90, 49, 2, 23]
sortInWave(arr, len(arr))
for i in range(0, len(arr)):
	print(arr[i])
