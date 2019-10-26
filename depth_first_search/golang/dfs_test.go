package dfs

import (
	"bytes"
	"strings"
	"testing"
)

func TestDFS(t *testing.T) {
	t2a := &tree{left: nil, value: 4, right: nil}
	t2b := &tree{left: nil, value: 5, right: nil}

	t1a := &tree{left: t2a, value: 2, right: t2b}
	t1b := &tree{left: nil, value: 3, right: nil}

	t0 := &tree{left: t1a, value: 1, right: t1b}

	/* Tree
				1
		2     3
	4  5
	*/

	var w bytes.Buffer
	traverse(t0, &w)

	actual := strings.TrimSpace(w.String())
	expected := "1  2  4  5  3"

	if actual != expected {
		t.Errorf("Expected %s but got %s", expected, actual)
	}
}