#include <iostream>
#include <map>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, tmp;
    map<int, int> num;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        num[tmp]++;
    }

    cin >> m;
    for (int j = 0; j < m; j++) {
        cin >> tmp;
        cout << num[tmp];
        if (j != m - 1) cout << ' ';
    }
}