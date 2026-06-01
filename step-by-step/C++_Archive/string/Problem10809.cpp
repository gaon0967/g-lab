// 백준 10908번 문자열-알파벳 찾기

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> a(26, -1); 
	// 알파벳 배열, -1로 초기화

	string s;
	cin >> s; // 문자열 입력

	for (int i = 0; i < s.size(); i++) {
		int index = s[i] - 'a';

		if (a[index] == -1) {
			a[index] = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << a[i] << " ";
	}

	return 0;
}
