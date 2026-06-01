// 백준 11005 일반 수학 1-진법 변환 2

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int N, B; // 10진수, 진법
	cin >> N >> B;

	vector<int> rem; // 나머지
	
	while (N != 0) { // 몫이 0일 때까지 반복
		rem.push_back(N % B);
		N /= B;
	}

	for (int i = 0; i < rem.size(); i++) {
		if (rem[i] >= 10) {
			rem[i] = rem[i] - 10 + 'A';
		}
		else {
			rem[i] = rem[i] + '0';
		}
	}

	for (int i = rem.size() - 1; i >= 0; i--) {
		cout << char(rem[i]);
	}
}
