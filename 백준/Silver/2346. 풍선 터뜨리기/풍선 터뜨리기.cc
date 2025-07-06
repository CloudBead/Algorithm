#include <iostream>
#include <deque>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, tmp, num;
    deque<pair<int,int>> d;

    cin >> n;

    for (int i = 1; i <= n; ++i){
        cin >> tmp;
        d.push_back({i,tmp});
    }

    for (int j = 0; j < n; ++j){
        cout << d.front().first << " ";
        tmp = d.front().second;
        d.pop_front();

        if (d.empty()) break;

        if (tmp > 0) {
            for (int k = 0; k < tmp-1; ++k){
                d.push_back(d.front());
                d.pop_front();
            }
        }
        else {
            for (int k = 0; k < -tmp; ++k){
                d.push_front(d.back());
                d.pop_back();
            }
        }  
    }
}