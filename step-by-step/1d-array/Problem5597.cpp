// 백준 5597번 1차원 배열-과제 안 내신 분..?

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<bool> b(30, false);
	int s;

	for (int i = 0; i < 28; i++) {
		cin >> s;
		b[s - 1] = true;

	} // 과제 낸 학생 28명 입력

	int s1 = 0, s2 = 0;

	for (int i = 0; i < 30; i++) { // b 인덱스
		if (!b[i]) {
			if (s1 == 0) {
				s1 = i + 1;
			}
			else {
				s2 = i + 1;
				break;
			}
		}
		
	}

	if (s1 < s2) {
		cout << s1 << "\n" << s2;
	}
	else {
		cout << s2 << "\n" << s1;
	}

	
	return 0;
}
