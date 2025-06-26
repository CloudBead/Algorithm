#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, k;

    cin >> n >> k;

    int* grade = new int[n];

    for (int i = 0; i < n; i++){
        cin >> grade[i];
    }

    sort(grade, grade+n);

    cout << grade[n - k];
}