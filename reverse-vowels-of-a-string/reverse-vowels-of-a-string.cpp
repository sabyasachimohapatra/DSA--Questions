class Solution {

public:
    bool isValid(string s,int i){
        s[i]=tolower(s[i]);
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int l=0;
        int h=s.length()-1;
        while(l<h){
            if(isValid(s,l) && isValid(s,h) ){
                swap(s[l],s[h]);
                l++;
                h--;
            }
            else if(isValid(s,l)==0){
                l++;
            }
            else if(isValid(s,h)==0){
                h--;
            }
        }
        return s;
    }
};
