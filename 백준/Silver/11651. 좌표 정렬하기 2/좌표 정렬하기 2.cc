#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, tmp_x, tmp_y;
    vector<pair<int, int>> v;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> tmp_x >> tmp_y;
        v.push_back({tmp_y, tmp_x});
    }

    sort(v.begin(), v.end());

    for (int j = 0; j < n; j++){
        cout << v[j].second << ' ' << v[j].first << '\n';
    }
}