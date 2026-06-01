// 백준 2738번 2차원 배열-행렬 덧셈

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M; // 행렬의 크기

	vector<vector<int>> A(N, vector<int>(M));
	vector<vector<int>> B(N, vector<int>(M));
	vector<vector<int>> sum(N, vector<int>(M));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> A[i][j]; // A입력
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> B[i][j]; // B입력
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			sum[i][j] = A[i][j] + B[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << sum[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
