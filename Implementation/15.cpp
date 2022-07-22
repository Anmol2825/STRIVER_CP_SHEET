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
    int k, n, w;
    cin >> k >> n >> w;
    int x = (k) * (w) * (w + 1) / 2;
    if (x > n)
    {
        cout << (x - n) << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}