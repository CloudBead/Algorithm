#include <iostream>
using namespace std;

int main(){
    int HSR, F;
    
    cin >> HSR >> F;
    if (F < HSR) cout << "flight";
    else cout << "high speed rail";
}