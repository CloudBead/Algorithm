#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector <string> res;
    int n;
    string tmp;
    
    cin >> n;
    
    for (int j = 0; j < n; j++){
        cin >> tmp;
        res.push_back(tmp);
    }
    
    for (int j = 0; j < n-1; j++){
        cin >> tmp;
        res.erase(find(res.begin(),res.end(),tmp));
    } 

    cout << res[0];
}