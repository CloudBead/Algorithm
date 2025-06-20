#include <iostream>
using namespace std;

int main(){
    int n, tmp_x, tmp_y;
    int a[2][2] = {{10000,10000},{-10000,-10000}};

    cin >> n;

    if (n == 1) cout << 0;
    else{
        for (int i = 0; i < n; i++){
            cin >> tmp_x >> tmp_y;
            if (tmp_x < a[0][0]) a[0][0] = tmp_x;
            if (tmp_x > a[1][0]) a[1][0] = tmp_x;
            if (tmp_y < a[0][1]) a[0][1] = tmp_y;
            if (tmp_y > a[1][1]) a[1][1] = tmp_y;
        }
        cout << (a[1][0] - a[0][0]) *  (a[1][1] - a[0][1]);
    }
}