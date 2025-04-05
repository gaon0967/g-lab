// 백준 2581번 약수, 배수와 소수-소수

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int M, N;
	cin >> M;
	cin >> N;

	vector<int> prime;

	
	int count = 0;
	for (int i = M; i <= N; i++) {
		bool isPrime = true;
		if (i < 2) continue;

		for (int j = 2; j*j <= i; j++) {
			if (i % j == 0) {
				isPrime = false;
				break;
			}
			
		}
		if (isPrime) {
			count += i;
			prime.push_back(i);
		}
	}
	if (!prime.empty()) {
		cout << count << endl << prime[0];
	}
	else {
		cout << "-1";
	}
	
	return 0;
}
