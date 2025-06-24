#include <iostream>
using namespace std;

int main(){
    int a, b, c, d, e, f;

    cin >> a >> b >> c >> d >> e >> f;

    int x = (b*f - e*c) / (b*d - e*a);

    if (e != 0){
        cout << x << " " << (f - d*x) / e;
    }
    else {
        cout << x << " " << (c - a*x) / b;
    }

}