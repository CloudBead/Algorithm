#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<bool> isPrime(246913, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i < 246913; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j < 246913; j += i) {
                isPrime[j] = false;
            }
        }
    }

    int n;
    while (true) {
        cin >> n;
        if (n == 0) break;

        int cnt = 0;
        for (int i = n + 1; i <= 2 * n; ++i) {
            if (isPrime[i]) cnt++;
        }

        cout << cnt << '\n';
    }
}
