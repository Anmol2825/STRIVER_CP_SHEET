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
    int ans = 0;
    while (n--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '+')
            {
                ans++;
                break;
            }
            if (s[i] == '-')
            {
                ans--;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}