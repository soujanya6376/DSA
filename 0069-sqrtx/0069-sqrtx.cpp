class Solution {
public:
    int mySqrt(int x) {
        long l=0;
        long h=x;
        while(l<=h){
            long mid=(l+h)/2;
            if((mid*mid)==x)
                return mid;
            else if(mid*mid<x)
                l=mid+1;
            else if(mid*mid>x)
                h=mid-1;
        }
        return h;
    }
};