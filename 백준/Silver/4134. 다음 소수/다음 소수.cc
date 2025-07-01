#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;

    long long int tmp;

    cin >> n;

    for (int i = 0; i < n; ++i){
        cin >> tmp;
        if(tmp == 0 || tmp == 1) {
            cout << "2\n";
            continue;
        } 
        while (true){
            long long int j;
            for(j = 2;  j * j <= tmp; j++){
                if (tmp % j == 0) break;
            }
            if (j * j > tmp){
                cout  << tmp <<  '\n';
                break;
            }
            tmp++;
        }
    }
}