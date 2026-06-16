class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
        string s1="";
        for(char a:s){
            if(isalnum(a))
                s1+=tolower(a);
        }
        int right=s1.length()-1;
        while(left<=right){
            if(s1[left]!=s1[right])
                return false;
            else{
                left++;
                right--;
            }
        }
        return true;
    }
};