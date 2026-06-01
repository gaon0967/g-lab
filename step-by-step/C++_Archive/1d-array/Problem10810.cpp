// 백준 10810번 1차원 배열-공 넣기

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M; // 바구니, 공 번호

	vector<int> b(N, 0); // 바구니 배열

	int i, j, k; // i~j 범위 / k는 공 번호
	for (int n = 0; n < M; n++) {
		cin >> i >> j >> k;

		for (int t = i-1; t < j; t++) {
			b[t] = k;
		} // i부터 j까지 바구니에 k 넣기
	}

	for (int n = 0; n < N; n++) {
		cout << b[n] << " ";
	}

	return 0;
}
