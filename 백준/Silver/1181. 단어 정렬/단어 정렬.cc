#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    string tmp;
    vector<pair<int, string>> v;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> tmp;
        v.push_back({tmp.length(), tmp});
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(),v.end()), v.end());

    for (int j = 0; j < v.size(); j++){
        cout << v[j].second << '\n';
    }
}