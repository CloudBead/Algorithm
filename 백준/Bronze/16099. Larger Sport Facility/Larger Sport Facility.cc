#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int cntCase; cin >> cntCase;

  for (int i = 0; i < cntCase; i++) {
    int lenTel, widthTel, lenEure, widthEure;
    cin >> lenTel >> widthTel >> lenEure >> widthEure;

    ll areaTel = (ll)lenTel * widthTel,
       areaEure = (ll)lenEure * widthEure;

    if (areaTel > areaEure) cout << "TelecomParisTech\n";
    else if (areaTel < areaEure) cout << "Eurecom\n";
    else cout << "Tie\n";
  }

  return 0;
}