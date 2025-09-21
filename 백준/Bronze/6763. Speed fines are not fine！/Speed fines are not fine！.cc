#include <iostream>
using namespace std;

int main(){
    int lim, spd, res;
    cin >> lim >> spd;
    res = spd - lim;
    if ( res > 30 ) cout << "You are speeding and your fine is $500.";
    else if (res > 20) cout << "You are speeding and your fine is $270.";
    else if (res > 0) cout << "You are speeding and your fine is $100.";
    else cout << "Congratulations, you are within the speed limit!";
}