#include <iostream>
using namespace std;

int main(){
    int a, b, half;
    
    cin >> a >> b;
    
    if (b%2 == 0) half = b/2;
    else half = b/2 + 1;
    
    if (a < half) cout << "H";
    else cout << "E";
}