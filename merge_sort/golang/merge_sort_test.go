package golang

import (
	"reflect"
	"testing"
)

func Test_mergeSort(t *testing.T) {
	type args struct {
		array []int
	}
	tests := []struct {
		name string
		args args
		want []int
	}{
		{
			name: "Simple test case 1",
			args: args{array: []int{1, 2, 1, 4, 3}},
			want: []int{1, 1, 2, 3, 4},
		},
		{
			name: "Simple test case 2",
			args: args{array: []int{90, 30, 5, 3, 15, 1, 2}},
			want: []int{1, 2, 3, 5, 15, 30, 90},
		},
		{
			name: "Passing an empty array",
			args: args{array: []int{}},
			want: []int{},
		},
	}
	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			if got := mergeSort(tt.args.array); !reflect.DeepEqual(got, tt.want) {
				t.Errorf("mergeSort() = %v, want %v", got, tt.want)
			}
		})
	}
}
