// 백준 2739번 반복문-구구단

#include <iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    for (int i = 1; i <= 9; i++) {
        cout << num << " * " << i << " = " << num * i << endl;
    }
    return 0;
}
