#include <iostream>
using namespace std;

string arr[51];

string B[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};

string W[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};

int check_black(int x, int y){
    int cnt = 0;
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            if (B[i][j] != arr[x + i][y + j]) cnt++;
        }
    }
    return cnt;
}

int check_white(int x, int y){
    int cnt = 0;
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            if (W[i][j] != arr[x + i][y + j]) cnt++;
        }
    }
    return cnt;
}

int main(){
    int n, m, min = 65;

    cin >> n >> m;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (i + 7 <= n && j + 7 <= m){
                int b_min = check_black(i,j);
                int w_min = check_white(i,j);

                int tmp = b_min < w_min ? b_min : w_min;
                min = min < tmp ? min : tmp;
            }
        }
    }

    cout << min;
}