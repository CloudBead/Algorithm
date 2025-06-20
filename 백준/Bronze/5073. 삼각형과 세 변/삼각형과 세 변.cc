#include <iostream>
using namespace std;

int main(){
    int a[3];

    while (true){
        int max = 0;

        for (int i = 0; i < 3; i++){
            cin >> a[i];
            if (a[i] > a[max]) max = i;
        }

        if (a[0] + a[1] + a[2] == 0) break;

        if ((a[max] * 2) >= (a[0] + a[1] + a[2])) cout << "Invalid\n";
        else if ((a[0] == a[1]) && (a[1] == a[2])) cout << "Equilateral\n";
        else if ((a[0] != a[1]) && (a[1] != a[2]) && (a[0] != a[2])) cout << "Scalene\n";
        else cout << "Isosceles\n";
    }
}