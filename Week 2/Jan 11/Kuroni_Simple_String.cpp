#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    string s;
    cin >> s;
    vector<int> v;
    int n = s.length();
    int pos = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            for (int j = pos; j > i; j--)
            {
                if (s[j] == ')')
                {
                    pos = j;
                    s[j] = 'X';
                    s[i] = 'X';
                    break;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'X')
            v.push_back(i + 1);
    }

    if (v.size() > 0)
    {
        cout << 1 << endl;
        cout << v.size() << endl;
        for (auto it : v)
            cout << it << " ";
        return 0;
    }
    cout << 0 << endl;
    return 0;
}