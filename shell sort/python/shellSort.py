# Prg of SHELL SORT in Python


def shellSort(arr):

	# Start with a big gap, then reduce the gap
	n = len(arr)
	gap = n//2

	while gap > 0:

		for i in range(gap, n):

			# add a[i] to the elements that have been gap sorted
			# save a[i] in temp and make a hole at position i
			temp = arr[i]

			# shift earlier gap-sorted elements up until the correct
			# location for a[i] is found
			j = i
			while j >= gap and arr[j-gap] > temp:
				arr[j] = arr[j-gap]
				j -= gap

			# put temp (the original a[i]) in its correct location
			arr[j] = temp
		gap //= 2


# MAIN
arr = [5, 4, -3, 2, 1]
n = len(arr)

shellSort(arr)

print("\nArray after sorting: ")
for i in range(n):
	print(arr[i], end=" ")