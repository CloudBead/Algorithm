#include <iostream>
using namespace std;

int main(){
    int a, b, k, x;
    int sum = 0;
    cin >> a >> b >> k >> x;
    if (k-x > b || k+x < a) cout << "IMPOSSIBLE";
    else {
        for (int i = k-x; i <= k+x; i++){
            if (i <= b && i >= a) sum++;
        }
        cout << sum;
    }
}