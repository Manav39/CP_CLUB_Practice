#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c, m, n;
        cin >> c >> m >> n;
        if (c == 0 || m == 0)
        {
            cout << 0 << endl;
            continue;
        }
        if (n > m || n > c)
        {
            cout << min(m, c) << endl;
            continue;
        }
        if (m == n && n == c)
        {
            cout << m << endl;
            continue;
        }
        if (n >= 0)
        {
            int temp = min({m, c, n});
            m = m - temp;
            c = c - temp;
            n = n - temp;
            temp += min({m, c, (m + c) / 3});
            cout << temp << endl;
            continue;
        }
    }
    return 0;
}