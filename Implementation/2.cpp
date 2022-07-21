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
    string s;
    cin >> s;
    int x = s.size();
    for (int i = x; i >= 1; i--)
    {
        if (s[i] >= '5')
        {
            int x = s[i] - '0';
            s[i] = '9' - x;
        }
    }
    if (s[0] != '9' && s[0] >= '5')
    {
        int x = s[0] - '0';
        s[0] = '9' - x;
    }
    cout << stoi(s) << endl;
    return 0;
}