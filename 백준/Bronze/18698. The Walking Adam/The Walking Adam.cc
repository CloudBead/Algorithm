#include <iostream>
#include <string>
using namespace std;

int main(){
    string tmp;
    int n, res;
    
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> tmp;
        res = 0;
        for (int j = 0; j < tmp.length(); j++){
            if (tmp[j] == 'D') break;
            else res++;
        }
        cout << res << "\n";
    }
}