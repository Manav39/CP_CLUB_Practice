#include <bits/stdc++.h>
using namespace std;

int maxSubArraySum(vector<int> a, int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
    for (int i = 0; i < size; i++)
    {

        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if ((a[i] % 2 == 0 && a[i + 1] % 2 == 0) || max_ending_here < 0 || (a[i] % 2 != 0 && a[i + 1] % 2 != 0))
        {
            max_ending_here = 0;
        }
    }
    return max_so_far;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        cout << maxSubArraySum(v, n) << endl;
    }
    return 0;
}