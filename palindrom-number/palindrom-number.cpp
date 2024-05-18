class Solution {
public:
    bool isPalindrome(int x) {
        long y = 0, temp = x;
        if (x < 0)
            return false; 
        
        
        while (temp) {
            y = y * 10 + temp % 10; 
            temp /= 10; 
        }
        
        
        if (x == y)
            return true; 
        else
            return false; 
    }
};