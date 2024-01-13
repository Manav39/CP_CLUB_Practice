#include <bits/stdc++.h>
class Solution
{
public:
    int maxProduct(vector<string> &words)
    {
        int n = words.size();
        int ans = 0;
        vector<int> check(n);
        for (int i = 0; i < n; i++)
        {
            for (auto it : words[i])
                check[i] = check[i] | (1 << (it - 'a'));
            for (int j = 0; j < i; j++)
            {
                if ((check[i] & check[j]) == 0)
                {
                    ans = max(ans, (int)(words[i].size() * words[j].size()));
                }
            }
        }
        return ans;
    }
};