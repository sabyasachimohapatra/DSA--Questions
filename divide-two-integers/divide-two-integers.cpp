class Solution {
public:
    int divide(int dividend, int divisor) {

    if( dividend == INT_MIN && divisor == -1 )
            return INT_MAX;
        long long int ans = dividend/divisor;
        if(ans>INT_MAX)
            return INT_MAX;
        if(ans<INT_MIN)
            return INT_MIN;
        return ans;

    int s = 0;
    int e = abs(dividend);
    int mid = s + (e-s)/2;
     ans = 1;
    while(s<=e){
        if(abs(mid*divisor) == abs(dividend)){
            ans = mid;
            break;
        }
        if(abs(mid*divisor)>abs(dividend)){
            e = mid - 1;
        }
        else{
            ans = mid; 
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    if((divisor<0 && dividend<0) || (divisor>0 && dividend>0))
        return ans;
    else{
        return -ans;
    }
    }
};