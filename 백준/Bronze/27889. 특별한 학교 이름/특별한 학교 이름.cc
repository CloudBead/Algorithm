#include <iostream>
using namespace std;

int main(){
    string tmp;
    
    cin >> tmp;
    
    if (tmp == "NLCS") cout << "North London Collegiate School";
    else if (tmp == "BHA") cout << "Branksome Hall Asia";
    else if (tmp == "KIS") cout << "Korea International School";
    else cout << "St. Johnsbury Academy";
}