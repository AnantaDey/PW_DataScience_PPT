#include <bits/stdc++.h>
using namespace std;

int firstUniqChar(string s)
{

    // I have taken unordered map to
    // count the occurance of each character
    // return the charcter whose count is one
    // and which comes first
    unordered_map<char, int> mp;

    for (auto &c : s)
        ++mp[c];

    int n = s.size();

    for (int i = 0; i < n; ++i)
        if (mp[s[i]] == 1)
            return i;
    return -1;
}

int main()
{
    string s1 = "leetcode";
    string s2 = "loveleetcode";
    string s3 = "aabb";

    cout << firstUniqChar(s1) << endl;
    cout << firstUniqChar(s2) << endl;
    cout << firstUniqChar(s3) << endl;
    return 0;
}

// Time complexity O(n)
// Space Complexity O(n)
