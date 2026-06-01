// 백준 10798번 2차원 배열-세로읽기

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<string> lines(5);

	for (int i = 0; i < 5; i++) {
		cin >> lines[i];
	}

	

	for (int j = 0; j < 15; j++) {
		for (int i = 0; i < 5; i++) {
			if (j < lines[i].size()) {
				cout << lines[i][j];
			}
		}
	}
	return 0;
}
