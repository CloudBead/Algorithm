#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    vector<int> v;

    cin >> n >> k;

    int tmp = k-1;

    for (int i = 1; i <= n; ++i){
        v.push_back(i);
    }

    cout << "<";

    while (v.size() > 1){
        cout << v[tmp] << ", ";
        v.erase(v.begin()+tmp);
        tmp += k-1;
        tmp %= v.size();
    }

    cout << v.front() << ">";
}