// 백준 2292번 일반 수학 1-벌집

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
