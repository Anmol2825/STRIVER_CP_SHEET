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
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    cout << max({x1, x2, x3}) - min({x1, x2, x3}) << endl;
    return 0;
}