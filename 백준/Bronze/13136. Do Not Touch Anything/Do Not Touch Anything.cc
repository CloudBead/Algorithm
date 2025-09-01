#include <iostream>
using namespace std;

int main(){
    long long r, c, n;
    long long a, b;
    cin >> r >> c >> n;
    a = r / n;
    b = c / n;
    if (r % n != 0) a++;
    if (c % n != 0) b++;
    
    cout << a * b;
  
}