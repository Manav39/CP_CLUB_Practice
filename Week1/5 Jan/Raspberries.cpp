#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        bool divisible = false;
        for (auto &it : v)
        {
            cin >> it;
            if (it % k == 0)
            {
                divisible = true;
            }
        }
        if (divisible)
        {
            cout << 0 << endl;
            continue;
        }
        if (k == 4)
        {
            int countTwos = 0, minOps = INT_MAX;
            for (auto i : v)
            {
                if (i % 2 == 0)
                {
                    countTwos++;
                }
                minOps = min(minOps, k - (i % k));
            }
            if (countTwos >= 2)
            {
                cout << 0 << endl;
            }
            else if (minOps == 1 || countTwos == 1)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
        else
        {
            int minOps = INT_MAX;
            for (auto i : v)
            {
                minOps = min(minOps, k - (i % k));
            }
            cout << minOps << endl;
        }
    }
    return 0;
}