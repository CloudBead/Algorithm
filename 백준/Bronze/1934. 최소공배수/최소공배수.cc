#include <iostream>
using namespace std;

int gcd(int x, int y){
    if (y == 0) return x;
    else return gcd(y, x % y);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, a, b, tmp;

    cin >> t;

    for (int i = 0; i < t; i++){
        cin >> a >> b;
        cout << a * b / gcd(a, b) << '\n';
    }
}