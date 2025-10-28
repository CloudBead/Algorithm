#include <iostream>
using namespace std;

int main(){
    int lv;
    string tmp;
    
    cin >> lv >> tmp;
    
    if (tmp == "miss") cout << "0";
    else if (tmp == "bad") cout << 200 * lv;
    else if (tmp == "cool") cout << 400 * lv;
    else if (tmp == "great") cout << 600 * lv;
    else cout << lv * 1000;
}