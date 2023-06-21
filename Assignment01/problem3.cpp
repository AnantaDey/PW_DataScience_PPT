/*
<aside>
💡 **Q3.** Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

**Example 1:**
Input: nums = [1,3,5,6], target = 5

Output: 2

</aside>
*/

#include <iostream>
using namespace std;

void print(int *arr, int s, int e)
{
    for (int i = s; i < e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int retIndex(int *arr, int s, int e, int target)
{

    // print(arr, s, e);
    int mid = s + (e - s) / 2;
    if (s > e)
        return mid;

    // cout << "The mid value is " << mid << endl;

    if (arr[mid] == target)
        return mid;
    else if (arr[mid] > target)
        return retIndex(arr, s, mid - 1, target);
    else
        return retIndex(arr, mid + 1, e, target);
}

int main()
{
    int arr[10] = {1, 5, 8, 10, 12, 15, 48, 50, 53, 550};

    int target = 5;
    cout << retIndex(arr, 0, 9, 13) << endl;

    return 0;
}