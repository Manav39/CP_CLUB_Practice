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
        int odd = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a % 2 != 0)
            {
                odd++;
            }
        }
        if (odd % 2 != 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}