class Solution
{
public:
    void merge(vector<int> &nums, vector<pair<int, int>> &a, vector<int> &count, int start, int mid, int end)
    {
        vector<pair<int, int>> temp(end - start + 1);
        int i = start;
        int j = mid + 1;
        int k = 0;
        while (i <= mid && j <= end)
        {
            if (a[i].first <= a[j].first)
            {
                temp[k++] = a[j++];
            }
            else
            {
                count[a[i].second] += end - j + 1;
                temp[k++] = a[i++];
            }
        }
        while (i <= mid)
        {
            temp[k++] = a[i++];
        }
        while (j <= end)
        {
            temp[k++] = a[j++];
        }

        for (int i = start; i <= end; i++)
        {
            a[i] = temp[i - start];
        }
    }

    void mergesort(vector<int> &nums, vector<pair<int, int>> &a, vector<int> &count, int start, int end)
    {
        if (start >= end)
        {
            return;
        }
        int mid = (start + end) / 2;
        mergesort(nums, a, count, start, mid);
        mergesort(nums, a, count, mid + 1, end);
        merge(nums, a, count, start, mid, end);
    }

    vector<int> countSmaller(vector<int> &nums)
    {
        vector<int> count(nums.size());
        vector<pair<int, int>> a;
        for (int i = 0; i < nums.size(); i++)
        {
            a.push_back({nums[i], i});
        }
        mergesort(nums, a, count, 0, nums.size() - 1);
        return count;
    }
};