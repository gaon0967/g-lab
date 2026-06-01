// 백준 2675번 문자열-문자열 반복

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T, R;
	string S;
	cin >> T; // 테스트케이스 개수

	for (int i = 0; i < T; i++) {
		cin >> R >> S;

		for (int n = 0; n < S.size(); n++) {
			for (int j = 0; j < R; j++) {
				cout << S[n];
			}
		}
		cout << endl;
	} 

	
	return 0;
}
