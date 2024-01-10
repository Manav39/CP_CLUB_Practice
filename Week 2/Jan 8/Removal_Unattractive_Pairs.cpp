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
        string s;
        cin >> s;
        map<char, int> m;
        int occur = 0;
        for (auto it : s)
        {
            m[it]++;
            occur = max(occur, m[it]);
        }
        occur = 2 * occur - n;
        if (occur < 0)
        {
            if (n % 2 == 0)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
        else
        {
            cout << occur << endl;
        }
    }
    return 0;
}