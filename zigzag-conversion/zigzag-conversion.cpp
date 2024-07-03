class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        if(s.size() < numRows) return s;
        vector<string> st(numRows);
        int i=0;
        for(int j=0;j<numRows;j++){
            st[j].push_back(s[i++]);
        }


        while(i<s.size()){
            for(int j=numRows-2;j>=0  && i<s.size();j--){
            st[j].push_back(s[i++]);
          
        }
           for(int j=1;j<numRows && i<s.size();j++){
            st[j].push_back(s[i++]);
          
        } 
        }

        string ans="";
        for(auto str:st){
            ans+=str;
        }
        return ans;
    }
};
