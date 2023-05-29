#include <iostream>
#include <vector>
using namespace std;

int pivotArray(vector<int> &nums)
{
    int size = nums.size();
    int Sum = 0;
    int leftSum = 0;
    int rightSum = 0;
    for (int i = 0; i < size; i++)
        Sum += nums[i];

    for (int j = 0; j < size; j++)
    {
        rightSum = Sum - nums[j] - leftSum;
        if (leftSum == rightSum)
        {
            return j;
        }
        leftSum += nums[j];
    }
    return -1;
}

int main()
{

    vector<int> nums = {2, 1, -1};
    int res = pivotArray(nums);
    cout << "Pivot is at index " << res << " which is " << nums[res];
}
