int firstUniqChar(string s) {

  //I have taken unordered map to
  //count the occurance of each character
  //return the charcter whose count is one 
  //and which comes first
  unordered_map<char, int> mp;
  
  for (auto& c : s) ++mp[c];
  
  int n = s.size();
  
  for (int i = 0; i < n; ++i)
    if (mp[s[i]] == 1)
      return i;
  return -1;
}


//Time complexity O(n)
//Space Complexity O(n)
