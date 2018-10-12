package golang

func fib(n int) []int {
	seq := []int{1, 1}
	for len(seq) < n {
		i := len(seq)
		seq = append(seq, seq[i-1]+seq[i-2])
	}
	return seq[:n]
}
