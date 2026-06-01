// 백준 3003번 심화1-킹,퀸,룩,비숍,나이트,폰

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<int> num(6);
	vector<int> correct = { 1,1,2,2,2,8 };
	for (int i = 0; i < 6; i++) {
		cin >> num[i];
		if (num[i] != correct[i]) {
			num[i] = correct[i] - num[i];
		}
		else {
			num[i] = 0;
		}
	}

	for (int i = 0; i < 6; i++) {
		cout << num[i] << " ";
	}
	return 0;
}
