#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, h;
        cin >> n >> h;
        vector<int> v(n);
        for (auto &it : v)
            cin >> it;
        int low = 1;
        int high = h;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            int damage = 0;
            for (int i = 0; i < n - 1; i++)
            {
                damage += (v[i] + mid < v[i + 1]) ? mid : v[i + 1] - v[i];
            }
            damage += mid;
            if (damage >= h)
                high = mid - 1;
            else
                low = mid + 1;
        }
        cout << low << endl;
    }
    return 0;
}