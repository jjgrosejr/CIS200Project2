#include <iostream>
using namespace std;
#include <string>
#include <fstream>
#include <vector>
fstream sort;
struct Job {
	char type;
	int arrivalTime;
	int processingTime;
	};
int minLocation(Job job[6065], int first = 0, int last = 6065) {
	int minIndex = first;
	for (int i = first + 1; i <= last; i++) {
		if (job[i].arrivalTime < job[minIndex].arrivalTime)
			minIndex = i;
		if (job[i].arrivalTime == job[minIndex].arrivalTime && job[i].type > job[minIndex].type)
			minIndex = i;
	}
	return minIndex;
}
void swap(Job job[6065], int first, int second) {
	Job temp;
	temp = job[first];
	job[first] = job[second];
	job[second] = temp;

}
void selectionSort(Job job[6065]) {
	int minIndex;
	for (int i = 0; i < 6065; i++) {
		minIndex = minLocation(job, i, 6065 - 1);
		swap(job, i, minIndex);
	}
}
int main() {
	fstream output;
	fstream sort;
	sort.open("selectionSort.txt");
	output.open("data.txt");
	Job job[6065];
	for (int i = 0; i < 6065; i++) {
		output >> job[i].type >> job[i].arrivalTime >> job[i].processingTime;
	}
	selectionSort(job);
	for (int i = 0; i < 6065; i++)
		sort << job[i].type << "\t" << job[i].arrivalTime << "\t" << job[i].processingTime << endl;
	return 0;
}