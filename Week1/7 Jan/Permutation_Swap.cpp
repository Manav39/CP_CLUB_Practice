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
        int swaps = 0;
        for (int i = 1; i <= n; i++)
        {
            int a;
            cin >> a;
            swaps = __gcd(swaps, abs(a - i));
        }
        cout << swaps << endl;
    }
    return 0;
}