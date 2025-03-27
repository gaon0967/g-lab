// 백준 10952번 반복문-A+B(5)


#include <iostream>
#include <vector>
using namespace std;

int main() {
	int A, B;
	vector <int> r;

	while (true) {
		cin >> A >> B;
		if (A == 0 && B == 0) break;
		r.push_back(A + B);
	}

	for (int i = 0; i < r.size(); i++) {
		cout << r[i] << "\n";
	}
	
	return 0;
}
