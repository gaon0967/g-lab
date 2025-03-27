// 백준 3052번 1차원 배열-나머지

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int>num(10);
	vector<int> remainder(10);
	int uniqueCount = 0;
	
	for (int i = 0; i < 10; i++) {
		cin >> num[i];
		remainder[i] = num[i] % 42;
	}

	for (int i = 0; i < 10; i++) {
		bool isUnique = true;
		for (int j=0; j<i; j++) {
			if (remainder[i] == remainder[j]) {
				isUnique = false;
				break;
			}
		}
		if (isUnique) {
			uniqueCount++;
		}
	}

	cout << uniqueCount << endl;
	
	return 0;
}
