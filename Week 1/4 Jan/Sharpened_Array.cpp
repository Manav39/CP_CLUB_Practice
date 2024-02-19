#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &i : v)
        {
            cin >> i;
        }
        int i;
        for (i = 0; i < n; i++)
        {
            if (v[i] < i)
            {
                break;
            }
        }
        int j;
        for (j = n - 1; j >= 0; j--)
        {
            if (v[j] < n - j - 1)
            {
                break;
            }
        }
        bool ans = i >= j + 2 ? true : false;

        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}