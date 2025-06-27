#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string n;

    int arr[11];

    cin >> n;

    for (int i = 0; i < n.length(); i++){
        arr[i] = n[i] - '0';
    }

    sort(arr, arr+n.length());

    for (int j = n.length()-1; j >= 0; j--){
        cout << arr[j];
    }
}