#include <iostream>
using namespace std;

int f(int a) {
	if (a == 0) return 1;
	return a * f(a - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

	int n, k;
	cin >> n >> k;
	cout << f(n)/(f(n-k)*f(k));
}