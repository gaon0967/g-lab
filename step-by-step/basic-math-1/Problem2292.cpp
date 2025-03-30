// 백준 2903번 일반 수학 1-중앙 이동 알고리즘

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N;
	cin >> N;
	
	int layer = 1;
	int num = 1;

	while (num < N) {
		num += 6 * layer;
		layer++;
	}

	cout << layer << endl;
	return 0;
}
