#include <iostream>
#include <map>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, cnt = 0;
    string tmp;
    map<string, int> list;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> tmp;
        list[tmp]++;
    }

    for (int j = 0; j < m; j++){
        cin >> tmp;
        list[tmp]++;
        if (list[tmp] == 2) cnt++;
    }

    cout << cnt << '\n';

    for (auto& [k, v] : list) {
        if (v == 2) cout << k << '\n';
    }
}