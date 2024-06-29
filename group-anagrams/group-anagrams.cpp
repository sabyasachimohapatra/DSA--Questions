class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mp;
        for(auto st:strs){
            string s=st;
            sort(s.begin(),s.end());
            mp[s].push_back(st);
        }
         vector<vector<string>> v;
         for(auto i:mp){
            v.push_back(i.second);
         }
         return v;
    }
};
