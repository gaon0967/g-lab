// 백준 9063번 기하-대지
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<vector<int>> v(N, vector<int>(2));

	for (int i = 0; i < N; i++) {
		cin >> v[i][0] >> v[i][1];
	}

	int max_X = -10000, min_X = 10000;
	int max_Y = -10000, min_Y = 10000;
	
	for (int i = 0; i < N; i++) {
		if (max_X < v[i][0]) {
			max_X = v[i][0];
		}
		if (min_X > v[i][0]) {
			min_X = v[i][0];
		}

		if (max_Y < v[i][1]) {
			max_Y = v[i][1];
		}
		if (min_Y > v[i][1]) {
			min_Y = v[i][1];
		}

	}
	int area = (max_X - min_X) * (max_Y - min_Y);
	cout << area << endl;

	return 0;
}
