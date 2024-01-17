#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (auto &it : v)
            cin >> it;
        int low = 1;
        int high = 1e10;
        while (low < high - 1)
        {
            int mid = low + (high - low) / 2;
            int water = 0;
            for (int i = 0; i < n; i++)
            {
                if (mid - v[i] >= 0)
                {
                    water += (mid - v[i]);
                }
            }
            if (water > x)
                high = mid;
            else
                low = mid;
        }
        cout << low << endl;
    }
    return 0;
}