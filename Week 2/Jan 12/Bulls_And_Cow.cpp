class Solution
{
public:
    string getHint(string secret, string guess)
    {
        map<char, int> m1;
        map<char, int> m2;
        int bulls = 0;
        int cows = 0;
        for (int i = 0; i < secret.length(); i++)
        {
            if (secret[i] == guess[i])
                bulls++;
            else
            {
                m1[secret[i]]++;
                m2[guess[i]]++;
            }
        }
        for (auto it : m1)
        {
            if (m2[it.first] > 0)
            {
                cows += min(it.second, m2[it.first]);
            }
        }
        string ans = to_string(bulls) + 'A' + to_string(cows) + 'B';
        return ans;
    }
};