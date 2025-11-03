#include <iostream>
using namespace std;

int main(){
    int n, a, d, g, tmp, res = 0;
    
    cin >> n;
    
    for (int i = 0 ; i < n; ++i){
        cin >> a >> d >> g;
        
        if (a == d + g) tmp = a*(d+g)*2;
        else tmp = a*(d+g);
        
        if (res < tmp) res = tmp;
    }
    
    cout << res;
}