#include <iostream>
using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, tmp;

    int arr[10001] = {0};

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> tmp;
        arr[tmp] += 1;
    }

    for (int j = 1; j < 10001; j++){
        for (int k = 0; k < arr[j]; k++){
            cout << j << '\n';
        }
    }
}