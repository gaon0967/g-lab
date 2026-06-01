// 백준 9086번 문자열-문자열

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin >> T; // 테스트케이스

	vector<string> c(T);
	for (int i = 0; i < T; i++) {
		cin >> c[i]; // 문자열 입력
	}
	for (int i = 0; i < T; i++) {
		cout << c[i][0] << c[i].back() << endl;
	}
	return 0;
}
