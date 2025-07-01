#include <iostream>
#include <vector>
using namespace std;

int GCD(int a, int b){
    if (b == 0) return a;
    return GCD(b, a % b);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, first, tmp;
    vector<int> v;

    cin >> n >> first;
    
    for (int i = 0; i < n - 1; i++){
        cin >> tmp;
        v.push_back(tmp - first);
    }

    int gcd = v[0];

    for (int j = 0; j < n - 1; j++){
        gcd = GCD(v[j], gcd);
    }

    cout << v[n-2] / gcd + 1 - n;
}