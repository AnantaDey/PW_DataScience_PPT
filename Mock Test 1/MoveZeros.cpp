#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    // initializing from first
    int i = 0;

    // iterating from 0th index
    for (int j = 0; j < nums.size(); j++)
    {
        // checking if nums[j] is other than zero
        //  then swap and increse the value of i
        if (nums[j] != 0)
        {
            swap(nums[j], nums[i]);
            i++;
        }
    }
}

// function to print the output
void print(vector<int> num)
{

    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
}
int main()
{

    vector<int> nums1 = {0, 1, 0, 3, 12};
    vector<int> nums2 = {0};

    // the function run
    moveZeroes(nums1);
    moveZeroes(nums2);

    // printing the output
    print(nums1);
    print(nums2);
    return 0;
}

// Time complexity O(n)
// Space Complexity O(1)
