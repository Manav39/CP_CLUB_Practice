#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int n, d;
    cin >> n >> d;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }
    sort(v.begin(), v.end());
    int wins = 0;
    int i = 0;
    int j = n;
    for (int i = n - 1; i >= 0; i--)
    {
        int val = d / v[i] + 1;
        if (val > n)
        {
            break;
        }
        else
        {
            wins++;
            n = n - val;
        }
    }
    cout << wins << endl;

    return 0;
}