// 백준 2566번 2차원 배열-최댓값

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<vector<int>> A(9, vector<int>(9));
	// 행, 렬
	int max = 0, row = 0, col = 0;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> A[i][j];
		}
	} // 행렬 입력

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (max <= A[i][j]) {
				max = A[i][j];
				row = i;
				col = j;
			}
		}
	}

	cout << max << endl;
	cout << row + 1 << " " << col + 1 << endl;

	return 0;
}
