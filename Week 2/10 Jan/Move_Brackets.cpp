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
        string s;
        cin >> s;
        stack<char> st;
        int moves = 0;
        for (auto it : s)
        {
            if (it == '(')
            {
                st.push('(');
            }
            else if (it == ')' && st.empty())
            {
                moves++;
            }
            else if (it == ')' && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                moves++;
            }
        }
        cout << (moves + st.size()) / 2 << endl;
    }
    return 0;
}