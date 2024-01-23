#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        stack<int> st;
        for (auto it : s)
        {
            if (!st.empty() && st.top() == it)
            {
                st.pop();
            }
            else
            {
                st.push(it);
            }
        }
        if (st.size() < 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
