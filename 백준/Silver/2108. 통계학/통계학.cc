#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

	int n, tmp, max = 0, sum = 0;
	bool isDone = false;
	map<int, int> m;
	vector<int> modes;

	cin >> n;

	for (int i = 0; i < n; ++i){
		cin >> tmp;
		sum += tmp;
		if (m.find(tmp) != m.end()) m[tmp]++;
		else m.insert({tmp,1});
	}

	cout << (int)round((double)sum / n) << "\n";

	tmp = 0;
	
	for (auto [k, v] : m){
		tmp += v;
		if (tmp > n/2 && !isDone) {
			cout << k << '\n';
			isDone = true;
		}
		if (v > max) max = v;
	}

	for (auto [k, v] : m){
		if (v == max) modes.push_back(k);
	}

	if (modes.size() >= 2) cout << modes[1] << "\n";
	else cout << modes[0] << "\n";

	cout << (--m.end())->first - m.begin()->first;
}