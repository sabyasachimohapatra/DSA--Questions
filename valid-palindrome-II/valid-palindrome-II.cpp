class Solution {
public:
    bool  isValid(string s,int l, int h ){
         while(l<=h){
            if(s[l]==s[h]){
                l++;
                h--;
            }
            else{
                return false;
            }
         }
         return true;
    }
    bool validPalindrome(string s) {
        int l = 0;
        int h = s.length() - 1;
        while(l<=h){
            if(s[l] == s[h]){
                l++;
                h--;
            }
            else{
               return isValid(s,l+1,h ) ||   isValid(s,l,h-1 );
            }
        }
        return true;
    }
};
