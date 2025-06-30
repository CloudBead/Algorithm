#include <iostream>
#include <set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    set<string> list;

    cin >> s;

    for(int i = 0; i < s.length(); i++){
        for (int j = i; j < s.length(); j++){
            list.insert(s.substr(i, j - i + 1));
        }
    }

    cout << list.size();
}