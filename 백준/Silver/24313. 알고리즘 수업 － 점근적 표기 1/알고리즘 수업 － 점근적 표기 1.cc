#include <iostream>
using namespace std;

int main(){
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if (c-a >= 0){
        if (b <= d*(c-a)) cout << 1;
        else cout << 0;
    }
    else{
        cout << 0;
    }
}