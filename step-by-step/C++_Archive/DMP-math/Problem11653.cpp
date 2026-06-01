// 백준 11653번 약수, 배수와 소수-소인수분해

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;

	if (N == 1) return 0;
	
	for (int i = 2; i*i <= N; i++) {
		while (N % i == 0) {
			cout << i << endl;
			N /= i;
		}
	}

	if (N > 1) {
		cout << N << endl;
	}
	return 0;
}
