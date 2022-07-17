class Solution {
  public:
    int findTime(string s1, string s2) {
        // code here
        unordered_map<char,int>mp;
        for(int i=0;i<s1.size();i++)
            mp[s1[i]] = i;
        int ind = 0;
        int temp = 0;
        for(auto x: s2){
            temp+=abs(ind-mp[x]);
            ind = mp[x];
        }
        return temp;
    }
};
