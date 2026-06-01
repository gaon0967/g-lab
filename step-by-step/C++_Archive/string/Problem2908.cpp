// 백준 2908번 문자열-상수

#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // max() min() swap()
using namespace std;

int main() {
	string A, B;
	cin >> A >> B;

	int tmp1;
	tmp1 = A[0];
	A[0] = A[2];
	A[2] = tmp1;

	int tmp2;
	tmp2 = B[0];
	B[0] = B[2];
	B[2] = tmp2;

	int numA = stoi(A);
	int numB = stoi(B);
	
	if (numA > numB) cout << numA;
	else cout << numB;

	return 0;
}
