// 백준 2563번 2차원 배열-색종이

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<vector<bool>> paper(100, vector<bool>(100, false));
	// 100*100의 배열을 false로 초기화

	int color;
	cin >> color; // 색종이 개수

	vector<int> x(color), y(color);
	for (int i = 0; i < color; i++) {
		cin >> x[i] >> y[i];
	} // 좌표 저장

	int cnt = 0;
	
	for (int k = 0; k < color; k++) {
		for (int i = x[k]; i < x[k] + 10; i++) {
			for (int j = y[k]; j < y[k] + 10; j++) {
				paper[i][j] = true;
			}
		}
	}

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (paper[i][j] == true) {
				cnt++;
			}
		}
	}

	cout << cnt << endl;
}
