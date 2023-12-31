/*
Question 7
You are given an inclusive range [lower, upper] and a sorted unique integer array
nums, where all elements are within the inclusive range.

A number x is considered missing if x is in the range [lower, upper] and x is not in
nums.

Return the shortest sorted list of ranges that exactly covers all the missing
numbers. That is, no element of nums is included in any of the ranges, and each
missing number is covered by one of the ranges.

Example 1:
Input: nums = [0,1,3,50,75], lower = 0, upper = 99
Output: [[2,2],[4,49],[51,74],[76,99]]

Explanation: The ranges are:
[2,2]
[4,49]
[51,74]
[76,99]
*/
#include <iostream>
#include <vector>

using namespace std;

vector<string> findMissingRanges(vector<int> &nums, int lower, int upper)
{
    vector<string> ranges;
    int start = lower;

    for (int num : nums)
    {
        if (num > start)
        {
            int end = num - 1;
            ranges.push_back(start == end ? to_string(start) : to_string(start) + "->" + to_string(end));
        }
        start = num + 1;
    }

    if (start <= upper)
    {
        ranges.push_back(start == upper ? to_string(start) : to_string(start) + "->" + to_string(upper));
    }

    return ranges;
}

int main()
{
    vector<int> nums = {0, 1, 3, 50, 75};
    int lower = 0;
    int upper = 99;

    vector<string> result = findMissingRanges(nums, lower, upper);

    cout << "Missing ranges:" << endl;
    for (const string &range : result)
    {
        cout << range << endl;
    }

    return 0;
}
