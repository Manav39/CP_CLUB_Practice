class Solution
{
public:
    string largestNumber(vector<int> &nums)
    {
        vector<string> v;
        for (int i : nums)
        {
            v.push_back(to_string(i));
        }
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = i + 1; j < v.size(); j++)
            {
                string first = v[i] + v[j];
                string second = v[j] + v[i];
                if (first < second)
                {
                    swap(v[j], v[i]);
                }
            }
        }
        if (v[0] == "0")
            return "0";
        string ans = "";
        for (auto it : v)
        {
            ans += it;
        }
        return ans;
    }
};