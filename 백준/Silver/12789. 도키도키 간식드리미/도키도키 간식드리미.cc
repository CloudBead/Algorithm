#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, tmp, num = 1;
    stack<int> st1, st2;

    cin >> n;

    for (int i = 0; i < n; ++i){
        cin >> tmp;
        st2.push(tmp);
    }

    for (int j = 0; j < n; ++j){
        st1.push(st2.top());
        st2.pop();
    }

    st2 = {};

    while (true){
        if (num == n+1){
            cout << "Nice";
            break;
        }

        if (!st1.empty() && st1.top() == num){
            st1.pop();
            num++;
        }
        else if (!st2.empty() && st2.top() == num){
            st2.pop();
            num++;
        }
        else if (st1.empty()) {
            cout << "Sad";
            break;
        }
        else{
            st2.push(st1.top());
            st1.pop();
        }
    }
}