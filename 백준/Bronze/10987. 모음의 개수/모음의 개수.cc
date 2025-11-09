#include <iostream>
using namespace std;

int main(){
    string tmp;
    int result = 0;
    cin >> tmp;
    for (auto a : tmp){
        if (a == 'a' || a == 'e' || a == 'i' || a=='o' || a =='u') result++;
    }
    cout << result;
}