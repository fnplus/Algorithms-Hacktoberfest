def fib(n):
    sequence = [1, 1]
    while (len(sequence) < n):
        i = len(sequence)
        sequence.append(
            sequence[i-1] +
            sequence[i-2]
        )

    return sequence[:n]

# fib(2) -> [1, 1]
# fib(5) -> [1, 1, 2, 3, 5]
# fib(10) -> [1, 1, 2, 3, 5, 8, 13, 21, 34, 55]