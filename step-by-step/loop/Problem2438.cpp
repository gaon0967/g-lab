/ 백준 2438번 반복문-별찍기(1)

#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) { // 세로
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}
