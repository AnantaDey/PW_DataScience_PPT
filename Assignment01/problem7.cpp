/*<aside>
💡 **Q7.** Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the nonzero elements.

Note that you must do this in-place without making a copy of the array.

**Example 1:**
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

</aside>*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(vector<int> nums, int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int findDuplicate(vector<int> &nums)
{
    int s = 0;
    int e = nums.size();
    int count;

    while (s <= e)
    {
        print(nums, s, e);
        int mid = s + (e - s) / 2;
        cout << "mid is " << mid << endl;
        count = 0;

        for (int k : nums)
        {
            if (k <= mid)
            {
                count++;
            }
        }
        cout << "count" << count << endl;

        if (count <= mid)
        {
            s = mid + 1;
            cout << "s " << s << endl;
        }
        else
        {
            e = mid - 1;
            cout << "e " << e << endl;
        }
    }

    return s;
}

int main()
{
    vector<int> arr = {5, 6, 7, 1, 4, 3, 2, 4, 3};

    cout << findDuplicate(arr) << endl;

    return 0;
}