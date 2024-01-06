class Solution
{
public:
    int hIndex(vector<int> &citations)
    {
        int c = 0;
        int maxc = 0;
        int n = citations.size();
        while (true)
        {
            int cnt = 0;
            for (int i = 0; i < n; i++)
            {
                if (citations[i] > c)
                {
                    cnt++;
                }
            }
            if (cnt <= c)
            {
                break;
            }
            else
            {
                c++;
            }
        }
        return c;
    }
};