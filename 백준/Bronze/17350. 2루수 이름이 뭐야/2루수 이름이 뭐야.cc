#include <iostream>
using namespace std;

int main(){
    int n;
    string tmp;
    
    cin >> n;
    
    for (int i = 0; i < n; ++i){
        cin >> tmp;
        
        if (tmp == "anj"){
            cout << "뭐야;";
            return 0;
        }
    }
    
    cout << "뭐야?";
}