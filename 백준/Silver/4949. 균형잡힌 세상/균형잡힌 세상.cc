#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;

    while (true){
        getline(cin, s);

        if (s == ".") break;

        stack<char> st;

        bool isValid = true;

        for (char tmp : s){
            if (tmp == '(' || tmp == '['){
                st.push(tmp);
            } 
            else if (tmp == ')'){
                if (st.empty() || st.top() == '['){
                    isValid = false;
                    break;
                }
                st.pop();
            }
            else if (tmp == ']'){
                if (st.empty() || st.top() == '('){
                    isValid = false;
                    break;
                }
                st.pop();
            }
        }
        if (isValid && st.empty()) cout << "yes\n";
        else cout << "no\n";
    }
}