#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    int n, m, tmp;
    
    cin >> n >> m;
    
    for (int i = 0; i < n; i++){
        v.push_back(0);
    }
    
    for (int j = 0; j < m; j++){
        cin >> tmp;
        v[tmp-1]++;
        cin >> tmp;
        v[tmp-1]++;
    }
    
    for (int i = 0; i < n; i++){
        cout << v[i] << "\n";
    } 
}