# Prg of BUCKET SORT in Python


def insertionSort(b):
	for i in range(1, len(b)):
		up = b[i]
		j = i - 1
		while j >= 0 and b[j] > up:
			b[j + 1] = b[j]
			j -= 1
		b[j + 1] = up
	return b


def bucketSort(x):
	arr = []
	slot_num = 10  # 10 here refers 10 slots; each slot's size being 0.1
	for i in range(slot_num):
		arr.append([])

	# Putting array elements in different buckets
	for j in x:
		index_b = int(slot_num * j)
		arr[index_b].append(j)

	# Sorting individual buckets
	for i in range(slot_num):
		arr[i] = insertionSort(arr[i])

	# Concatenating the result
	k = 0
	for i in range(slot_num):
		for j in range(len(arr[i])):
			x[k] = arr[i][j]
			k += 1
	return x


# MAIN
x = [0.5, 0.4, 0.3, 0.2, 0.1]
print("Sorted Array is :")
print(bucketSort(x))