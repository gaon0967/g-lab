// 백준 10818번 1차원 배열-최소, 최대

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, min=1000001, max=-1000001;
	cin >> N;
	vector<int> a(N);
	for (int i = 0; i < N; i++) {
		cin >> a[i];
		
		if (a[i] < min) {
			min = a[i];
		}
		if (a[i] > max) {
			max = a[i];
		}
	}

	cout << min << " " << max << endl;

	return 0;
}
