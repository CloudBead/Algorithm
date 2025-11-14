#include <iostream>
#include <string>
using namespace std;

int main(){
    char trash;
    int k, d, a;
    
    cin >> k >> trash >> d >> trash >> a;
    
    if (k + a < d || d == 0) cout << "hasu";
    else cout << "gosu";
}