#include <iostream>
using namespace std;

int main(){
    int n, m = 1;
    while(true){
        cin >> n >> m;
        if (n == 0 && m == 0) break;
        cout << n+m << "\n";
    }
}