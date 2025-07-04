#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, sum;
    bool isDone = true;
    string s;

    cin >> n;
    
    for(int i = 0; i < n; ++i){
        cin >> s;
        sum = 0;
        isDone = true;
        if(s.length() % 2 == 1) cout << "NO\n";
        else{
            for (int j = 0; j < s.length(); ++j){
                if (sum < 0) {
                    isDone = false;
                    cout << "NO\n";
                    break;
                }
                else if (s[j] == '(') sum += 1;
                else sum -= 1;
            }
            if (sum == 0 && isDone) cout << "YES\n";
            else if (isDone) cout << "NO\n";
        }
    }
}