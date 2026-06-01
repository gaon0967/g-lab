// 백준 5086번 약수,배수와 소수-배수와 약수

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v1, v2; // 값 저장
	int num1, num2; // 추가할 값

	while (true) {
		cin >> num1 >> num2;
		if (num1 == 0 && num2 == 0) break;
		v1.push_back(num1);
		v2.push_back(num2);
	} // 벡터에 숫자 저장

	for (int i = 0; i < v1.size(); i++) {
		if (v1[i] % v2[i] == 0) {
			cout << "multiple" << endl;
		}
		else if (v2[i] % v1[i] == 0) {
			cout << "factor" << endl;
		}
		else {
			cout << "neither" << endl;
		}
	}

	return 0;
}
