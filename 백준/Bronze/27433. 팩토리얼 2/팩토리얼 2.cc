#include <iostream>
using namespace std;

long f(int a){
	if (a == 0) return 1;
	else return a * f(a-1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

	int n;

	cin >> n;

	cout << f(n);
}