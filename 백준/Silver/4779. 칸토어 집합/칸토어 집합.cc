#include <iostream>
#include <cmath>
using namespace std;

void cantor(char* A, int start, int len){
    if (len == 1) return;

    int third = len / 3;

    for (int i = start + third; i < start + 2 * third; ++i){
        A[i] = ' ';
    }

    cantor(A, start, third);
    cantor(A, start + 2 * third, third);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

	int N;

    while (cin >> N){
        int len = pow(3,N);
        char* res = new char[len];

        for (int i = 0; i < len; i++) {
                res[i] = '-';
        }

        cantor(res, 0, len);

        for (int i = 0; i < len; i++){
            cout << res[i];
        }
        cout << "\n";
    }
}