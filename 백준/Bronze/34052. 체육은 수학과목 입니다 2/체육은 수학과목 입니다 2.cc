#include <iostream>
using namespace std;

int main(){
    int tmp, sum = 0;
    for (int i = 0; i < 4; i++){
        cin >> tmp;
        sum += tmp;
    }
    if (sum > 1500) cout << "No";
    else cout << "Yes";
}