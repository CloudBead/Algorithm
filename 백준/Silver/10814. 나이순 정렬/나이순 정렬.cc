#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, age;
    string name;
    vector<tuple<int, int, string>> v;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> age >> name;
        v.push_back({age, i, name});
    }

    sort(v.begin(), v.end());

    for (int j = 0; j < n; j++){
        cout << get<0>(v[j]) << " " << get<2>(v[j]) << '\n';
    }
}