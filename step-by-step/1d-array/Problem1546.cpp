// 백준 1546번 1차원 배열-평균

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N; // 시험 본 과목 개수
	cin >> N;

	vector<int> score(N); // 점수 저장
	vector<float> lie(N);
	float sum = 0; // 총합
	float M = 0;

	for (int i = 0; i < N; i++) {
		cin >> score[i];
		if (score[i] > M) {
			M = score[i];
		} // 점수 최댓값
	}

	for (int i = 0; i < N; i++) {
		lie[i] = (float)score[i] / M * 100;
		sum += lie[i];
	}

	float average = sum / N;
	cout << average << endl;

	return 0;
}
