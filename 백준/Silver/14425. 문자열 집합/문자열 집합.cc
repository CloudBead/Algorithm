#include <iostream>
#include <set>
using namespace std;

int main(){
    string tmp;
    set<string> s;
    int n, m, cnt = 0;

    cin >> n >> m;


    for (int i = 0; i < n; i++) {
        cin >> tmp;
        s.insert(tmp);
    }

    for (int j = 0; j < m; j++){
        cin >> tmp;
        if (s.find(tmp) != s.end()) cnt++;
    }

    cout << cnt;
}