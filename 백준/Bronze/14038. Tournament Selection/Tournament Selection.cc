#include <iostream>
using namespace std;

int main(){
    char tmp;
    int win = 0;
    
    for (int i = 0; i < 6; i++){
        cin >> tmp;
        if (tmp == 'W') win++;
    }
    
    if (win == 0) cout << -1;
    else if (win < 3) cout << 3;
    else if (win < 5) cout << 2;
    else cout << 1;
}