// 백준 2501번 약수, 배수와 소수-약수 구하기

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
	
	vector<int> v1;
	
	while (true) {
		int n;
		cin >> n;
		if (n == -1) break;
		v1.push_back(n);
	}

	for (int i = 0; i < v1.size(); i++) {
		int num = v1[i];
		int sum = 0;
		vector<int> v2;

		for (int j = 1; j < num; j++) {
			if (num % j == 0) {
				sum += j;
				v2.push_back(j);
			}
		}

		if (sum == num) {
			cout << num << " = ";
			for (int k = 0; k < v2.size(); k++) {
				cout << v2[k];
				if (k < v2.size() - 1) cout << " + ";
			}
			cout << endl;
		}
		else {
			cout << num << " is NOT perfect." << endl;
		}
	}

	return 0;
}
