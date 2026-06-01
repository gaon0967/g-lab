// 백준 10813번 1차원 배열-공 바꾸기

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M; // 바구니 번호, 공 번호

	vector<int> b(N);

	for (int n = 0; n < N; n++) {
		b[n] = n + 1;
	} // 초기화

	for (int n = 0; n < M; n++) { // M번 반복
		int i, j, tmp;
		cin >> i >> j; // 교환할 바구니 입력
		tmp = b[i-1];
		b[i-1] = b[j-1];
		b[j-1] = tmp;
	}

	for (int n = 0; n < N; n++) {
		cout << b[n] << " ";
	} // 출력

	return 0;
}
