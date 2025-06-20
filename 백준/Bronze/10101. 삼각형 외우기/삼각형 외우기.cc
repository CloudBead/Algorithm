#include <iostream>
using namespace std;

int main(){
    int a[3] = {0,};
    bool isEq = true;

    for (int i = 0; i < 3; i++){
        cin >> a[i];
        if (a[i] != 60) isEq = false;
    }

    if (a[0] + a[1] + a[2] != 180){
        cout << "Error";
    }
    else if (isEq) cout << "Equilateral";
    else if (a[0] != a[1] && a[1] != a[2] && a[0] != a[2]) cout << "Scalene";
    else cout << "Isosceles";
}