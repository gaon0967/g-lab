// 백준 2562번 1차원 배열-최댓값

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> num(9);
	int max = num[0], index = 1;

	for (int i = 0; i < 9; i++) {
		cin >> num[i];

		if (max < num[i]) {
			max = num[i];
			index = i+1;
		}
	} 

	cout << max << "\n" << index;

	
	return 0;
}
