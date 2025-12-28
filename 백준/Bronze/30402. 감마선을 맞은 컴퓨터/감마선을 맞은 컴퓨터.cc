#include <iostream>
using namespace std;

int main(){
    char c;
    while(true){
        cin >> c;
        if (c == 'w') {
            cout << "chunbae";
            break;
        }
        else if (c == 'g') {
            cout << "yeongcheol";
            break;
        }
        else if (c == 'b'){
            cout << "nabi";
            break;
        }
    }
}