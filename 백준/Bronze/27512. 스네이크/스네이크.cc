#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  if (n % 2 == 0 || m % 2 == 0)
    cout << n * m;
  else
    cout << n * m - 1;
  return 0;
}