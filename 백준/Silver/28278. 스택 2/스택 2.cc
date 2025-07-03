#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, tmp, num;
    stack<int> st;

    cin >> n;
    
    for(int i = 0; i < n; ++i){
        cin >> tmp;
        switch(tmp){
        case 1:
            cin >> num;
            st.push(num);
            break;
        case 2:
            if (!st.empty()) {
                cout << st.top() << '\n';
                st.pop();
            }
            else cout << "-1\n";
            break;
        case 3:
            cout << st.size() << '\n';
            break;
        case 4:
            if (st.empty()) cout << "1\n";
            else cout << "0\n";
            break;
        case 5:
            if (!st.empty()) cout << st.top() << '\n';
            else cout << "-1\n";
            break;
        }
    }
}