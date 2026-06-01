// 백준 11021번 반복문-A+B(7)

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin >> T;

	vector<int> result(T);

	for (int i = 0; i < T; i++) {
		int A, B;
		cin >> A >> B;
		result[i] = A + B;
	}

	for (int i = 0; i < T; i++) {
		cout << "Case #" << i + 1 << ": " << result[i] << "\n";
	}

	return 0;
}
