#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long maxi = 0, mini = 0;
        sort(v.begin(), v.end());
        if (v[0] < 0 && v[n - 1] > 0)
        {
            if (abs(v[0]) > v[n - 1])
            {
                maxi = v[0] * v[0];
            }
            else
            {
                maxi = v[n - 1] * v[n - 1];
            }
            mini = v[0] * v[n - 1];
        }
        else if (v[0] < 0 && v[n - 1] < 0)
        {
            maxi = v[0] * v[0];
            mini = v[n - 1] * v[n - 1];
        }
        else
        {
            maxi = v[n - 1] * v[n - 1];
            mini = v[0] * v[0];
        }

        cout << mini << " " << maxi << endl;
    }
}