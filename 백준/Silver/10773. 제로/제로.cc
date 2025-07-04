#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, tmp, sum = 0;
    stack<int> st;

    cin >> n;
    
    for(int i = 0; i < n; ++i){
        cin >> tmp;
        if(tmp == 0) {
            sum -= st.top();
            st.pop();
        }
        else{
            sum += tmp;
            st.push(tmp);
        }
    }

    cout << sum;
}