// 백준 2745번 일반 수학 1-진법 변환

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main() {
	string N; // 숫자N
	int B; // B진법
	cin >> N >> B;

	int result = 0;
	int size = N.size();

	for (int i = 0; i < size; i++) {
		int digit;

		if ('0' <= N[i] && N[i] <= '9') {
			digit = N[i] - '0';
		}
		else {
			digit = N[i] - 'A' + 10;
		}

		result += digit * pow(B, size - 1 - i);
	}

	cout << result << endl;
	
}
