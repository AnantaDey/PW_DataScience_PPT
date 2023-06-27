/*
An array is monotonic if it is either monotone increasing or monotone decreasing.

An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is
monotone decreasing if for all i <= j, nums[i] >= nums[j].

Given an integer array nums, return true if the given array is monotonic, or false otherwise.

Example 1:
Input: nums = [1,2,2,3]
Output: true
*/
#include <bits/stdc++.h>
using namespace std;

bool isMonotonic(vector<int> &nums)
{

    int flag1 = 1;
    int flag2 = 1;

    for (int i = 0; i + 1 < nums.size(); i++)
    {
        if (nums[i] == nums[i + 1])
            continue;

        if (nums[i] > nums[i + 1])
            flag1 = 1;
        else
            flag1 = 0;
        if (nums[i] < nums[i + 1])
            flag2 = 0;
        else
            flag2 = 1;

        cout << flag1 << " " << flag2 << " ";

        if ((flag1 ^ flag2) == 1)
            return false;

        cout << endl;
    }
    return true;

    // for (int i = 0; i + 1 < nums.size(); i++)
    // {
    //     if (nums[i] <= nums[i + 1])
    //         flag++;
    // }

    // if (flag == nums.size())
    //     return true;
    // else
    //     return false;
}

int main()
{
    vector<int> nums = {1, 2, 2, 3};
    vector<int> v2 = {1, 2, 3, 3, 2, 1};

    cout << isMonotonic(nums) << endl;
    cout << "--------------------------" << endl;
    cout << isMonotonic(v2) << endl;
    //  cout << (1 ^ 0) << endl;
    return 0;
}