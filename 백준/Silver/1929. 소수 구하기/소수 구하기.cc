#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,m;

    cin >> n >> m;

    for (int i = n; i <= m; i++){
        bool pnt = true;
        if(i == 1) continue;
        for (long long j = 2; j * j <= i; j++){
            if (i % j == 0) {
                pnt = false;
                break;
            }
        }
        if (pnt) cout << i << '\n';
    }
}