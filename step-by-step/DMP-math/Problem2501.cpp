// 백준 2501번 약수, 배수와 소수-약수 구하기

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	vector<int> v;

	for (int i = 1; i <= N; i++) {
		if (N % i == 0) {
			v.push_back(i);
		}
	}

	if (v.size() < K) {
		cout << "0" << endl;
	}
	else {
		cout << v[K - 1] << endl;
	}
	return 0;
}
