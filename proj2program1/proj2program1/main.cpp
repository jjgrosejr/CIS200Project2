//#include <iostream>
//#include <fstream>
//using namespace std;
//
//struct Job {
//	char type;
//	int arrivalTime;
//	int processingTime;
//};
//
//int main() {
//	fstream output;
//	output.open("data.txt");
//	Job job[6065];
//	int time = 0;
//	int count = 0;
//	for (int i = 0; i < 2400; i++) {
//		job[i].type = 'A';
//		job[i].arrivalTime = (4 + (rand() % 3)) + time;
//		job[i].processingTime = (1 + (rand() % 5));
//		output << job[i].type << "\t" << job[i].arrivalTime << "\t" << job[i].processingTime << endl;
//		time = job[i].arrivalTime;
//		count++;
//	}
//	cout << count << endl;
//	time = 0;
//	count = 0;
//	for (int i = 2400; i < 4050; i++) {
//		job[i].type = 'B';
//		job[i].arrivalTime = (6 + (rand() % 3)) + time;
//		job[i].processingTime = (2 + (rand() % 7));
//		output << job[i].type << "\t" << job[i].arrivalTime << "\t" << job[i].processingTime << endl;
//		time = job[i].arrivalTime;
//		count++;
//	}
//	cout << count << endl;
//	time = 0;
//	count = 0;
//	for (int i = 4050; i < 5150; i++) {
//		job[i].type = 'C';
//		job[i].arrivalTime = (4 + (rand() % 15)) + time;
//		job[i].processingTime = (6 + (rand() % 7));
//		output << job[i].type << "\t" << job[i].arrivalTime << "\t" << job[i].processingTime << endl;
//		time = job[i].arrivalTime;
//		count++;
//	}
//	cout << count << endl;
//	time = 0;
//	count = 0;
//	for (int i = 5150; i < 6065; i++) {
//		job[i].type = 'D';
//		job[i].arrivalTime = (8 + (rand() % 11)) + time;
//		job[i].processingTime = (5 + (rand() % 15));
//		output << job[i].type << "\t" << job[i].arrivalTime << "\t" << job[i].processingTime << endl;
//		time = job[i].arrivalTime;
//		count++;
//	}
//	cout << count << endl;
//	time = 0;
//	count = 0;
//	return 0;
//}