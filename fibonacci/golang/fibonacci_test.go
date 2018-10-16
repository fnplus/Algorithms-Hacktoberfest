package golang

import (
	"reflect"
	"testing"
)

func Test_fib(t *testing.T) {
	type args struct {
		n int
	}
	tests := []struct {
		name string
		args args
		want []int
	}{
		{
			name: "Passing 0 as the args",
			args: args{n: 0},
			want: []int{},
		},
		{
			name: "Passign legit number",
			args: args{n: 2},
			want: []int{1, 1},
		},
		{
			name: "Passign legit number",
			args: args{n: 5},
			want: []int{1, 1, 2, 3, 5},
		},
	}
	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			if got := fib(tt.args.n); !reflect.DeepEqual(got, tt.want) {
				t.Errorf("fib() = %v, want %v", got, tt.want)
			}
		})
	}
}
