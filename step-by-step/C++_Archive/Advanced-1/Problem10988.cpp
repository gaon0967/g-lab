// 백준 10988번 심화1-팰린드롬인지 확인하기

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;

	bool b = true;
	for (int i = 0; i < s.size()/2; i++) {
		if (s[i] != s[s.size() - 1 - i]) {
			b = false;
			break;
		}
	}

	if (b) {
		cout << "1";
	}
	else {
		cout << "0";
	}
	return 0;
}
