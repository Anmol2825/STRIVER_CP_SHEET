#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((i + 1) % 2 != 0)
            {
                cout << "#";
            }
            if ((i + 1) % 2 == 0)
            {
                if ((i + 1) % 4 != 0 && j == m - 1)
                {
                    cout << "#";
                }
                else if ((i + 1) % 4 == 0 && j == 0)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
        }
        cout << endl;
    }
    return 0;
}