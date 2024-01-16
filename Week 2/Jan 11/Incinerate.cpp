#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int mx = 0;
        vector<int> h(n), p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
            mx = max(mx, h[i]);
        }

        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        vector<pair<int, int>> res;
        for (int i = 0; i < n; i++)
        {
            res.push_back({h[i], p[i]});
        }

        sort(res.begin(), res.end());

        vector<int> minval(n);
        int val = INT_MAX;

        for (int i = n - 1; i >= 0; i--)
        {
            val = min(val, res[i].second);
            minval[i] = val;
        }

        int x = 0;
        int sum = 0;
        int i = 0;
        while (i < n)
        {
            sum += k;
            while (i < n && res[i].first - sum <= 0)
            {
                i++;
            }

            k -= minval[i];

            if (k <= 0 || i >= n)
            {
                break;
            }
        }

        if (sum >= mx)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}