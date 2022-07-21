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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mini = 0;
    int maxi = 0;
    int mx = a[0], mi = a[0];
    for (int i = 1; i < n; i++)
    {
        if (mx < a[i])
        {
            maxi = i;
            mx = a[i];
        }
        if (mi >= a[i])
        {
            mini = i;
            mi = a[i];
        }
    }
    int ans = (maxi) + (n - mini - 1);
    if (maxi > mini)
    {
        ans--;
    }
    cout << ans << endl;

    return 0;
}