// 백준 1978번 약수, 배수와 소수-소수 찾기

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, num;
	cin >> n;

	vector<int> v;
	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}
	
	int count = 0;
	for (int i = 0; i < v.size(); i++) { // 배열 전체 탐색
		if (v[i] < 2) continue;

		bool isPrime = true;
		for (int j = 2; j * j< v[i]; j++) { // 약수 (1~(v[i]-1))
			if (v[i] % j == 0) {
				isPrime = false;
				break;
			}
			;
		}
		if (isPrime) count++;
	}

	cout << count << endl;
	
	return 0;
}
