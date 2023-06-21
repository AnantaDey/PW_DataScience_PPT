/*
💡  Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

**Example:**
Input: nums = [2,7,11,15], target = 9
Output0 [0,1]

**Explanation:** Because nums[0] + nums[1] == 9, we return [0, 1][

*/

#include <iostream>
using namespace std;

std::pair<int, int> returnindex(int arr[], int n, int target)
{

    if (n == 0)
        return std::make_pair(-1, -1);

    if (n == 1 && arr[0] == target)
        return std::make_pair(0, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                return std::make_pair(i, j);
            }
        }
    }
    return std::make_pair(-1, -1);
}

int main()
{
    int arr[] = {1, 2, 3, 5, 4, 8, 9};

    pair<int, int> ans = returnindex(arr, 7, 8);

    cout << ans.first + 1 << " , " << ans.second + 1 << endl;
}