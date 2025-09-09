#include <iostream>
using namespace std;

int main(){
    int cur, sum = 0;
    
    for (int i = 0; i < 5; ++i){
        cin >> cur;
        if (cur < 40) sum += 40;
        else sum += cur;
    }
    
    cout << sum / 5;
}