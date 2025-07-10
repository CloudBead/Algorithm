#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

map<string, int> m;

bool incr(string a, string b){
	if (m[a] == m[b] && a.size() == b.size()) return a < b;
	if (m[a] == m[b]) return a.size() > b.size();
	return m[a] > m[b];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

	int N, M;
	string tmp;
	vector<string> words;
	
	cin >> N >> M;

	for (int i = 0; i < N; ++i){
		cin >> tmp;
		if (tmp.size() >= M){
			if(m.find(tmp) == m.end()) m.insert({tmp, 1});
			else m[tmp]++;
		}
	}

	for (auto [k, v] : m) words.push_back(k);

	sort(words.begin(), words.end(), incr);

	for (auto word : words){
		cout << word << "\n";
	}
}