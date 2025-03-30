// 백준 2903번 일반 수학 1-중앙 이동 알고리즘

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N;
	cin >> N;

	int number = pow (pow(2, N) + 1,2);
	cout << number;
	return 0;
}
