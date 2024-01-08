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
        vector<int> v(n);
        int even = 0;
        int odd = 0;
        for (auto &it : v)
        {
            cin >> it;
        }
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                even = __gcd(even, v[i]);
            }
            else
            {
                odd = __gcd(odd, v[i]);
            }
        }

        bool res1 = true, res2 = true;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (v[i] % odd == 0)
                {
                    res1 = false;
                }
            }
            else
            {
                if (v[i] % even == 0)
                {
                    res2 = false;
                }
            }
        }
        if (res1)
        {
            cout << odd << endl;
        }
        else if (res2)
        {
            cout << even << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}