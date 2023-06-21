/*
<aside>
💡 **Q4.** You are given a large integer represented as an integer array arr, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

**Example 1:**
Input: digits = [1,2,3]
Output: [1,2,4]

**Explanation:** The array represents the integer 123.

Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].

</aside>
*/
#include <iostream>
using namespace std;

int *retArray(int *arr, int n)
{
    int temp = 1;
    for (int i = n - 1; i >= 0; --i)
    {
        arr[i] += temp;
        if (arr[i] == 10)
        {
            arr[i] = 0;
            temp = 1;
        }
        else
        {
            temp = 0;
        }
    }

    if (temp == 1)
    {
        int *result = new int[n + 1];
        result[0] = 1;
        for (int i = 1; i <= n; ++i)
        {
            result[i] = arr[i - 1];
        }
        for (int i = 0; i < n + 1; i++)
            cout << result[i] << " ";

        delete[] arr;
        return result;
    }
    else
    {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }

    return arr;
}
void print(int *arr, int s, int e)
{
    for (int i = s; i < e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{

    int arr[3] = {9, 9, 9};
    int *arr1 = retArray(arr, 3);
    return 0;
}