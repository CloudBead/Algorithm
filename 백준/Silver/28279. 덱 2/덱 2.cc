#include <iostream>
#include <deque>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, tmp, num;
    deque<int> d;

    cin >> n;

    for (int i = 0; i < n; ++i){
        cin >> tmp;
        switch(tmp){
            case 1:
                cin >> num;
                d.push_front(num);
                break;
            case 2:
                cin >> num;
                d.push_back(num);
                break;
            case 3:
                if (!d.empty()) {
                    cout << d.front() << "\n";
                    d.pop_front();
                }
                else cout << "-1\n";
                break;
            case 4:
                if (!d.empty()) {
                    cout << d.back() << "\n";
                    d.pop_back();
                }
                else cout << "-1\n";
                break;
            case 5:
                cout << d.size() << "\n";
                break;
            case 6:
                if (d.empty()) cout << "1\n";
                else cout << "0\n";
                break;
            case 7:
                if (!d.empty()) cout << d.front() << "\n";
                else cout << "-1\n";
                break;
            case 8:
                if (!d.empty()) cout << d.back() << "\n";
                else cout << "-1\n";
                break;
        }
    }
}