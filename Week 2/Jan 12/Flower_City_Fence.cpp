#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        if (v[1] != n)
        {
            cout << "NO" << endl;
            continue;
        }
        vector<int> rotated(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            rotated[v[i]]++;
        }
        for (int i = n - 1; i >= 1; i--)
        {
            rotated[i] += rotated[i + 1];
        }
        if (v == rotated)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}