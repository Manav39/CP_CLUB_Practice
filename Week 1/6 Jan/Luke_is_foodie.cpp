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

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int mini = v[0];
        int maxi = v[0];
        int minops = 0;
        for (int i = 1; i < n; i++)
        {
            if (v[i] < mini)
            {
                mini = v[i];
            }
            if (v[i] > maxi)
            {
                maxi = v[i];
            }
            if (abs(maxi - mini) > 2 * x)
            {
                minops++;
                mini = v[i];
                maxi = v[i];
            }
        }
        cout << minops << endl;
    }
    return 0;
}