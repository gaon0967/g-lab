// 백준 2444번 심화1-별찍기(7)

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) { // 세로
		for (int j = 0; j < N - i; j++) { // 공백
			cout << " ";
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			cout << "*";
		}
		cout << endl;
	}

	for (int i = N - 1; i >= 1; i--) {
		for (int j = 0; j < N - i; j++) {
			cout << " ";
		}
		for (int k = 0; k < 2 * i - 1; k++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
