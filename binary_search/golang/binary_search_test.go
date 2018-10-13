package golang

import "testing"

func Test_binarySearch(t *testing.T) {
	type args struct {
		array []int
		n     int
	}
	tests := []struct {
		name string
		args args
		want bool
	}{
		{
			name: "Testing element found",
			args: args{array: []int{1, 2, 3}, n: 3},
			want: true,
		},
		{
			name: "Testing element not found",
			args: args{array: []int{1, 2, 3}, n: 4},
			want: false,
		},
		{
			name: "Testing empty array",
			args: args{array: []int{}, n: 3},
			want: false,
		},
	}
	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			if got := binarySearch(tt.args.array, tt.args.n); got != tt.want {
				t.Errorf("binarySearch() = %v, want %v", got, tt.want)
			}
		})
	}
}
