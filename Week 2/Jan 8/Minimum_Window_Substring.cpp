class Solution
{
public:
    string minWindow(string s, string t)
    {
        vector<int> v(256, 0);
        for (int i = 0; i < t.length(); i++)
            v[t[i]]++;

        int start = 0, end = 0, ans_start = 0, count = 0, minlength = INT_MAX;
        while (end < s.length())
        {
            if (v[s[end]] > 0)
                count++;
            v[s[end]]--;
            while (count == t.length())
            {
                if (minlength > end - start + 1)
                {
                    ans_start = start;
                    minlength = end - start + 1;
                }
                v[s[start]]++;
                if (v[s[start]] > 0)
                    count--;
                start++;
            }
            end++;
        }
        if (minlength == INT_MAX)
            return "";
        return s.substr(ans_start, minlength);
    }
};