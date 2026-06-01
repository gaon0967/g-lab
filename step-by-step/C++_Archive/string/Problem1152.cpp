// 백준 1152번 문자열-단어의 개수

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	string S;
	getline(cin, S);

	int cnt = 0;

	for (int i = 0; i < S.size(); i++) {
		if (S[i] == ' ') {
			if (i==0 || i==S.size()-1) {
				continue;
			}
			cnt++;
		}
	}

	if (!S.empty() && S != " ") cnt++;

	cout << cnt;
	return 0;
}
