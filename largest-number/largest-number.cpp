class Solution {
public:
   static bool fun(string a,string b){
      string  t1=a+b;
      string   t2=b+a;
        return t1>t2;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> vals;
        for(auto val:nums){
            vals.push_back(to_string(val));
        }
        sort(vals.begin(),vals.end(),fun);
        if(vals[0]=="0") return "0";
        string ans="";
        for(auto i:vals){
            ans+=i;
        }
        return ans;
    }
};
