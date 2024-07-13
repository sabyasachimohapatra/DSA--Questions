class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int i=0;
        bool j=true;

        while(i<strs[0].size()){
            
            for(auto str:strs){
                if(str[i]!=strs[0][i]){
                    j=false;
                }
            }
            if(j==false) return ans;
            ans.push_back(strs[0][i]);
            i++;
        }
        return ans;
    }
};
