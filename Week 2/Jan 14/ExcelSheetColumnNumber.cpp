class Solution
{
public:
    int titleToNumber(string columnTitle)
    {
        int ans = 0;
        int base = 0;
        map<char, int> m;
        int temp = 1;
        for (char ch = 'A'; ch <= 'Z'; ch++)
        {
            m[ch] = temp;
            temp++;
        }
        for (int it = columnTitle.length() - 1; it >= 0; it--)
        {
            ans += m[columnTitle[it]] * pow(26, base);
            base++;
        }
        return ans;
    }
};