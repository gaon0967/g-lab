// 백준 10811번 1차원 배열-바구니 뒤집기

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<int> arr(N);

	for (int n = 0; n < N; n++) {
		arr[n] = n + 1;
	} // 배열 초기화 (1,2,3,4,5)

	for (int n = 0; n < M; n++) {
		int i, j;
		cin >> i >> j;
		i--;
		j--; // 인덱스를 하나씩 줄여나감

		while (i < j) {
			swap(arr[i], arr[j]);
			i++;
			j--;
		}

	}

	for (int n = 0; n < N; n++) {
		cout << arr[n] << " ";
	}
	
	return 0;
}
