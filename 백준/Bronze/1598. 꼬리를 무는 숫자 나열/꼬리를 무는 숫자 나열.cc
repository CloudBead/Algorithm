#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int a1 = (a - 1) / 4;
    int a2 = (a - 1) % 4;

    int b1 = (b - 1) / 4;
    int b2 = (b - 1) % 4;

    cout << abs(a1 - b1) + abs(a2 - b2);
}