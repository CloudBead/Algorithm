#include <iostream>
using namespace std;

int n, m;
int number[9];

void dfs(int a)
{
    if (a == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << number[i] << " ";
        }
        cout << "\n";
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (a == 0){
            number[a] = i;
            dfs(a + 1);
        }
        else{
            if (i >= number[a-1]){
                number[a] = i;
                dfs(a + 1);
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    dfs(0);
    return 0;
}