//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    int longestKSubstr(string s, int k)
    {
        // your code here
        vector<int> v(256, 0);
        int count = 0;
        int start = 0;
        int end = 0;
        int maxlength = INT_MIN;
        while (end < s.length())
        {
            if (v[s[end]] == 0)
            {
                count++;
            }
            v[s[end]]++;
            if (count == k)
            {
                if (maxlength < end - start + 1)
                {
                    maxlength = end - start + 1;
                }
            }
            if (count > k)
            {
                count = 0;
                v.assign(256, 0);
                end = start;
                start++;
            }
            end++;
        }
        if (maxlength == INT_MIN)
            return -1;
        return maxlength;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Endshttps://media.geeksforgeeks.org/img-practice/user_web-1598433228.svg