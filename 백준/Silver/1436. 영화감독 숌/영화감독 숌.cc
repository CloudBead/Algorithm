#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, i = 665, cnt = 0;

    cin >> n;

    while (cnt != n){
        i++;
        string tmp = to_string(i);
        for (int j = 0; j < tmp.length() - 2; j++){
            if (tmp[j] == '6' && tmp[j+1] == '6' && tmp[j+2] == '6'){
                cnt++;
                break;
            }
        }
    }

    cout << i;
}