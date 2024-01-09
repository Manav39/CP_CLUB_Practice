
bool isPossibleSoln(vector<int> &arr, int n, int m, int mid)
{
    int studentsCount = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentsCount++;
            if (studentsCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int findPages(vector<int> &arr, int n, int m)
{
    // Write your code here.
    if (m > n)
    {
        return -1;
    }
    int sum = 0;
    for (int i : arr)
    {
        sum += i;
    }
    int start = 0;
    int end = sum;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (isPossibleSoln(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}