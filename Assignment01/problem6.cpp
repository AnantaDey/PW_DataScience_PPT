/*<aside>
💡 **Q6.** Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

**Example 1:**
Input: nums = [1,2,3,1]

Output: true

</aside>*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool duplicate(int *nums, int n)
{
    unordered_set<int> duplicate;

    for (int i = 0; i < n; i++)
    {
        if (duplicate.count(nums[i]) > 0)
            return true;

        duplicate.insert(nums[i]);
    }

    return false;
}

int main()
{
    int nums[4] = {1, 2, 3, 4};

    if (duplicate(nums, 4))
        cout << "Has Duplicate" << endl;
    else
        cout << "No duplicate" << endl;

    return 0;
}