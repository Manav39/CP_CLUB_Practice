#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> pos, neg, zero;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            zero.push_back(x);
        }
        else if (x > 0)
        {
            pos.push_back(x);
        }
        else
        {
            neg.push_back(x);
        }
    }
    if (pos.size() == 0)
    {
        int first = neg[0];
        int second = neg[1];
        pos.push_back(first);
        pos.push_back(second);
        neg.erase(neg.begin() + 0);
        neg.erase(neg.begin() + 0);
    }
    cout << 1 << " " << neg[0] << endl;
    neg.erase(neg.begin() + 0);
    cout << pos.size() << " ";
    for (auto it : pos)
    {
        cout << it << " ";
    }
    cout << endl;

    cout << neg.size() + zero.size() << " ";
    for (auto it : neg)
    {
        cout << it << " ";
    }
    for (auto it : zero)
    {
        cout << it << " ";
    }

    return 0;
}