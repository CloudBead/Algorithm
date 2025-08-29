#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    if (m > n){
        cout << "TLE!";
    } 
    else if (m == 1 || m == 2) {
        cout << "NEWBIE!";
    }
    else cout << "OLDBIE!";
}