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
    int count = 0;
    while (n--)
    {
        string s;
        cin >> s;
        if (s[0] == 'T')
        {
            count += 4;
        }
        if (s[0] == 'C')
        {
            count += 6;
        }
        if (s[0] == 'O')
        {
            count += 8;
        }
        if (s[0] == 'D')
        {
            count += 12;
        }
        if (s[0] == 'I')
        {
            count += 20;
        }
    }
    cout << count << endl;
    return 0;
}