class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> temp;
        for (auto it : nums1)
            temp.push_back(it);
        for (auto it : nums2)
            temp.push_back(it);
        sort(temp.begin(), temp.end());
        int n = temp.size();
        double ans;
        if (n % 2 == 0)
            ans = (temp[n / 2 - 1] + temp[n / 2]) / 2.0;
        else
            ans = temp[(n + 1) / 2 - 1];
        return ans;
    }
};