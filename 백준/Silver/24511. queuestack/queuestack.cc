#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, c, tmp;

    cin >> n;

    vector<int> isValid;
    deque<int> qs;

    for (int i = 0; i < n; ++i){
        cin >> tmp;
        isValid.push_back(tmp);
    }
    for (int j = 0; j < n; ++j){
        cin >> tmp;

        if (!isValid[j]){
            qs.push_back(tmp);
        }
    }

    cin >> m;

    for (int k = 0; k < m; ++k){
        cin >> tmp;
        if (qs.empty()) cout << tmp << " ";
        else{
            cout << qs.back() << " ";
            qs.push_front(tmp);
            qs.pop_back();
        }
    }
}