// 백준 2720번 일반 수학 1-세탁소 사장 동혁

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int T; // 테스트케이스
	cin >> T;

	vector<int> coins = { 25,10,5,1 };

	vector<vector<int>> results;

	while (T--) {
		int C;
		cin >> C;

		vector<int> count(4, 0);

		for (int i = 0; i < coins.size(); i++) {
			count[i] = C / coins[i];
			C %= coins[i];
		}

		results.push_back(count);
	}

	for (int i = 0; i < results.size(); i++) {
		for (int j = 0; j < 4; j++) {
			cout << results[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
