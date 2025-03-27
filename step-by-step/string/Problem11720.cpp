// 백준 11720번 문자열-숫자의 합

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;

	string s;
	cin >> s;
	
	int sum = 0;
	for (char num : s) {
		sum += num - '0';
	}

	cout << sum << endl;

	return 0;
}
