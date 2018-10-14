// Counting sort based on: https://en.wikipedia.org/wiki/Counting_sort

#include <cstdio>
#include <map>
#include <vector>
#include <getopt.h>

using namespace std;

void instructions(int, char**);
vector<int> input_sequence();
void display_vector(const vector<int> &);
vector<int> counting_sort(const vector<int> &);

int main(int argc, char **argv)
{
	instructions(argc, argv);

	vector<int> unordered;
	unordered = input_sequence();
	display_vector(unordered);

	vector<int> ordered;
	ordered = counting_sort(unordered);
	display_vector(ordered);

	return 0;
}

vector<int> counting_sort(const vector<int> &unordered)
{

	map<int,int> count;
	unsigned int max_int = 0;

	// Calculate the histogram of key frequencies:
	for (vector<int>::const_iterator it = unordered.begin(); it != unordered.end(); it++) {
		if (max_int < (unsigned int) *it) {
			max_int = *it;
		}
		count[*it]++;
	}

	// Calculate the starting index for each key
	unsigned int total = 0, old_count = 0;
	for (unsigned int i = 0; i <= max_int; i++) {
		old_count = count[i];
		count[i] = total;
		total += old_count;
	}

	// Copy to output array, preserving order of inputs with equal keys:
	vector<int> ordered (total, 0);
	for (vector<int>::const_iterator it = unordered.begin(); it != unordered.end(); it++) {
		ordered[count[*it]] = *it;
		count[*it]++;
	}
	return ordered;
}

void display_vector(const vector<int> &v)
{
	for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++) {
		printf("%d ", *it);
	}
	printf("\n");
	fflush(stdin);

	return;
}

vector<int> input_sequence()
{
	vector<int> vector_input;

	int n = 0;
	scanf("%d", &n);
	while (n >= 0) {
		vector_input.push_back(n);
		scanf("%d", &n);
	}

	return vector_input;
}

void instructions(int argc, char **argv)
{
	int c = 0;
	static struct option long_options[] = {{"help", no_argument, 0, 'h'}};
	
	int option_index = 0;
	c = getopt_long (argc, argv, "h", long_options, &option_index);

	switch (c) {
		case 'h':
			printf("Counting Sort algorithm.\n");
			printf("Type a sequence of positive whole numbers.\n");
			printf("Finish the input with a negative number\n");
			printf("Example: 2 1 3 -1\n");
			fflush(stdin);
			break;

		default:
			break;
	}

	return;
}

