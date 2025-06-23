#include <iostream>
using namespace std;

int main(){
    int n;

    cin >> n;

    for (int i = 0; i < n; i++){
        int sum = 0;
        int num = i;
        
        while (num != 0){
            sum += num % 10;
            num /= 10;
        }

        if (sum + i == n) {
            cout << i;
            return 0;
        }
    }

    cout << 0;
}