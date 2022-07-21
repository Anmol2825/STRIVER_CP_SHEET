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
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        string ans;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != '0')
            {
                count++;
            }
        }
        cout << count << endl;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] != '0')
            {
                ans = s[i];
                int x = n - i - 1;
                while (x--)
                {
                    ans += '0';
                }
                cout << stoi(ans) << " ";
            }
        }
        cout << endl;
    }

    return 0;
}