#include <iostream>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

	int n;
	bool isStarted = false;
	string a, b;
	set<string> cnt;

	cin >> n;

	for (int i = 0; i < n; ++i){
		cin >> a >> b;
		if (isStarted){
			if (cnt.find(a) != cnt.end() || cnt.find(b) != cnt.end()){
				cnt.insert(a);
				cnt.insert(b);
			}
		}
		else {
			if (a == "ChongChong" || b == "ChongChong") {
				isStarted = true;
				cnt.insert(a);
				cnt.insert(b);
			}
		}
	}
	
	cout << cnt.size();
}