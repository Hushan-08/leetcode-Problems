class Solution {
public:
    int mySqrt(int x) {
        int low = 0, high = x;
        long long mid, ans;

        while(low <= high){
           mid = low + (high - low)/2;
           

           if(mid * mid == x){
            return mid;
           }

           else if(mid * mid < x){
            ans = mid;
            low = mid + 1;

           }

           else 
           {
            
            high = mid - 1;
           }
    }

    return ans;
    }
};