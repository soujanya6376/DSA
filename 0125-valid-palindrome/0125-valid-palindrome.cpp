class Solution {
public:
    bool isPalindrome(string s) {
       string n="";
       for(char ch : s){
            if(isalnum(ch))
                n+=tolower(ch);
       }
       int left = 0;
       int right = n.length()-1;
       while(left<=right){
        if(n[left]==n[right]){
            left++;
            right--;
        }
        else
            return false;
       }
       return true;
    }
};