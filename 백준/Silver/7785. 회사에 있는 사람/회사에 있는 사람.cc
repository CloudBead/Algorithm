#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    set<string> s;
    string name, state;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> name >> state;
        if (state == "enter") s.insert(name);
        else s.erase(name);
    }

    for (auto j = s.rbegin(); j != s.rend(); j++){
        cout << *j << '\n';
    }
}