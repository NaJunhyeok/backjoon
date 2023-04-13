#include <iostream>
using namespace std;

int main() {
	int n;
	int score[n];
	int max = 0;
	double avg= 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> score[i];
		if (score[i] > max)
			max = score[i];
		avg += score[i];
	}
	avg = (avg / max * 100) / n;

	cout << fixed;
	cout.precision(6);
	cout << avg << endl;
}