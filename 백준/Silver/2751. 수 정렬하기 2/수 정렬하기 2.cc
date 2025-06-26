#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, tmp;

    cin >> n;

    vector<int> arr;


    for (int i = 0; i < n; i++){
        cin >> tmp;
        arr.push_back(tmp);
    }

    sort(arr.begin(), arr.end());

    for (int j = 0; j < n; j++){
        cout << arr[j] << '\n';
    }
}