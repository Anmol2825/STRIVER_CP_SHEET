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
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            flag = false;
        }
    }
    if (flag)
    {
        cout << "easy" << endl;
    }
    else
    {
        cout << "hard" << endl;
    }
    return 0;
}