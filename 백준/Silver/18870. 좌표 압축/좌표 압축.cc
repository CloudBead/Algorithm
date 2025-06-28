#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp_second(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, tmp;
    vector<pair<int, int>> v;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> tmp;
        v.push_back({i, tmp});
    }

    sort(v.begin(), v.end(), cmp_second);

    tmp = 0;

    for (int j = 0; j < n; j++){
        int num = tmp;
        if (j != n-1){
            if(v[j].second != v[j+1].second) tmp++;
        }
        v[j].second = num;
    }

    sort(v.begin(), v.end());

    for (int k = 0; k < n; k++){
        cout << v[k].second << " ";
    }
}