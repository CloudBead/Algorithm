#include <iostream>
using namespace std;

int main(){
    int n;
    cin  >> n;
    cout << 2024 + (int)(7 + 7*(n-1))/12 << " " << (7 + 7*(n-1))%12 + 1;
}