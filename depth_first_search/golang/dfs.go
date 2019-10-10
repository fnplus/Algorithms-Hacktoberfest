package dfs

import (
	"fmt"
	"io"
)

type tree struct {
	left  *tree
	value int
	right *tree
}

func traverse(t *tree, w io.Writer) {
	if t == nil {
		return
	}

	fmt.Fprintf(w, " %d ", t.value)
	traverse(t.left, w)
	traverse(t.right, w)
}