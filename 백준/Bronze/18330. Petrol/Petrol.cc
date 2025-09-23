#include <iostream> 
using namespace std;

int main(){
    int n, m, res;
    cin >> n >> m;
    m += 60;
    if (m > n) res = n * 1500;
    else res = m * 1500 + (n-m) * 3000;
    cout << res;
}