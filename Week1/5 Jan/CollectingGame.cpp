#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (auto &it : v)
        {
            cin >> it;
        }
        vector<ll> v1 = v;
        sort(v.begin(), v.end());
        vector<ll> pre(n);
        pre[0] = v[0];
        for (ll i = 1; i < n; i++)
        {
            pre[i] = pre[i - 1] + v[i];
        }
        map<ll, ll> m;
        m[v.back()] = n - 1;
        ll score = n - 1;
        for (ll i = n - 2; i >= 0; i--)
        {
            if (pre[i] >= v[i + 1])
            {
                m[v[i]] = score;
            }
            else
            {
                m[v[i]] = i;
                score = i;
            }
        }
        for (auto it : v1)
        {
            cout << m[it] << " ";
        }
        cout << endl;
    }
    return 0;
}
