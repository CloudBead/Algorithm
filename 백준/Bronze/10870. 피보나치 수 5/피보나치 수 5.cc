#include <iostream>
using namespace std;

int p(int a){
	if (a == 0) return 0;
	if (a == 1) return 1;
	else return p(a-2) + p(a-1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

	int n;

	cin >> n;

	cout << p(n);
}