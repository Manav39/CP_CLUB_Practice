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
        int cnt = 0;
        set<int> st;
        for (auto i : s)
        {
            st.insert(i);
            cnt += st.size();
        }
        cout << cnt << endl;
    }
    return 0;
}