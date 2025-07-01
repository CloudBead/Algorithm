#include <iostream>
using namespace std;

int GCD(int a, int b){
    if (b == 0) return a;
    return GCD(b, a%b);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int x1, x2, y1, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    x1 = x1*y2 + x2*y1;
    y1 *= y2;

    int gcd = GCD(x1, y1);

    cout << x1 / gcd << " " << y1 / gcd;
}