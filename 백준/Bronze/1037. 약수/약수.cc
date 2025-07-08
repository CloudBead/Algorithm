#include <iostream>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

	int n, tmp;
	set<int> s;

	cin >> n;

	if (n == 1){
		cin >> tmp;
		cout << tmp * tmp;
	}
	else {
		for (int i = 0; i < n; ++i){
			cin >> tmp;
			s.insert(tmp);
		}

		cout << *s.begin() * *(--s.end());
	}

}