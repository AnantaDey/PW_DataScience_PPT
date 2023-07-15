/*
Given an integer array nums sorted in **non-decreasing** order, return *an array of **the squares of each number** sorted in non-decreasing order*.

**Example 1:**

**Input:** nums = [-4,-1,0,3,10]

**Output:** [0,1,9,16,100]

**Explanation:** After squaring, the array becomes [16,1,0,9,100].

After sorting, it becomes [0,1,9,16,100].
*/
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> sortedSquares(std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> result(n);
    int left = 0;
    int right = n - 1;

    for (int i = n - 1; i >= 0; --i) {
        if (std::abs(nums[left]) > std::abs(nums[right])) {
            result[i] = nums[left] * nums[left];
            ++left;
        } else {
            result[i] = nums[right] * nums[right];
            --right;
        }
    }

    return result;
}

int main() {
    std::vector<int> nums = {-4, -1, 0, 3, 10};
    std::vector<int> result = sortedSquares(nums);

    std::cout << "Sorted squares: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
