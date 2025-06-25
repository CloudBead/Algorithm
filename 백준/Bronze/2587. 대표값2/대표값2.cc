#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int sum = 0;
    int arr[5];

    for (int i = 0; i < 5; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr+5);

    cout << sum / 5 << endl << arr[2];
}