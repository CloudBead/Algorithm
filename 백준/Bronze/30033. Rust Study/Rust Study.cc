#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> a;
    int n, tmp, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        a.push_back(tmp);
    }
    for (int j = 0; j < n; j++){
        cin >> tmp;
        if (a[j] <= tmp) sum++;
    }
    cout << sum;
}