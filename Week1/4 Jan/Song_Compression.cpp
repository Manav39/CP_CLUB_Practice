#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, fdsize;
    cin >> n >> fdsize;
    vector<ll> sec;
    ll s1 = 0, s2 = 0;
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        s1 = s1 + a;
        s2 = s2 + b;
        sec.push_back(a - b);
    }
    if (s2 > fdsize)
    {
        cout << -1 << endl;
    }
    else
    {
        sort(sec.begin(), sec.end(), greater<ll>());
        ll diff = s1 - fdsize;
        if (diff == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            ll change = 0;
            for (ll i : sec)
            {
                if (diff <= 0)
                {
                    break;
                }
                diff = diff - i;
                change++;
            }
            cout << change << endl;
        }
    }
}