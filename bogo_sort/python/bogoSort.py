# BOGO SORT in Python

import random

def bogoSort(a):
	n = len(a)
	while (is_sorted(a) == False):
		shuffle(a)


def is_sorted(a):
	n = len(a)
	for i in range(0, n-1):
		if (a[i] > a[i+1]):
			return False
	return True


def shuffle(a):
	n = len(a)
	for i in range(0, n):
		r = random.randint(0, n-1)
		a[i], a[r] = a[r], a[i]


# MAIN
a = [5, 4, -3, 2, 1]
bogoSort(a)
print("Sorted array :")
for i in range(len(a)):
	print("%d" % a[i], end=" ")
