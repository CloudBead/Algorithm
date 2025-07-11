#include <iostream>
using namespace std;

int cnt = 0, K;


void merge(int* A, int p, int q, int r){
    int* tmp = new int [r+1];   
    int i = p;
    int j = q + 1;
    int t = 0;
    while(i <= q && j <= r){
        if(A[i] <= A[j]) tmp[t++] = A[i++];
        else tmp[t++] = A[j++];
    }
    while(i<=q) tmp[t++] = A[i++];
    while(j<=r) tmp[t++] = A[j++];
    i = p, t = 0;
    while(i <= r){
        A[i++] = tmp[t++];
        cnt++;
        if(cnt==K) cout << tmp[t - 1];
    }
    delete[] tmp;
}

void merge_sort(int* A, int p, int r){
    if(p < r){
        int q = (p + r) / 2;
        merge_sort(A, p, q);
        merge_sort(A, q + 1, r);
        merge(A, p, q, r);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

	int N;

    cin >> N >> K;

    int* A = new int[N];
    for(int i=0; i<N; i++)
        cin >> A[i];
    merge_sort(A,0,N-1);
    if(cnt<K) cout << "-1";

}