class Solution
{
public:
    bool checkPossibility(vector<int> &nums)
    {
        int cnt = 0, prev = 0;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] <= nums[i + 1])
            {
                prev = nums[i];
                continue;
            }
            if (nums[i + 1] >= prev)
                nums[i] = nums[i + 1];
            else
                nums[i + 1] = nums[i];
            prev = nums[i];
            cnt++;
        }
        if (cnt <= 1)
        {
            return true;
        }
        return false;
    }
};