package golang

import (
	"reflect"
	"testing"
)

func Test_bubbleSort(t *testing.T) {
	type args struct {
		array []int
	}
	tests := []struct {
		name string
		args args
		want []int
	}{
		{
			name: "Simple test case",
			args: args{array: []int{1, 2, 1, 4, 3}},
			want: []int{1, 1, 2, 3, 4},
		},
		{
			name: "Passing an empty array",
			args: args{array: []int{}},
			want: []int{},
		},
	}
	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			if got := bubbleSort(tt.args.array); !reflect.DeepEqual(got, tt.want) {
				t.Errorf("bubbleSort() = %v, want %v", got, tt.want)
			}
		})
	}
}
