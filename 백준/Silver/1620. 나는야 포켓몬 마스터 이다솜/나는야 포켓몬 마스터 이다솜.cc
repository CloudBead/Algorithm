#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, q;
    map<string, int> m;
    string tmp;
    string name[100001];

    cin >> n >> q;

    for (int i = 1; i <= n; i++){
        cin >> tmp;
        m.insert({tmp, i});
        name[i] = tmp;
    }

    for (int j = 0; j < q; j++){
        cin >> tmp;
        if (isdigit(tmp[0])) cout << name[stoi(tmp)] << '\n';
        else cout << m[tmp] << '\n';
    }
}