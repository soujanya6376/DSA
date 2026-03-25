class Solution {
public:
    bool isPalindrome(int x) {
        int original=x;
        long long rev=0;
        while(x>0){
            int r=x%10;
            rev=(rev*10)+r;
            x=x/10;
        }
        if(original==rev)
            return true;
        else
            return 0;
    }
};