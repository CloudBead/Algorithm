#include <iostream>
#include <cmath>
using namespace std;

int n, ans = 0;
bool isAble;
int number[16];

void dfs(int y) {
    if (n == y) ans++;
    else {
        for (int i = 0; i < n; i++) {
            number[y] = i;
            isAble = true;
            for (int x = 0; x < y; x++) {
                if (number[y] == number[x] || abs(x - y) == abs(number[x] - number[y])){
                    isAble = false;
                    break;
                }
            }
            if (isAble) {
                dfs(y + 1);
            }
        }
    }
}


int main()
{
    cin >> n ;
    dfs(0);
    cout << ans;
}