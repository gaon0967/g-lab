// 백준 15552번 반복문-빠른 A+B

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin >> T;

	vector<int> result(T);

	for (int i = 0; i < T; i++) { // 입력
		int A, B;
		cin >> A >> B;
		result[i] = A + B;
	}

	for (int i = 0; i < T; i++) {
		cout << result[i] << '\n';
	}

	return 0;
}
