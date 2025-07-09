#include <iostream>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

	int n, res;
	string tmp;
	set<string> cnt;

	cin >> n;

	for (int i = 0; i < n; ++i){
		cin >> tmp;
		if (tmp == "ENTER"){
			res += cnt.size();
			cnt = {};
		}
		else cnt.insert(tmp);
	}

	cout << res + cnt.size();
}