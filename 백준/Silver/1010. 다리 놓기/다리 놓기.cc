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

	int n, m, t;

	cin >> t;

	for (int i = 0; i < t; ++i){
		int tmp = 1;
		long res = 1;

		cin >> n >> m;

		for (int j = m; j > m-n; --j){
			res *= j;
			res /= tmp++;
		}

		cout << res << "\n";
	}
}