#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int k, m;
    cin >> k >> m;
    vector<int> v1(n1), v2(n2);
    for (int i = 0; i < n1; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> v2[i];
    }
    bool res;
    if (v1[k - 1] < v2[n2 - m])
        res = true;
    else
        res = false;
    if (res)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}