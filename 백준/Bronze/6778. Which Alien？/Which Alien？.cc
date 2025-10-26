#include <iostream>
#include <vector>
using namespace std;

int main(){
    int antenna, eyes;
    vector<bool> res = {1, 1, 1};
    vector<string> output = {"TroyMartian", "VladSaturnian", "GraemeMercurian"};
    

    cin >> antenna >> eyes;
    if (eyes > 4 || antenna < 3) res[0] = 0;
    if (antenna > 6 || eyes < 2) res[1] = 0;
    if (eyes > 3 || antenna > 2) res[2] = 0;
    
    for (int i = 0; i < 3; ++i){
        if (res[i] == 1) cout << output[i] << "\n";
    }
}