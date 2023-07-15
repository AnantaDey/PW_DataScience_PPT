/*
You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith row has exactly i coins. The last row of the staircase **may be** incomplete.

Given the integer n, return *the number of **complete rows** of the staircase you will build*.
*/
#include <bits/stdc++.h>
using namespace std;

int arrangeCoins(int n)
{
    int left = 0;
    int right = n;
    int completeRows = 0;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        long long coinsNeeded = (long long)mid * (mid + 1) / 2;

        if (coinsNeeded <= n)
        {
            completeRows = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return completeRows;
}

int main()
{
    int n = 8;
    int completeRows = arrangeCoins(n);

    std::cout << "Number of complete rows: " << completeRows << std::endl;

    return 0;
}
