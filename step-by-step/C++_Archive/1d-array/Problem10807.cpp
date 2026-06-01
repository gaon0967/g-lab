// 백준 10807번 1차원 배열-개수 세기

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> arr(N);

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		arr[i] = num;
	}

	int v;
	cin >> v;

	int count=0;

	for (int i = 0; i < N; i++) {
		if (arr[i] == v) {
			count++;
		}
	}
	cout << count;

	return 0;
}
