#include <iostream>
using namespace std;

long long int gcd(long long int x, long long int y){
    if (y == 0) return x;
    else return gcd(y, x % y);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int a, b, tmp;

    cin >> a >> b;
    cout << a * b / gcd(a, b) << '\n';
    
}