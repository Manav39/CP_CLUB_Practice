#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int m;
    cin >> m;
    string l;
    cin >> l;
    string r;
    cin >> r;
    int start = -1;
    for (int i = 0; i < m; i++)
    {
        int range = start + 1;
        for (char ch = l[i]; ch <= r[i]; ch++)
        {
            int ind = s.find(ch, range);
            if (ind == -1)
            {
                cout << "YES" << endl;
                return;
            }
            start = max(start, ind);
        }
    }
    cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}