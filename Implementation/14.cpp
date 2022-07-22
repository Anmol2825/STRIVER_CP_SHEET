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
    int n;
    cin >> n;
    int k;
    cin >> k;
    while (n > 0)
    {
        int x = n % 10;
        if (k > x)
        {
            k -= x;
            n -= x;
            n = n / 10;
            k--;
        }
        else
        {
            n -= k;
            break;
        }
    }
    cout << n << endl;
    return 0;
}