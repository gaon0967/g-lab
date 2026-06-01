// 백준 1085번 기하-직사각형에서 탈출
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int min_dist = min(min(x, y), min(w - x, h - y));
	cout << min_dist << endl;
	return 0;
}
