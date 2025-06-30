#include <iostream>
#include <map>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, cnt = 0;
    int tmp;
    map<int, int> list;

    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        list[tmp]++;
        cnt++;
    }

    for (int j = 0; j < m; ++j){
        cin >> tmp;
        list[tmp]++;
        cnt++;
        if (list[tmp] == 2) cnt -= 2;
    }

    cout << cnt;
}