// 백준 1157번 심화1-단어 공부

#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string s;
	cin >> s;
	
	int freq[26] = { 0 };

	for (int i = 0; i < s.size(); i++) {
		char c = tolower(s[i]);
		freq[c - 'a']++;
	}

	int maxCount = 0;
	char mostFrequent = '?';
	bool isDuplicate = false;

	for (int i = 0; i < 26; i++) {
		if (freq[i] > maxCount) {
			maxCount = freq[i];
			mostFrequent = 'A' + i;
			isDuplicate = false;
		}
		else if (freq[i] == maxCount && maxCount>0) {
			isDuplicate = true;
		}

	}

	if (isDuplicate) {
		cout << '?' << endl;
	}
	else {
		cout << mostFrequent << endl;
	}
	return 0;
}
