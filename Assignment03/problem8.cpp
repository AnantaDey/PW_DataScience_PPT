/*
Question 8
Given an array of meeting time intervals where intervals[i] = [starti, endi],
determine if a person could attend all meetings.

Example 1:
Input: intervals = [[0,30],[5,10],[15,20]]
Output: false
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canAttendMeetings(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end(), [](const vector<int> &a, const vector<int> &b)
         { return a[0] < b[0]; });

    int n = intervals.size();
    for (int i = 1; i < n; i++)
    {
        if (intervals[i][0] < intervals[i - 1][1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    vector<vector<int>> intervals = {{0, 30}, {5, 10}, {15, 20}};

    bool result = canAttendMeetings(intervals);

    cout << "Can attend all meetings: " << (result ? "true" : "false") << endl;

    return 0;
}
