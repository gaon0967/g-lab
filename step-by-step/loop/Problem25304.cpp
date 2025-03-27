// 백준 25304번 반복문-영수증

#include <iostream>
using namespace std;

int main() {
	int X, N, a, b;
	int sum=0;
	cin >> X;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> a >> b;
		sum += a * b;
	}
	
	if (sum == X) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	
	return 0;
}
